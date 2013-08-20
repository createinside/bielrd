<?php
/**
 * @file
 * rebild_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function rebild_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_news_image_default_styles() {
  $styles = array();

  // Exported image style: nyhed_forside.
  $styles['nyhed_forside'] = array(
    'name' => 'nyhed_forside',
    'effects' => array(
      1 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 340,
          'height' => 145,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'nyhed_forside',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: nyhed_forside_mobile.
  $styles['nyhed_forside_mobile'] = array(
    'name' => 'nyhed_forside_mobile',
    'effects' => array(
      45 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'nyhed_forside',
          'style_name' => 'news_block_mobile',
        ),
        'weight' => 1,
      ),
      46 => array(
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
          'height' => 306,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: nyhed_forside_narrow.
  $styles['nyhed_forside_narrow'] = array(
    'name' => 'nyhed_forside_narrow',
    'effects' => array(
      27 => array(
        'label' => 'Reuse a Manual Crop selection',
        'help' => 'Reuse a crop selection from another Manual Crop enabled image style.',
        'effect callback' => 'manualcrop_reuse_effect',
        'form callback' => 'manualcrop_reuse_form',
        'summary theme' => 'manualcrop_reuse_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_reuse',
        'data' => array(
          'reusestyle' => 'nyhed_forside',
          'style_name' => 'news_block_narrow',
        ),
        'weight' => 0,
      ),
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 107,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rebild_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('Nyhed'),
      'base' => 'node_content',
      'description' => t('Brug nyhed til at oprette nyheder.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}
