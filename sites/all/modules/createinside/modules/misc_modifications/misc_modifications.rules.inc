<?php

function misc_modifications_rules_action_info() {
	$actions = array(
    'misc_modifications_action_1' => array(
      'group' => t('MISC'),
      'label' => t('node->workbench_moderation[updating_live_revision] = 1'),
	    'parameter' => array(
	      'node' => array(
	      	'type' => 'node',
					'label' => 'Node',
	      ),
			),
    ),
    'misc_modifications_action_2' => array(
      'group' => t('MISC'),
      'label' => t('subscription_email->field_subscription_attach_view[LANGUAGE_NONE][0][view_id] = subscription_news:nyheder'),
	    'parameter' => array(
	      'subscription_email' => array(
	      	'type' => 'node',
					'label' => 'Node',
	      ),
			),
    ),
    'misc_modifications_action_3' => array(
      'group' => t('MISC'),
      'label' => t('subscription_email->field_subscription_attach_view[LANGUAGE_NONE][0][view_id] = subscription_offerings:nyheder;'),
	    'parameter' => array(
	      'subscription_email' => array(
	      	'type' => 'node',
					'label' => 'Node',
	      ),
			),
    ),
	);
	return $actions;
}

function misc_modifications_action_1($node) {
  $node->workbench_moderation['updating_live_revision'] = 1;
  node_save($update_node);
}

function misc_modifications_action_2(&$subscription_email) {

error_log(print_r('action_2',1),3,'/home/asd/log.log');
error_log(print_r($subscription_email,1),3,'/home/asd/log.log');

}

function misc_modifications_action_3(&$subscription_email) {

error_log(print_r('action_3',1),3,'/home/asd/log.log');
error_log(print_r($subscription_email,1),3,'/home/asd/log.log');

}
