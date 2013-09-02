<?php
/**
 * @file
 * rebild_edagsorden.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function rebild_edagsorden_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edagsorden_agenda_importer-xpathparser_3-string_to_unix_timestamp';
  $feeds_tamper->importer = 'edagsorden_agenda_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['edagsorden_agenda_importer-xpathparser_3-string_to_unix_timestamp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edagsorden_agenda_importer-xpathparser_4-string_to_unix_timestamp';
  $feeds_tamper->importer = 'edagsorden_agenda_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['edagsorden_agenda_importer-xpathparser_4-string_to_unix_timestamp'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edagsorden_item_importer-xpathparser_6-img_parser';
  $feeds_tamper->importer = 'edagsorden_item_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'img_parser';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Img parser';
  $export['edagsorden_item_importer-xpathparser_6-img_parser'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edagsorden_item_importer-xpathparser_8-item_url';
  $feeds_tamper->importer = 'edagsorden_item_importer';
  $feeds_tamper->source = 'xpathparser:8';
  $feeds_tamper->plugin_id = 'item_link';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert to file URL';
  $export['edagsorden_item_importer-xpathparser_8-item_url'] = $feeds_tamper;

  return $export;
}
