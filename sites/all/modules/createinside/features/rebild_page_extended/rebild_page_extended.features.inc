<?php
/**
 * @file
 * rebild_page_extended.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_page_extended_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rebild_page_extended_node_info() {
  $items = array(
    'page_extended' => array(
      'name' => t('Udvidet Standardside'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
