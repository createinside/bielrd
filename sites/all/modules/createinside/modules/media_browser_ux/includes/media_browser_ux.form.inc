<?php
	
/**
 * Add Folder Form
 *
 * Implements hook_form().
 */
function media_browser_ux_add_folder_form($form, $form_state, $parent_folder_id) {

	$parent_folder = taxonomy_term_load($parent_folder_id);

	$form["folder_desc"] = array(
		"#markup" => "Denne mappe vil blive oprettet som en undermappe til <strong>".$parent_folder->name."</strong>:",
	);	
	$form["vid"] = array(
		"#type" => "hidden",
		"#value" => $parent_folder->vid,
	);
	$form["folder_parent"] = array(
		"#type" => "hidden",
		"#value" => $parent_folder_id,
	);
	$form["folder_name"] = array(
		"#type" => "textfield",
		'#title' => 'Mappenavn',
	);
	$form['submit'] = array(
		'#type' => 'submit',
		'#value' => t('Create'),
	);
	$form['cancel'] = array(
    '#markup' => l(t('Cancel'), 'admin/content/file') ,
    '#weight' => 1001,  
  );
	return $form;
}

/**
 * Add Folder Form Submit
 *
 * Implements hook_form_submit().
 */
function media_browser_ux_add_folder_form_submit($form, $form_state) {
	
  $term = new stdClass();
  $term->name = $form_state["values"]["folder_name"];
  $term->vid = $form_state["values"]["vid"];
  $term->parent = array($form_state["values"]["folder_parent"]);
  taxonomy_term_save($term);
  
  drupal_goto("admin/content/file");
}

/**
 * Delete Folder Form
 *
 * Implements hook_form().
 */
function media_browser_ux_delete_folder_form($form, $form_state, $folder_id) {

	$folder = taxonomy_term_load($folder_id);

	$form["markup"] = array(
		"#markup" => "<p>Du har valgt mappen <strong>".$folder->name."</strong>.</p>",
	);
	$form["tid"] = array(
		"#type" => "hidden",
		"#value" => $folder_id,
	);
	
	// Check to see if the folder contains other folders
	$children = taxonomy_get_children($folder->tid);
		
	if(!empty($children)) {

	  drupal_set_message("Du kan ikke slette denne mappe, fordi den indeholder andre mapper.", "error");
	  
	  $form["error"] = array(
			"#markup" => "<p>Før du kan slette denne mappe, skal du slette de underliggende mapper.</p>",
	  );	  
		$form['cancel'] = array(
	    '#markup' => l(t('Cancel'), 'admin/content/file') ,
	    '#weight' => 1001,  
	  );	  
	  return $form;
	}
		
	// Check to see if the folder contains files
  $file_query = new EntityFieldQuery();
  $files = $file_query
    ->entityCondition('entity_type', 'file')
    ->fieldCondition('field_folder', 'tid', $folder_id)
    ->execute();

	// The folder contains files
  if (!empty($files['file'])) {
	  
	  drupal_set_message("Du kan ikke slette denne mappe, fordi den indeholder filer.", "error");
	  
	  $form["error"] = array(
			"#markup" => "<p>Før du kan slette denne mappe, skal du flytte filerne til en anden mappe eller slette dem.</p>",
	  );	  
		$form['cancel'] = array(
	    '#markup' => l(t('Cancel'), 'admin/content/file') ,
	    '#weight' => 1001,  
	  );	  
	  return $form;
	}
	
	// The folder is empty
	else {
		return confirm_form(
			$form, 
			"Er du sikker på at du vil slette mappen <em>".$folder->name."</em>?", 
			'admin/content/file',
			NULL,
			t('Delete')
		);
	}
}

/**
 * Delete Folder Form Submit
 *
 * Implements hook_form_submit().
 */
function media_browser_ux_delete_folder_form_submit($form, $form_state) {
	
	if($form_state["values"]["confirm"]) {	
		taxonomy_term_delete($form_state['values']['tid']);
		
		// Clear views cache
		media_browser_plus_clear_views_cache('media_browser_plus_folders');

		drupal_goto("admin/content/file");
	}
}
