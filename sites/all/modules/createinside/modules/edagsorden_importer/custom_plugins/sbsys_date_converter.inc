<?php

$plugin = array(
	'form' => 'edagsorden_importer_sbsys_date_converter_form',
	'callback' => 'edagsorden_importer_sbsys_date_converter_callback',
	'name' => 'SBSYS: Date Converter',
	'multi' => 'loop'
);

function edagsorden_importer_sbsys_date_converter_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Converts date into the right format.',
	);
	return $form;
}

function edagsorden_importer_sbsys_date_converter_callback($result, $item_key, $element_key, &$field, $settings) {
						
	// Convert danish month name to english
	$date =
		strtr(
			strtolower($field), array('januar'=>'jan','februar'=>'feb','marts'=>'march','april'=>'apr','maj'=>'may','juni'=>'jun','juli'=>'jul','august'=>'aug','september'=>'sep','oktober'=>'oct','november'=>'nov','december'=>'dec')
		);
	
	$time = $result->items[$item_key]["xpathparser:8"];

	$field = strtotime($date. " " .$time);	
}