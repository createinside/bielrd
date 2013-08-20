<?php
/**
 * @file
 * rebild_webform.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_webform_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rebild_webform_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webformular'),
      'base' => 'node_content',
      'description' => t('Webform bruges til at oprette formularer. Eksempelvis kan der oprettes en kontaktformular med denne indholdstype.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
