<?php

/**
 * Form Subscribe
 */
function mail_subscription_subscribe_form($form, $form_state) {
	
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
			array('rule' => 'email', 'error' => 'Indtast venligst en gyldig emailadresse'),
			array('rule' => 'unique_email', 'error' => 'Emailadressen er allerede tilmeldt')
		),			
		'#filters' => array('trim'),
	);
	$form["service"] = array(
		"#type" => "checkboxes",
		"#title" => "Type",	
		"#required" => TRUE,
		"#options" => mail_subscription_get_types()
	);
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Tilmeld"
	);
	return $form;
}

/**
 * Form Subscribe: Validate
 */
function mail_subscription_subscribe_form_validate($form, $form_state) {

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
	foreach($form_state['values']['service'] as $service) {
		if($service!=0) {
			$services[] = $service;
		}
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
		),		
		'#filters' => array('trim'),
	);
	$form["service"] = array(
		"#type" => "checkboxes",
		"#title" => "Type",	
		"#required" => TRUE,
		"#options" => mail_subscription_get_types()
	);
	$form["submit"] = array(
		"#type" => "submit",
		"#value" => "Afmeld"
	);
	return $form;
}

/**
 * Form Unsubscribe: Validate
 */
function mail_subscription_unsubscribe_form_validate($form, $form_state) {

	// Ensure that email exists on list
	
	
}

/**
 * Form Unsubscribe: Submit
 */
function mail_subscription_unsubscribe_form_submit($form, $form_state) {
	drupal_set_message("Vi har sendt en email til dig, hvor du skal bekræfte din afmelding");
}

/**
 * Form Confirm Add
 */
function mail_subscription_confirm_add_form($form, $form_state) {
	
	$hash = arg(3);
	$subscriber = mail_subscription_subscriber_load_by_hash($hash);
	
	$form = array();
	$form["markup"] = array(
		"#markup" => "<p>Klik venligst på nedenstående knap for at bekræfte din tilmelding til vores abonnementsservice.</p>"
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
  );
}

/**
 * Validation rule: Unique email
 */
function mail_subscription_unique_email($value) {

	return TRUE;

	/*
	if (db_query("SELECT COUNT(*) FROM {users} WHERE mail = :mail", array(':mail' => $value))->fetchField()) {
		return false;
	}
	return true;
	*/
}