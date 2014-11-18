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
  $feeds_tamper->id = 'edagsorden_agenda_importer-blank_source_1-set_default_value';
  $feeds_tamper->importer = 'edagsorden_agenda_importer';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'edagsorden',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['edagsorden_agenda_importer-blank_source_1-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'edagsorden_agenda_importer-xpathparser_1-detect_agenda_type';
  $feeds_tamper->importer = 'edagsorden_agenda_importer';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'type_decider';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Detect agenda type';
  $export['edagsorden_agenda_importer-xpathparser_1-detect_agenda_type'] = $feeds_tamper;

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

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_agenda_importer-blank_source_1-set_default_value';
  $feeds_tamper->importer = 'sbsys_agenda_importer';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'sbsys',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['sbsys_agenda_importer-blank_source_1-set_default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_agenda_importer-xpathparser_3-sbsys__date_converter';
  $feeds_tamper->importer = 'sbsys_agenda_importer';
  $feeds_tamper->source = 'xpathparser:3';
  $feeds_tamper->plugin_id = 'sbsys_date_converter';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'SBSYS: Date Converter';
  $export['sbsys_agenda_importer-xpathparser_3-sbsys__date_converter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_agenda_importer-xpathparser_4-sbsys__date_converter';
  $feeds_tamper->importer = 'sbsys_agenda_importer';
  $feeds_tamper->source = 'xpathparser:4';
  $feeds_tamper->plugin_id = 'sbsys_date_converter';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'SBSYS: Date Converter';
  $export['sbsys_agenda_importer-xpathparser_4-sbsys__date_converter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_item_importer-xpathparser_11-sbsys__attachment_item_link';
  $feeds_tamper->importer = 'sbsys_item_importer';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'sbsys_attachment_link';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'SBSYS: Attachment Item Link';
  $export['sbsys_item_importer-xpathparser_11-sbsys__attachment_item_link'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_item_importer-xpathparser_13-find_replace';
  $feeds_tamper->importer = 'sbsys_item_importer';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'false',
    'replace' => '1',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['sbsys_item_importer-xpathparser_13-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_item_importer-xpathparser_13-find_replace_true';
  $feeds_tamper->importer = 'sbsys_item_importer';
  $feeds_tamper->source = 'xpathparser:13';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'true',
    'replace' => '0',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace';
  $export['sbsys_item_importer-xpathparser_13-find_replace_true'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_item_importer-xpathparser_6-sbsys__img_parser';
  $feeds_tamper->importer = 'sbsys_item_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'sbsys_img_parser';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'SBSYS: Img parser';
  $export['sbsys_item_importer-xpathparser_6-sbsys__img_parser'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sbsys_item_importer-xpathparser_6-structure_content';
  $feeds_tamper->importer = 'sbsys_item_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'structure_content';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Structure Content';
  $export['sbsys_item_importer-xpathparser_6-structure_content'] = $feeds_tamper;

  return $export;
}
