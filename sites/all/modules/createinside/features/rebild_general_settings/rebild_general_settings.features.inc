<?php
/**
 * @file
 * rebild_general_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_general_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
