<?php
/**
 * @file
 * rebild_announcement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_announcement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_announcement_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rebild_announcement_node_info() {
  $items = array(
    'announcement' => array(
      'name' => t('Meddelelse'),
      'base' => 'node_content',
      'description' => t('Brug Meddelelse til at oprette en meddelelse.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
