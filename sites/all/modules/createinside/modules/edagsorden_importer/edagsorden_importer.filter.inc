<?php

/**
 * Implements hook_filter_info().
 */
function edagsorden_importer_filter_info() {
  $filters['filter_sbsys'] = array(
    'title' => t('SBSYS'),
    'description' => t("Filters the ouput from SBSYS by removing inline styling."),
    'process callback' => '_filter_sbsys_process',
  );
  return $filters;
}

/**
 * SBSYS: Process Callback
 */
function _filter_sbsys_process($text, $filter) {

	// Remove empty paragraphs (<p>)
	$text = preg_replace('#<p[^>]*>(\s|&nbsp;?)*</p>#', '', $text);
	
	// Convert <b> to <strong>
	$text = str_replace('<b>', '<strong>', $text);
	$text = str_replace('</b>', '</strong>', $text);
	return $text;
}