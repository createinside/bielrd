<?php

/**
 * Implements hook_token_info().
 */
function mail_subscription_token_info() {

  // Tokens for service subscriber
  $subscriber['subscribe-url'] = array(
    'name' => t('Subscribe Confirm URL'),
    'description' => t('The URL of the page where the subscription is confirmed.'),
  );
  $subscriber['unsubscribe-url'] = array(
    'name' => t('Unsubscribe Confirm URL'),
    'description' => t('The URL of the page where the unsubscription is confirmed.'),
  );
    
  return array(
    'tokens' => array(
      'entityform' => $subscriber,
    ),
  );  
}

/**
 *
 */
function mail_subscription_tokens($type, $tokens, array $data = array(), array $options = array()) {

	$replacements = array();
	$sanitize = !empty($options['sanitize']);

	if ($type == 'entityform' && !empty($data['entityform'])) {
		$entityform = $data['entityform'];
		
		// Subscriber Data
		$sid = $entityform->entityform_id;
		$email = $entityform->field_sub_email[LANGUAGE_NONE][0]["email"];
		
		$hash = mail_subscription_generate_hash($email, $sid);
		
		foreach ($tokens as $name => $original) {
			switch($name) {
				case "subscribe-url";
					$replacements[$original] = url('subscription/confirm/add/' . $hash, array('absolute' => TRUE, 'language' => $language));			
				break;
				case "unsubscribe-url";
					$replacements[$original] = url('subscription/confirm/remove/' . $hash, array('absolute' => TRUE, 'language' => $language));			
				break;
			}
		}	
	}
	return $replacements;
}