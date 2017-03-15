<?php
/**
 * @file
 * rebild_job.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function rebild_job_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'signatur_job_importer-xpathparser_3-string_to_unix_timestamp';
  $feeds_tamper->importer = 'signatur_job_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['signatur_job_importer-xpathparser_3-string_to_unix_timestamp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'signatur_job_importer-xpathparser_6-signatur__date_converter';
  $feeds_tamper->importer = 'signatur_job_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'signatur_date_convert';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Signatur: Date Converter';
  $export['signatur_job_importer-xpathparser_6-signatur__date_converter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'signatur_job_importer-xpathparser_7-explode';
  $feeds_tamper->importer = 'signatur_job_importer';
  $feeds_tamper->source = 'xpathparser:7';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['signatur_job_importer-xpathparser_7-explode'] = $feeds_tamper;

  return $export;
}
