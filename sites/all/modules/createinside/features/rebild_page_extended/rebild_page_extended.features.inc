<?php
/**
 * @file
 * rebild_page_extended.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_page_extended_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rebild_page_extended_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_page_extended_image_default_styles() {
  $styles = array();

  // Exported image style: section_navigation.
  $styles['section_navigation'] = array(
    'name' => 'section_navigation',
    'label' => 'section_navigation',
    'effects' => array(
      12 => array(
        'label' => 'Manual Crop: Crop and scale',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 105,
          'height' => 90,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'section_navigation',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: section_text.
  $styles['section_text'] = array(
    'name' => 'section_text',
    'label' => 'section_text',
    'effects' => array(
      10 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 145,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: video_thumbnail.
  $styles['video_thumbnail'] = array(
    'name' => 'video_thumbnail',
    'label' => 'video_thumbnail',
    'effects' => array(
      9 => array(
        'label' => 'Skalér og beskær',
        'help' => 'Skalering og beskæring bevarer billedets højde-bredde-forhold og beskærer derefter den største dimension. Det er nyttigt til at generere kvadratiske thumbnails uden at forvrænge billedet.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 81,
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
function rebild_page_extended_node_info() {
  $items = array(
    'page_extended' => array(
      'name' => t('Udvidet standardside'),
      'base' => 'node_content',
      'description' => t('Brug <em>udvidet standardside</em> til indhold som fx. en "Om Rebild Kommune" side. Denne indholdstype opbygges af sektioner, som kan oprettes og omarrangeres efter ønske.'),
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function rebild_page_extended_paragraphs_info() {
  $items = array(
    'accordion' => array(
      'name' => 'Accordion',
      'bundle' => 'accordion',
      'locked' => '1',
    ),
    'contact' => array(
      'name' => 'Kontakt',
      'bundle' => 'contact',
      'locked' => '1',
    ),
    'gis_map' => array(
      'name' => 'GIS-kort',
      'bundle' => 'gis_map',
      'locked' => '1',
    ),
    'image_gallery' => array(
      'name' => 'Billedgalleri',
      'bundle' => 'image_gallery',
      'locked' => '1',
    ),
    'navigation_list' => array(
      'name' => 'Navigationsliste',
      'bundle' => 'navigation_list',
      'locked' => '1',
    ),
    'pdf_list' => array(
      'name' => 'PDF-liste',
      'bundle' => 'pdf_list',
      'locked' => '1',
    ),
    'selfservice' => array(
      'name' => 'Selvbetjening',
      'bundle' => 'selfservice',
      'locked' => '1',
    ),
    'text' => array(
      'name' => 'Tekst',
      'bundle' => 'text',
      'locked' => '1',
    ),
    'text_image' => array(
      'name' => 'Tekst og billede',
      'bundle' => 'text_image',
      'locked' => '1',
    ),
    'text_video' => array(
      'name' => 'Tekst og video',
      'bundle' => 'text_video',
      'locked' => '1',
    ),
    'video' => array(
      'name' => 'Video',
      'bundle' => 'video',
      'locked' => '1',
    ),
  );
  return $items;
}
