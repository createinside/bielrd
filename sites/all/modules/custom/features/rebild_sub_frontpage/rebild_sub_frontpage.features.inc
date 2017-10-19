<?php
/**
 * @file
 * rebild_sub_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_sub_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_sub_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: banner_large.
  $styles['banner_large'] = array(
    'label' => 'banner_large',
    'effects' => array(
      1 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1920,
          'height' => 320,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'banner_large',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: focus_medium.
  $styles['focus_medium'] = array(
    'label' => 'focus_medium',
    'effects' => array(
      2 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 470,
          'height' => 170,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'focus_medium',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: focus_small.
  $styles['focus_small'] = array(
    'label' => 'focus_small',
    'effects' => array(
      3 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 307,
          'height' => 170,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'focus_small',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rebild_sub_frontpage_node_info() {
  $items = array(
    'front_page' => array(
      'name' => t('Forside'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function rebild_sub_frontpage_paragraphs_info() {
  $items = array(
    'banner' => array(
      'name' => 'Banner',
      'bundle' => 'banner',
      'locked' => '1',
    ),
    'focus' => array(
      'name' => 'Fokusblok',
      'bundle' => 'focus',
      'locked' => '1',
    ),
    'focus_two' => array(
      'name' => 'Fokus (2 kolonner)',
      'bundle' => 'focus_two',
      'locked' => '1',
    ),
  );
  return $items;
}
