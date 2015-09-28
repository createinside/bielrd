<?php
/**
 * @file
 * rebild_featured.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_featured_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
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
function rebild_featured_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function rebild_featured_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: bo_i_rebild_queue
  $nodequeues['bo_i_rebild_queue'] = array(
    'name' => 'bo_i_rebild_queue',
    'title' => 'Bo i Rebild',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: borger_queue
  $nodequeues['borger_queue'] = array(
    'name' => 'borger_queue',
    'title' => 'Borger',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: erhverv_queue
  $nodequeues['erhverv_queue'] = array(
    'name' => 'erhverv_queue',
    'title' => 'Erhverv',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: forside
  $nodequeues['forside'] = array(
    'name' => 'forside',
    'title' => 'Forside',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: politik
  $nodequeues['politik'] = array(
    'name' => 'politik',
    'title' => 'Politik',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'featured_article',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_featured_image_default_styles() {
  $styles = array();

  // Exported image style: blok.
  $styles['blok'] = array(
    'name' => 'blok',
    'effects' => array(
      25 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 280,
          'height' => 195,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'blok',
        ),
        'dimensions callback' => 'image_resize_dimensions',
        'weight' => 0,
      ),
    ),
    'label' => 'blok',
  );

  // Exported image style: blok_mobile.
  $styles['blok_mobile'] = array(
    'name' => 'blok_mobile',
    'effects' => array(
      47 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'blok',
          'style_name' => 'grid_block_mobile',
        ),
        'weight' => 0,
      ),
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 305,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'blok_mobile',
  );

  // Exported image style: blok_narrow.
  $styles['blok_narrow'] = array(
    'name' => 'blok_narrow',
    'effects' => array(
      26 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'blok',
          'style_name' => 'grid_block_narrow',
        ),
        'weight' => 0,
      ),
      10 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 205,
          'height' => 143,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'blok_narrow',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rebild_featured_node_info() {
  $items = array(
    'featured_article' => array(
      'name' => t('Aktuelt'),
      'base' => 'node_content',
      'description' => t('Brug Aktuelt til at oprette aktualitetsbokse på Forsiden, Borger, Erhverv, Politik og Bo i Rebild.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
