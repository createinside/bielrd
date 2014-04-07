<?php
 
/**
 * Implements hook_rules_action_info().
 */
function rebild_workflow_rules_action_info() {
  return array(
    'rebild_workflow_fetch_revision_editor' => array(
      'label' => t('Fetch latest revision author'),
      'group' => t('Workflow'),
      'parameter' => array(
        'nid' => array('type' => 'integer', 'label' => t('Node Id')),	
        'vid' => array('type' => 'integer', 'label' => t('Version Id')),	
      ),
      'provides' => array(
      	'revision_author' => array('type' => 'user', 'label' => t('Revision author')),
			),
      'module' => 'rebild_workflow',
    ),
    'rebild_workflow_fetch_revision_editor_or_author' => array(
      'label' => t('Fetch latest revision editor or original author'),
      'group' => t('Workflow'),
      'parameter' => array(
        'nid' => array('type' => 'integer', 'label' => t('Node Id')),	
        'vid' => array('type' => 'integer', 'label' => t('Version Id')),	
      ),
      'provides' => array(
      	'revision_author' => array('type' => 'user', 'label' => t('Revision author')),
			),
      'module' => 'rebild_workflow',
    ),
  );
}
 
/**
 * Rule action: Fetch latest revision editor (fagredaktør).
 */
function rebild_workflow_fetch_revision_editor($nid, $vid) {
	
  $node = node_load($nid, $vid);
	$revisions = node_revision_list($node);
	
	// Organize unique users into array
	$uids = array();
	foreach($revisions as $rid => $revision) {
		$uids[$revision->timestamp] = $revision->uid;
	}
	$uids = array_unique($uids);
	
	$users = user_load_multiple($uids);		
		
	// Return first user with role of editor (fagredaktør)
	foreach($users as $uid => $user) {
		if(in_array("fagredaktør", $user->roles)) {
			return array('revision_author' => $user);  
		}
	}	
}

/**
 * Rule action: Fetch latest revision editor (fagredaktør) or original author.
 */
function rebild_workflow_fetch_revision_editor_or_author($nid, $vid) {
	
  $node = node_load($nid, $vid);
	$revisions = node_revision_list($node);
	
	// Organize unique users into array
	$uids = array();
	foreach($revisions as $rid => $revision) {
		$uids[$revision->timestamp] = $revision->uid;
	}
	$uids = array_unique($uids);
	
	$users = user_load_multiple($uids);		
		
	// Return first user with role of editor (fagredaktør)
	foreach($users as $uid => $user) {
		if(in_array("fagredaktør", $user->roles)) {
			return array('revision_author' => $user);  
		}
	}	
	
	// Return orignal author if no editor is found
	return array('revision_author' => user_load($node->uid));  
}

/**
 * Implementation of hook_rules_condition_info()
 */
function rebild_workflow_rules_condition_info() {
  return array(
    'rebild_workflow_content_has_multiple_editors' => array(
      'label' => t('Content has multiple editors'),
      'group' => t('Workflow'),
      'arguments' => array(
        'nid' => array('type' => 'integer', 'label' => t('Node Id')),	
      ),
      'module' => 'rebild_workflow',
    ),
  );
}

/**
 * Rules condition: Content has multiple editors (fagredaktører)
 *
 * Checks to see if content has been revised by multiple editors.
 */
function rebild_workflow_content_has_multiple_editors($nid) {
 
  $node = node_load($nid);
	$revisions = node_revision_list($node);
	
	// Organize unique users into array
	$uids = array();
	foreach($revisions as $rid => $revision) {
		$uids[$revision->timestamp] = $revision->uid;
	}
	$uids = array_unique($uids);
	
	// Return if only one author
	if(count($uids) <= 1) return FALSE; 
	
	$users = user_load_multiple($uids);
	
	// Check if content has been edited by a user with role of editor (fagredaktør)
	foreach($users as $uid => $user) {
		if(in_array("fagredaktør", $user->roles)) {
			// User must not be the same as the original author
			if($uid!=$node->uid) {
				return TRUE;
			}  
		}
	}
	return FALSE;			
}