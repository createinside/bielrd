<?php
/**
 * @file
 * rebild_edagsorden.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_edagsorden_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_edagsorden_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function rebild_edagsorden_node_info() {
  $items = array(
    'agenda' => array(
      'name' => t('Dagsorden'),
      'base' => 'node_content',
      'description' => t('Dagsordener er direkte integrereret med eDagsorden og er ikke beregnet til manuelle oprettelser på websitet.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
