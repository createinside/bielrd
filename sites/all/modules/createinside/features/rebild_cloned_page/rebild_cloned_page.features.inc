<?php
/**
 * @file
 * rebild_cloned_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_cloned_page_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rebild_cloned_page_node_info() {
  $items = array(
    'cloned_page' => array(
      'name' => t('Klonet side'),
      'base' => 'node_content',
      'description' => t('Opret en klon af en eksisterende standardside med denne indholdstype, hvis du ønsker at bruge det samme indhold på flere sider.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
