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

  // Exported image style: section_navigation.
  $styles['section_navigation'] = array(
    'label' => 'section_navigation',
    'effects' => array(
      12 => array(
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
    'label' => 'section_text',
    'effects' => array(
      9 => array(
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 145,
          'height' => 82,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'section_text',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: video_thumbnail.
  $styles['video_thumbnail'] = array(
    'label' => 'video_thumbnail',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 145,
          'height' => 82,
        ),
        'weight' => 1,
      ),
    ),
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
  drupal_alter('node_info', $items);
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
