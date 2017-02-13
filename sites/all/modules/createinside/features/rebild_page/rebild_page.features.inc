<?php
/**
 * @file
 * rebild_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_page_image_default_styles() {
  $styles = array();

  // Exported image style: galleri_lille.
  $styles['galleri_lille'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 82,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'galleri_lille',
  );

  // Exported image style: galleri_stor.
  $styles['galleri_stor'] = array(
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1024,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'galleri_stor',
  );

  // Exported image style: indhold_top.
  $styles['indhold_top'] = array(
    'effects' => array(
      39 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 600,
          'height' => 190,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'indhold_top',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'indhold_top',
  );

  // Exported image style: indhold_top_mobile.
  $styles['indhold_top_mobile'] = array(
    'effects' => array(
      42 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'indhold_top',
          'style_name' => 'indhold_top_mobil',
        ),
        'weight' => 0,
      ),
      43 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 680,
          'height' => 190,
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'indhold_top_mobile',
  );

  // Exported image style: indhold_top_narrow.
  $styles['indhold_top_narrow'] = array(
    'effects' => array(
      44 => array(
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'indhold_top',
          'style_name' => 'indhold_top_narrow',
        ),
        'weight' => 0,
      ),
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 435,
          'height' => 138,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'indhold_top_narrow',
  );

  // Exported image style: inline_bottom.
  $styles['inline_bottom'] = array(
    'effects' => array(
      4 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 160,
          'height' => 75,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'inline_bottom',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'inline_bottom',
  );

  // Exported image style: inline_top.
  $styles['inline_top'] = array(
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 425,
          'height' => 150,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'inline_top',
        ),
        'weight' => 0,
      ),
    ),
    'label' => 'inline_top',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rebild_page_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Standardside'),
      'base' => 'node_content',
      'description' => t('Brug standardsider til  indhold, som fx. en "Om Rebild Kommune" side.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
