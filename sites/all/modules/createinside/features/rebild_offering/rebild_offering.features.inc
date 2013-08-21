<?php
/**
 * @file
 * rebild_offering.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_offering_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rebild_offering_node_info() {
  $items = array(
    'offering' => array(
      'name' => t('Udbud'),
      'base' => 'node_content',
      'description' => t('Brug Udbud til at oprette et udbud.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
