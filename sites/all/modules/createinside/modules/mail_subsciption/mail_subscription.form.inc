<?php

/**
 * Form Subscribe
 */
function mail_subscription_subscribe_form($form, $form_state, $type = NULL) {
	
	$form = array();
	$form["name"] = array(
		"#type" => "textfield",
		"#title" => "Navn",	
		"#required" => TRUE,
		'#filters' => array('trim'),
	);
	$form["email"] = array(
		"#type" => "textfield",
		"#title" => "Email",	
		"#required" => TRUE,
		'#rules' => array(
			array('rule' => 'email', 'error' => 'Indtast venligst en gyldig emailadresse.'),
			array('rule' => 'unique_email', 'error' => 'Emailadressen er allerede tilmeldt.')
		),			
		'#filters' => array('trim'),
	);
	if(isset($type)) {
		$form["service"] = array(
			"#type" => "hidden",
			"#value" => $type,
			"#required" => TRUE,
		);	
	}
	else {
		$form["service"] = array(
			"#type" => "checkboxes",
			"#title" => "Type",	
			"#required" => TRUE,
			"#options" => mail_subscription_get_types()
		);
	}
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Tilmeld"
	);
	return $form;
}

/**
 * Form Subscribe: Submit
 */
function mail_subscription_subscribe_form_submit($form, $form_state) {

	// Create subscriber
	$entityform = entity_create('entityform', array(
	  'type' => "service_subscriber",
	  'created' => time(),
	  'changed' => time(),
	  'language' => LANGUAGE_NONE,
	  'uid' => 0
	));
	
	$services = array();
	
	if(is_array($form_state['values']['service'])) {
		foreach($form_state['values']['service'] as $service) {
			if($service!=0) {
				$services[] = $service;
			}
		}
	}
	else {
		$services[] = array("tid" => $form_state['values']['service']);
	}
	
	$wrapper = entity_metadata_wrapper('entityform', $entityform);
	$wrapper->field_sub_name = $form_state['values']['name'];
	$wrapper->field_sub_email = $form_state['values']['email'];
	$wrapper->field_sub_type = $services;
	$wrapper->field_sub_confirmed = 0;
	$wrapper->save();

	$subscriber = $wrapper->value();
	
	drupal_set_message("Vi har sendt en email til dig, hvor du skal bekræfte din tilmelding");

	rules_invoke_event("service_subscriber_add", $subscriber);
}

/**
 * Form Unsubscribe
 */
function mail_subscription_unsubscribe_form($form, $form_state) {
	
	$form = array();
	$form["email"] = array(
		"#type" => "textfield",
		"#title" => "Email",	
		"#required" => TRUE,
		'#rules' => array(
			array('rule' => 'email', 'error' => 'Indtast venligst en gyldig emailadresse'),
			array('rule' => 'email_exists', 'error' => 'Emailadressen er ikke tilmeldt og kan derfor ikke afmeldes.')
		),		
		'#filters' => array('trim'),
	);
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Afmeld"
	);
	return $form;
}

/**
 * Form Unsubscribe: Submit
 */
function mail_subscription_unsubscribe_form_submit($form, $form_state) {

	// Load subscriber from email
	$subscriber = mail_subscription_subscriber_load_by_email($form_state["values"]["email"]);

	drupal_set_message("Vi har sendt en email til dig, hvor du skal bekræfte din afmelding");
	
	rules_invoke_event("service_subscriber_remove", $subscriber);
}

/**
 * Form Confirm Add
 */
function mail_subscription_confirm_add_form($form, $form_state) {
	
	$hash = arg(3);
	$subscriber = mail_subscription_subscriber_load_by_hash($hash);
	
	$str = "<p>Klik på nedenstående knap for at bekræfte tilmeldingen af <strong>".$subscriber->field_sub_email[LANGUAGE_NONE][0]["email"]."</strong> til vores abonnementsservice.</p>";
	
	$form = array();
	$form["markup"] = array(
		"#markup" => $str
	);
	$form["sid"] = array(
		"#type" => "hidden",
		"#value" => $subscriber->entityform_id,
		'#filters' => array('trim'),
	);
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Bekræft tilmelding"
	);
	return $form;
}

/**
 * Form Confirm Add: Submit
 */
function mail_subscription_confirm_add_form_submit($form, $form_state) {

	// Set subscriber entity to confirmed
	$sid = $form_state["values"]["sid"];
	$subscriber = entityform_load($sid);
		
	$wrapper = entity_metadata_wrapper("entityform", $subscriber);
	$wrapper->field_sub_confirmed = 1;
	$wrapper->save();

	drupal_set_message("Din tilmelding er hermed bekræftet.");
	drupal_goto("<front>");
}

/**
 * Form Confirm Remove
 */
function mail_subscription_confirm_remove_form($form, $form_state) {
	
	$hash = arg(3);
	$subscriber = mail_subscription_subscriber_load_by_hash($hash);
	
	$str = "<p>Klik på nedenstående knap for at bekræfte afmeldingen af <strong>".$subscriber->field_sub_email[LANGUAGE_NONE][0]["email"]."</strong> fra vores abonnementsservice.</p>";
	
	$form = array();
	$form["markup"] = array(
		"#markup" => $str
	);
	$form["sid"] = array(
		"#type" => "hidden",
		"#value" => $subscriber->entityform_id,
		'#filters' => array('trim'),
	);
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Bekræft afmelding"
	);
	return $form;
}

/**
 * Form Confirm Remove: Submit
 */
function mail_subscription_confirm_remove_form_submit($form, $form_state) {

	// Set subscriber entity to confirmed
	$sid = $form_state["values"]["sid"];
	$subscriber = entityform_delete_multiple(array($sid));
		
	drupal_set_message("Din afmelding er hermed bekræftet.");
	drupal_goto("<front>");
}

/***********************************************************/



/**
 * Get subscription types
 */
function mail_subscription_get_types() {
	
	$vocabulary = taxonomy_vocabulary_machine_name_load("subscription_types");	
	$terms = taxonomy_get_tree($vocabulary->vid);

	$options = array();

	foreach($terms as $term) {
		$options[$term->tid] = $term->name;
	}	
	return $options;
}

/**
 * Implementation of hook_fapi_validation_rules
 */
function mail_subscription_fapi_validation_rules() {
  return array(
    'unique_email' => array(
    	'callback' => 'mail_subscription_unique_email',
      'error_msg' => 'Invalid value for %field'
		),
    'email_exists' => array(
    	'callback' => 'mail_subscription_email_exists',
      'error_msg' => 'Invalid value for %field'
		),
  );
}

/**
 * Validation rule: Unique email
 */
function mail_subscription_unique_email($email) {

	$query = new EntityFieldQuery();
	$query->entityCondition('entity_type', 'entityform')
	->entityCondition('bundle', 'service_subscriber')
  ->fieldCondition('field_sub_email', 'email', $email, '=');
	$count = $query->count()->execute();

	if($count>0) return FALSE;
	return TRUE;
}

/**
 * Validation rule: Email exists
 */
function mail_subscription_email_exists($email) {

	$query = new EntityFieldQuery();
	$query->entityCondition('entity_type', 'entityform')
	->entityCondition('bundle', 'service_subscriber')
  ->fieldCondition('field_sub_email', 'email', $email, '=')
	->addMetaData('account', user_load(1));
	$count = $query->count()->execute();

	if($count>0) return TRUE;
	return FALSE;
}

/**
 * Sendgrid settings form.
 */
function mail_subscription_sendgrid_admin_form() {
  $form = array();

  $form['mail_sendgrid_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Username'),
    '#description' => t('The SendGrid Username'),
    '#default_value' => variable_get('mail_sendgrid_username', ''),
  );

  $form['mail_sendgrid_apikey'] = array(
    '#type' => 'password',
    '#title' => t('API Key'),
    '#description' => t('The SendGrid Password'),
    '#default_value' => variable_get('mail_sendgrid_apikey', ''),
  );
  $form['mail_sendgrid_sub_username'] = array(
    '#type' => 'textfield',
    '#title' => t('Subuser Username'),
    '#description' => t('The SendGrid subuser Username'),
    '#default_value' => variable_get('mail_sendgrid_sub_username', ''),
  );

  $form['mail_sendgrid_sub_key'] = array(
    '#type' => 'password',
    '#title' => t('Subuser Password'),
    '#description' => t('The SendGrid subuser Password'),
    '#default_value' => variable_get('mail_sendgrid_sub_key', ''),
  );

  return system_settings_form($form);
}
 
/**
 * Admin page.
 * Send form - choose where to send the email.
 */
function mail_subscription_admin_send_form() {	

	$form['#attributes'] = array(
      'enctype' => 'multipart/form-data'
    );
	$active = array(0 => t('Send til test adresse'), 1 => t('Send til liste'));

	$form['mail_subscription_send_selected'] = array(
		'#type' => 'radios',
		'#title' => t('Vælg type udsending'),
		'#default_value' => 0,
		'#required' => true,
		'#options' => $active,
		'#description' => t('Send email til test adresse eller til liste.'),
	);
		 
	$form['mail_subscription_send_testemail'] = array(
		'#type' => 'textfield',
		'#title' => t('Test email'),
		'#description' => t('Indtast en test email adresse. Udfyldes kun hvis email sendes til en test adresse.'),
	);

	
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Send'),
		'#submit' => array('mail_subscription_admin_send_form_submit'),
	);	
	
	return $form;
}

/***********************************
 * 			SENDGRID API.		   *
 **********************************/

/**
 *  Send submit function - wrap node data in html and send the email with SendGrid SMTP API.
 *  http://sendgrid.com/docs/API_Reference/SMTP_API/index.html
 *	TODO: Batch send mass emails. JSON string cannot exceed 1000 subscribers.
 **/
function mail_subscription_admin_send_form_submit($form, $form_state) {
	$node = node_load(arg(1));
	$indhold = node_view($node, 'standard');
		
	unset($indhold['#contextual_links']);
	$content = drupal_render($indhold);
	$textversion = strip_tags($content);
	/* Variables defining the content of the newsletter */
	
	$list = array();
	$list[0] = $node->field_subscription_list['und'][0]['tid'];
	/* Set the category - used for email statistics tracking. format: US-ASCII */
	$category = mb_convert_encoding(($node->nid . '__' .  $node->type), "US-ASCII");

	/* Get subscription list */
	$subscriptions = mail_subscription_get_subscribers($list);
	$json_string = array();
	foreach ($subscriptions as $key => $tilmelding) {
		$json_string['to'][] = $tilmelding->field_sub_email_email;
		$json_string['sub']['%fornavn%'][] = $tilmelding->field_sub_name_value;
	}
	$url = 'http://sendgrid.com/';
	$subuser = variable_get('mail_sendgrid_sub_username');
	$subpass = variable_get('mail_sendgrid_sub_key');
	

	$json_string['category'] = strip_tags($category);	
	
	$params = array(
	    'api_user'  => $subuser,
	    'api_key'   => $subpass,
	    'x-smtpapi' => json_encode($json_string),
	    'to'        => 'intern@createinside.com',
	    'subject'   => $node->title,
	    'html'      => $content,
	    'text'      => $textversion,
	    'from'      => 'intern@createinside.com',
	    'fromname'	=> 'Rebild',	    
	  );	
	
	$request =  $url.'api/mail.send.json';
	
	// Generate curl request
	$session = curl_init($request);
	// Tell curl to use HTTP POST
	curl_setopt ($session, CURLOPT_POST, true);
	// Tell curl that this is the body of the POST
	curl_setopt ($session, CURLOPT_POSTFIELDS, $params);
	// Tell curl not to return headers, but do return the response
	curl_setopt($session, CURLOPT_HEADER, false);
	curl_setopt($session, CURLOPT_RETURNTRANSFER, true);
	
	// obtain response
	$response = curl_exec($session);
	curl_close($session);
	
	// print everything out
	$decoded_response = drupal_json_decode($response);
	
	if ($decoded_response['message'] == 'success') {
		drupal_set_message('Email afsendelse gennemført!');
	}
	else {
		drupal_set_message('Der opstod en fejl; ' . $decoded_response['errors'][0]);
	}	
	return $response;

}

/**
 * Function get subscribers referenced to a specific term ($list)
 * The defined fields must match the fields in the database. 
**/ 
function mail_subscription_get_subscribers($list) {
	$query = db_select('field_data_field_sub_email', 'n');
      $query->join('field_data_field_sub_name', 'e','n.entity_id = e.entity_id');
      $query->join('field_data_field_sub_type', 'c','n.entity_id = c.entity_id');
      $query->join('field_data_field_sub_confirmed', 'd','n.entity_id = d.entity_id');
      $query
      		->condition('field_sub_type_tid', $list, "IN")  
      		->condition('field_sub_confirmed_value', 1, "=")  
      		->fields('n', array('field_sub_email_email'))
      		->fields('e', array('field_sub_name_value'))
      		->fields('c', array('field_sub_type_tid'));


	  $result = $query->execute()->fetchall();
	  return $result;
}
