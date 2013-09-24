<?php

$plugin = array(
	'form' => 'edagsorden_importer_img_parser_form',
	'callback' => 'edagsorden_importer_img_parser_callback',
	'name' => 'Img parser',
	'multi' => 'direct'
);

function edagsorden_importer_img_parser_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Points img-tags references to the right destination',
	);
	return $form;
}

function edagsorden_importer_img_parser_callback($result, $item_key, $element_key, &$field, $settings) {
	
	$j=0;
	foreach($field as $output) {
	
		$dom = new domDocument;
		libxml_use_internal_errors(true);
		$dom->loadHTML($output);
		libxml_use_internal_errors(false);
		$dom->preserveWhiteSpace = false;
		$images = $dom->getElementsByTagName('img');
		if($images->length>0) {
	
			$com_id = $result->items[$item_key]["xpathparser:9"];
			$agenda_id = $result->items[$item_key]["xpathparser:5"];	
			$img_url = variable_get('edagsorden_root_url', '')."/committee_".$com_id."/agenda_".$agenda_id."/resources/";	
			if(is_string($result->items[$item_key]["xpathparser:10"])) {
				foreach($images as $image) {
				  $src = $image->getAttribute('src');
				  $img_url = $img_url.$result->items[$item_key]["xpathparser:10"];
				  $output = str_replace($src, $img_url, $output);
				}
			}
			else {
				$i=0;
				foreach($images as $image) {
				  $src = $image->getAttribute('src');
				  $new_img_url = $img_url.$result->items[$item_key]["xpathparser:10"][$i];
				  $output = str_replace($src, $new_img_url, $output);
					$i++;
				}
			}
		}
		
		// Remove empty <p> tags
		$output = preg_replace("#<p>(\s|&nbsp;|</?\s?br\s?/?>)*</?p>#", "", $output);
		
		$field[$j] = "<strong>".$result->items[$item_key]["xpathparser:11"][$j]."</strong><br />".$output;
		$j++;
	}
}