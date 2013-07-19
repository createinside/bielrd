<?php
/**
 * @file
 * rebild_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_announcement_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function rebild_announcement_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Meddelelse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
