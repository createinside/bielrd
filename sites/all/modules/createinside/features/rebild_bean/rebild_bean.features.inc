<?php
/**
 * @file
 * rebild_bean.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_bean_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
