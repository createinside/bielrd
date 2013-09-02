<?php

$plugin = array(
	'form' => 'edagsorden_importer_img_parser_form',
	'callback' => 'edagsorden_importer_img_parser_callback',
	'name' => 'Img parser',
	'multi' => 'loop'
);

function edagsorden_importer_img_parser_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Points img-tags references to the right destination',
	);
	return $form;
}

function edagsorden_importer_img_parser_callback($result, $item_key, $element_key, &$field, $settings) {
	
	$dom = new domDocument;
	$dom->loadHTML($field);
	$dom->preserveWhiteSpace = false;
	$images = $dom->getElementsByTagName('img');
	if($images->length>0) {
		// Get postal code
		$com_id = $result->items[$item_key]["xpathparser:9"];
		$agenda_id = $result->items[$item_key]["xpathparser:5"];	
		$img_url = variable_get('edagsorden_root_url', '')."/committee_".$com_id."/agenda_".$agenda_id."/resources/";	
		foreach ($images as $image) {
		  $src = $image->getAttribute('src');
		  $img_url = $img_url.$result->items[$item_key]["xpathparser:10"];
		  $field = str_replace($src, $img_url, $field);
		}
	}
}