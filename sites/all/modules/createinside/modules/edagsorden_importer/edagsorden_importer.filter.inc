<?php

/**
 * Implements hook_filter_info().
 */
function edagsorden_importer_filter_info() {
  $filters['filter_sbsys'] = array(
    'title' => t('SBSYS cleaner'),
    'description' => t("Filters the ouput from SBSYS by removing bad formatting."),
    'prepare callback' => '_filter_sbsys_prepare',
    'process callback' => '_filter_sbsys_process',
  );
  return $filters;
}

/**
 * SBSYS: Prepare Callback
 */
function _filter_sbsys_prepare($text, $filter) {
	return $text;
}

/**
 * SBSYS: Process Callback
 */
function _filter_sbsys_process($text, $filter) {
	return preg_replace('#<p>(\s|&nbsp;|</?\s?br\s?/?>)*</?p>#', '', $text, -1);
}