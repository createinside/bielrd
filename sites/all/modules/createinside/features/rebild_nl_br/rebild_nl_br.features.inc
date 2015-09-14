<?php
/**
 * @file
 * rebild_nl_br.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rebild_nl_br_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function rebild_nl_br_image_default_styles() {
  $styles = array();

  // Exported image style: nl_br_sec_2.
  $styles['nl_br_sec_2'] = array(
    'name' => 'nl_br_sec_2',
    'label' => 'NL BR Section 2',
    'effects' => array(
      7 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'nl_br_sec_2',
        ),
        'weight' => 0,
      ),
      11 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: nl_br_sec_3.
  $styles['nl_br_sec_3'] = array(
    'name' => 'nl_br_sec_3',
    'label' => 'NL BR Section 3',
    'effects' => array(
      8 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 540,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'nl_br_sec_3',
        ),
        'weight' => 0,
      ),
      12 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 540,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: nl_br_sec_4.
  $styles['nl_br_sec_4'] = array(
    'name' => 'nl_br_sec_4',
    'label' => 'NL BR Section 4',
    'effects' => array(
      9 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 255,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'nl_br_sec_4',
        ),
        'weight' => 0,
      ),
      13 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 255,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: nl_br_sec_5.
  $styles['nl_br_sec_5'] = array(
    'name' => 'nl_br_sec_5',
    'label' => 'NL BR Section 5',
    'effects' => array(
      10 => array(
        'label' => 'Manual Crop: Custom crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 255,
          'height' => '',
          'keepproportions' => 0,
          'reuse_crop_style' => '',
          'style_name' => 'nl_br_sec_5',
        ),
        'weight' => 0,
      ),
      14 => array(
        'label' => 'Skalér',
        'help' => 'Skalering bevarer billedets højde-bredde-forhold. Hvis kun den ene dimension angives vil den anden blive beregnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 255,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rebild_nl_br_node_info() {
  $items = array(
    'nl_br' => array(
      'name' => t('Business Rebild Nyhedsbrev'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function rebild_nl_br_paragraphs_info() {
  $items = array(
    'nl_br_sec_1' => array(
      'name' => 'Centreret tekst',
      'bundle' => 'nl_br_sec_1',
      'locked' => '1',
    ),
    'nl_br_sec_2' => array(
      'name' => 'Billede i fuld bredde',
      'bundle' => 'nl_br_sec_2',
      'locked' => '1',
    ),
    'nl_br_sec_3' => array(
      'name' => 'Tekst med topbillede',
      'bundle' => 'nl_br_sec_3',
      'locked' => '1',
    ),
    'nl_br_sec_4' => array(
      'name' => 'Tekst med venstrestillet billede',
      'bundle' => 'nl_br_sec_4',
      'locked' => '1',
    ),
    'nl_br_sec_5' => array(
      'name' => 'Tekst med højrestillet billede',
      'bundle' => 'nl_br_sec_5',
      'locked' => '1',
    ),
    'nl_br_sec_6' => array(
      'name' => 'Tekst',
      'bundle' => 'nl_br_sec_6',
      'locked' => '1',
    ),
    'nl_br_sec_7' => array(
      'name' => 'Separator',
      'bundle' => 'nl_br_sec_7',
      'locked' => '1',
    ),
  );
  return $items;
}
