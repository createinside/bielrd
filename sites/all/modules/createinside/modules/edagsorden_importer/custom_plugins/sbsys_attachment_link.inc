<?php

$plugin = array(
	'form' => 'edagsorden_importer_sbsys_attachment_link_form',
	'callback' => 'edagsorden_importer_sbsys_attachment_link_callback',
	'name' => 'SBSYS: Attachment Item Link',
	'multi' => 'loop'
);

function edagsorden_importer_sbsys_attachment_link_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Converts filepath to point to the attachment server.',
	);
	return $form;
}

function edagsorden_importer_sbsys_attachment_link_callback($result, $item_key, $element_key, &$field, $settings) {
						
	$start_pos = strpos($result->link, "/Dagsordener/");
	$agenda_path = substr($result->link, $start_pos);
	$agenda_path = str_replace("/dagsorden.xml", "", $agenda_path);	 	
	 	
	print $agenda_path;
	 	
	$field = variable_get('sbsys_root_url', '').$agenda_path."/".$field;
}