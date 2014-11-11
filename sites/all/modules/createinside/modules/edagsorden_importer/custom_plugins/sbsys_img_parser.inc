<?php

$plugin = array(
	'form' => 'edagsorden_importer_sbsys_img_parser_form',
	'callback' => 'edagsorden_importer_sbsys_img_parser_callback',
	'name' => 'SBSYS: Img parser',
	'multi' => 'direct'
);

function edagsorden_importer_sbsys_img_parser_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Points img-tags references to the right destination',
	);
	return $form;
}

function edagsorden_importer_sbsys_img_parser_callback($result, $item_key, $element_key, &$field, $settings) {
	
		$dom = new domDocument;
		libxml_use_internal_errors(true);
		$dom->loadHTML($field);
		libxml_use_internal_errors(false);
		$dom->preserveWhiteSpace = false;
		$images = $dom->getElementsByTagName('img');
				
		$start_pos = strpos($result->link, "/Dagsordener/");
		$agenda_path = substr($result->link, $start_pos);
  	$agenda_path = str_replace("/dagsorden.xml", "", $agenda_path);

		if($images->length>0) {
			foreach($images as $image) {
				$src = $image->getAttribute('src');
				$field = str_replace($src, variable_get('sbsys_root_url', '')."/".$agenda_path."/".$src, $field);
			}
	
/*
			$com_id = $result->items[$item_key]["xpathparser:9"];
			$agenda_id = $result->items[$item_key]["xpathparser:5"];	
			$img_url = variable_get('edagsorden_root_url', '')."/committee_".$com_id."/agenda_[root_id]/resources/";	
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
*/

		}
}