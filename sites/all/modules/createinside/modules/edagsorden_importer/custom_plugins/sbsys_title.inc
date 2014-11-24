<?php

$plugin = array(
	'form' => 'edagsorden_importer_sbsys_title_form',
	'callback' => 'edagsorden_importer_sbsys_title_callback',
	'name' => 'SBSYS: Title',
	'multi' => 'direct'
);

function edagsorden_importer_sbsys_title_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Formats the title',
	);
	return $form;
}

function edagsorden_importer_sbsys_title_callback($result, $item_key, $element_key, &$field, $settings) {
						
	$addition = $result->items[$item_key]["xpathparser:9"];
		
	if($addition=="true") {
		if($field=="Referat") {
			$field = "Tillægsreferat";
		}
		if($field=="Dagsorden") {
			$field = "Tillægsdagsorden";
		}
	}	
}