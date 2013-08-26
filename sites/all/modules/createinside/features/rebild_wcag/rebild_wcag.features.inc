<?php
/**
 * @file
 * rebild_wcag.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_wcag_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
