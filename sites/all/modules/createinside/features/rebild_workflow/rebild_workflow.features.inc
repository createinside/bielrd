<?php
/**
 * @file
 * rebild_workflow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_workflow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_workflow_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_workflow_image_default_styles() {
  $styles = array();

  // Exported image style: profil_visning.
  $styles['profil_visning'] = array(
    'name' => 'profil_visning',
    'effects' => array(
      2 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => 150,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
