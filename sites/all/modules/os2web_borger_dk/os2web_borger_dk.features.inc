<?php
/**
 * @file
 * os2web_borger_dk.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function os2web_borger_dk_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function os2web_borger_dk_node_info() {
  $items = array(
    'os2web_borger_dk_article' => array(
      'name' => t('Borger.dk artikel'),
      'base' => 'node_content',
      'description' => t('Brug Borger.dk article til at oprette sider med indhold fra Borger.dk via deres webservice.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
