<?php
/**
 * @file
 * rebild_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_workflow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_workflow_image_default_styles() {
  $styles = array();

  // Exported image style: profil_visning.
  $styles['profil_visning'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'profil_visning',
  );

  return $styles;
}
