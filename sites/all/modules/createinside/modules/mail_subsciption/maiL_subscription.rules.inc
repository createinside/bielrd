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