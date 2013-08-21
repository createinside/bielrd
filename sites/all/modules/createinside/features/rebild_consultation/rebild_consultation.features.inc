<?php
/**
 * @file
 * rebild_consultation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_consultation_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rebild_consultation_node_info() {
  $items = array(
    'consultation' => array(
      'name' => t('Høring'),
      'base' => 'node_content',
      'description' => t('Brug Høring til at oprette en høring.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
