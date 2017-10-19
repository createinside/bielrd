<?php
/**
 * @file
 * rebild_sub_formatting.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_sub_formatting_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
