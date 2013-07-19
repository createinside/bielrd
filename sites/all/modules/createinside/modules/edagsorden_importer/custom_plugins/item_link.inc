<?php

$plugin = array(
	'form' => 'edagsorden_importer_item_link_form',
	'callback' => 'edagsorden_importer_item_link_callback',
	'name' => 'Item Link',
	'multi' => 'loop'
);

function edagsorden_importer_item_link_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Converts filename to a URL to the filename',
	);
	return $form;
}

function edagsorden_importer_item_link_callback($result, $item_key, $element_key, &$field, $settings) {
						
	// Get postal code
	$com_id = $result->items[$item_key]["xpathparser:9"];
	$agenda_id = $result->items[$item_key]["xpathparser:5"];
	 
	$field = variable_get('edagsorden_root_url', '')."/committee_".$com_id."/agenda_".$agenda_id."/documents/".$field.".pdf";
}