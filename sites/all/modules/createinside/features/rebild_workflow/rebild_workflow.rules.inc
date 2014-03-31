<?php
 
/**
 * Implements hook_rules_action_info().
 */
function rebild_workflow_rules_action_info() {
  return array(
    'rebild_workflow_fetch_revision_author' => array(
      'label' => t('Fetch latest revision author'),
      'group' => t('Workflow'),
      'parameter' => array(
        'nid' => array('type' => 'integer', 'label' => t('Node Id')),	
        'vid' => array('type' => 'integer', 'label' => t('Version Id')),	
      ),
      'provides' => array(
      	'revision_author' => array('type' => 'user', 'label' => t('Revision author')),
			),
    ),
  );
}
 
/**
 * Rule action foo.
 */
function rebild_workflow_fetch_revision_author($nid, $vid) {
  
  $node = node_load($nid, $vid);
 
	dpm(node_revision_list($node));

  if (!$node) {
    throw new RulesEvaluationException('Unable to load entity with id "@id"', array('@id' => $nid));
  }
    
  $revision_author = user_load($node->revision_uid);

  return array('revision_author' => $revision_author);  
}