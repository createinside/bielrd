<?php
/**
 * @file
 * rebild_calendar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_calendar_ctools_plugin_api() {
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
function rebild_calendar_node_info() {
  $items = array(
    'calendar_post' => array(
      'name' => t('Kalenderindlæg'),
      'base' => 'node_content',
      'description' => t('Bruges til at oprette begivenheder eller andet relevant indhold, som skal vises i en kalenderoversigt.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
