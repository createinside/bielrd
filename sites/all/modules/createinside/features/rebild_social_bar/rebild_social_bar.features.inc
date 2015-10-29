<?php
/**
 * @file
 * rebild_social_bar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_social_bar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function rebild_social_bar_paragraphs_info() {
  $items = array(
    'social_media' => array(
      'name' => 'Tjeneste (Socialt medie)',
      'bundle' => 'social_media',
      'locked' => '1',
    ),
  );
  return $items;
}
