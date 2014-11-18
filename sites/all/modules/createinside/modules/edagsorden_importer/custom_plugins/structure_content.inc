<?php

$plugin = array(
	'form' => 'edagsorden_importer_structure_content_form',
	'callback' => 'edagsorden_importer_structure_content_callback',
	'name' => 'Structure Content',
	'multi' => 'direct'
);

function edagsorden_importer_structure_content_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Structures agenda content into sections.',
	);
	return $form;
}

function edagsorden_importer_structure_content_callback($result, $item_key, $element_key, &$field, $settings) {
	$xml = simplexml_load_string($field);
	
	$field = "";
	
	// Resume
	if(isset($xml->Resume)) {
		$field .= "<h3>Resume</h3>";
		$field .= "<div class='item-resume'>";
		$field .= (string)$xml->Resume;
		$field .= "</div>";
	}
	// Sagsfremstilling
	if(isset($xml->Sagsfremstilling)) {
		$field .= "<h3>Sagsfremstilling</h3>";
		$field .= (string)$xml->Sagsfremstilling;
	}
	// Økonomi
	if(isset($xml->Økonomi)) {
		$field .= "<h3>Økonomi</h3>";
		$field .= (string)$xml->Økonomi;
	}
	// Indstilling
	if(isset($xml->Indstilling)) {
		$field .= "<h3>Indstilling</h3>";
		$field .= "<div class='item-setting'>";
		$field .= "<p>".(string)$xml->Indstilling->IndstillingOverskrift."</p>";
		$field .= (string)$xml->Indstilling;
		$field .= "</div>";
	}
	// Beslutning
	if(isset($xml->Beslutning)) {
		$field .= "<h3>Beslutning</h3>";
		$field .= "<div class='item-decision'>";
		$field .= (string)$xml->Beslutning;
		$field .= "</div>";
		
	}
}