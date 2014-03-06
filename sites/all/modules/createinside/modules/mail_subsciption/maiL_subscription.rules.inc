<?php

/**
 * Implementation of hook_rules_event_info().
 */
function mail_subscription_rules_event_info() {
  return array(
    'service_subscriber_add' => array(
      'label' => t('A service subscriber has been added'),
      'module' => 'mail_subscription',
      'group' => 'Service Subscription',
      'variables' => array(
        'subscriber' => array('type' => 'entityform', 'label' => t('Subscriber')),
      ),
    ),
    'service_subscriber_remove' => array(
      'label' => t('A service subscriber has been removed'),
      'module' => 'mail_subscription',
      'group' => 'Service Subscription',
      'variables' => array(
        'subscriber' => array('type' => 'entityform', 'label' => t('Subscriber')),
      ),
    ),
  );
}

/**
 * Implements hook_rules_action_info()
 * 
**/ 

function mail_subscription_rules_action_info() {
	$actions = array(
	  'mail_subscription_send' => array(
	    'label' => t('Send subscription email'),
	    'group' => 'Service Subscription',
	    'parameter' => array(
	      'node' => array(
	      	'type' => 'node',
					'label' => 'Node',
	      ),
			),
		),
	);
	return $actions;
}

function mail_subscription_send($node) {

	$subject = $node->title;
	$node->title = NULL;
	$indhold = node_view($node, 'standard');
		
	unset($indhold['#contextual_links']);
			
	$content = drupal_render($indhold);
	$content = theme("mail_subscription_email", array("content" => $content));
	
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
	    'subject'   => $subject,
	    'html'      => $content,
	    'text'      => $textversion,
	    'from'      => 'abonnement@rebild.dk',
	    'fromname'	=> 'Rebild Kommune',
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
