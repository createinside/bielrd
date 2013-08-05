<?php

/**
 * Implements hook_views_query_alter().
 */
function manualcrop_modification_views_query_alter(&$view, &$query) {
	// tilføjer ændringer til media->library	
	if ($view->name == 'media_default' && $view->current_display == 'media_browser_1') {
		
		// tjekker hvilke billeder som ikke er cropped allerede
		$query = db_query("SELECT fm.fid 
			FROM {file_managed} fm
			LEFT JOIN {manualcrop} mc ON fm.fid = mc.fid
			WHERE 
			mc.fid IS :null
		
			", array( ':null' => NULL))->fetchAll();
		$fids = array();
		foreach ($query as $fid){
			$fids[] = $fid->fid;
		} 		
		
		// laver en ny where condition i Media browser viewet som vælger de billeder som ikke er cropped
		$view->query->where[2] = array();	
		$view->query->where[2]['conditions'] = array();
		$view->query->where[2]['conditions'][0] = array();
		$view->query->where[2]['conditions'][0]['field'] = 'file_managed.fid';
		$view->query->where[2]['conditions'][0]['value'] = $fids;
		$view->query->where[2]['conditions'][0]['operator'] = 'IN';
		$view->query->where[2]['args'] = array();
		$view->query->where[2]['type'] = 'AND';
	}
	// tilføjer ændringer til media->My files
	if ($view->name == 'media_default' && $view->current_display == 'media_browser_my_files') {
		$query = db_query("SELECT fm.fid 
			FROM {file_managed} fm
			LEFT JOIN {manualcrop} mc ON fm.fid = mc.fid
			WHERE 
			mc.fid IS :null
		
			", array( ':null' => NULL))->fetchAll();
		$fids = array();
		foreach ($query as $fid){
			$fids[] = $fid->fid;
		}	
		
		$view->query->where[3] = array();	
		$view->query->where[3]['conditions'] = array();
		$view->query->where[3]['conditions'][0] = array();
		$view->query->where[3]['conditions'][0]['field'] = 'file_managed.fid';
		$view->query->where[3]['conditions'][0]['value'] = $fids;
		$view->query->where[3]['conditions'][0]['operator'] = 'IN';
		$view->query->where[3]['args'] = array();
		$view->query->where[3]['type'] = 'AND';
	}
}
