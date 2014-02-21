<?php

/* TODO: Skal flyttes til respektive filer */


/**
 * Implements hook_menu().
 */
function mail_subscription_temp_menu() {
	$items['admin/config/system/mail_subscription_settings'] = array(
	    'title' => 'Email SendGrid settings',
	    'description' => 'Administer SendGrid email settings',
	    'page callback' =>'drupal_get_form',
	    'page arguments' => array('mail_subscription_sendgrid_admin_form'),
	    'access arguments' => array('administer sendgrid email'),	
	);
	$items['node/%node/send'] = array(
	    'title' => 'Send',
	    'page callback' => 'drupal_get_form',
	    'page arguments' => array('mail_subscription_admin_send_form'),
	    'access callback' => 'mail_subscription_addtab_totype_access_callback',
	    'access arguments' => array(1),	
	    'type' => MENU_LOCAL_TASK,
	    'weight' => 100,
	);  
  
  return $items;
	
}


/**
 * Implements hook_permission().
 */
function mail_subscription_permission() {
  return array(
    'administer sendgrid email' => array(
      'title' => t('Administer SendGrid settings'),
    ),
  );
}

/**
 * Show send tab only on specific content type.
 */
function mail_subscription_addtab_totype_access_callback($node) {
	return $node->type == 'subscription_email' && user_access('access content');
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


/***********************************
 * 			SENDGRID API.		   *
 **********************************/
 
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
		$json_string['sub']['%efternavn%'][] = $tilmelding->field_sub_type_tid;
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
      $query
      		->condition('field_sub_type_tid', $list, "IN")  
      		->fields('n', array('field_sub_email_email'))
      		->fields('e', array('field_sub_name_value'))
      		->fields('c', array('field_sub_type_tid'));


	  $result = $query->execute()->fetchall();
	  return $result;
}

/**
 * Implements hook_rules_action_info()
 * 
**/ 

function mail_subscription_rules_action_info() {
	$actions = array(
    'mail_subscription_send' => array(
      'label' => t('Send subscription email'),
      'group' => t('Mail Subscriptions'),
      'parameter' => array(
     

    ),
	),
  );

  return $actions;
}

function mail_subscription_send() {
	
}
