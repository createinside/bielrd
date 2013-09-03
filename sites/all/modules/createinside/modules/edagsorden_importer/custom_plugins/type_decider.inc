<?php

$plugin = array(
	'form' => 'edagsorden_importer_type_decider_form',
	'callback' => 'edagsorden_importer_type_decider_callback',
	'name' => 'Detect agenda type',
	'multi' => 'loop'
);

function edagsorden_importer_type_decider_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Detects agenda type',
	);
	return $form;
}

function edagsorden_importer_type_decider_callback($result, $item_key, $element_key, &$field, $settings) {
						
	$captions = $result->items[$item_key]["xpathparser:7"];

	foreach($captions as $caption) {
		if(stripos($caption, "beslutning")!==false) {
			$field = "Referat";
			break;
		}
	}
}