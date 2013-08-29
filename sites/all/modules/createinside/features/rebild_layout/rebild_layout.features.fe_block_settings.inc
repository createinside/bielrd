<?php
/**
 * @file
 * rebild_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-custom_block_book_politician'] = array(
    'cache' => -1,
    'css_class' => 'custom_block politics',
    'custom' => 0,
    'machine_name' => 'custom_block_book_politician',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-custom_block_digital_map'] = array(
    'cache' => -1,
    'css_class' => 'custom_block map',
    'custom' => 0,
    'machine_name' => 'custom_block_digital_map',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-custom_block_frivillig'] = array(
    'cache' => -1,
    'css_class' => 'custom_block frivillig',
    'custom' => 0,
    'machine_name' => 'custom_block_frivillig',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-custom_block_rebildporten'] = array(
    'cache' => -1,
    'css_class' => 'custom_block rebildporten',
    'custom' => 0,
    'machine_name' => 'custom_block_rebildporten',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-custom_block_social_ansvarlig'] = array(
    'cache' => -1,
    'css_class' => 'custom_block social',
    'custom' => 0,
    'machine_name' => 'custom_block_social_ansvarlig',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_contact_front'] = array(
    'cache' => -1,
    'css_class' => 'contact-sidebar',
    'custom' => 0,
    'machine_name' => 'rebild_contact_front',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -45,
      ),
    ),
    'title' => 'Kontakt Rebild Kommune',
    'visibility' => 1,
  );

  $export['block-rebild_contact_landing'] = array(
    'cache' => -1,
    'css_class' => 'contact-sidebar',
    'custom' => 0,
    'machine_name' => 'rebild_contact_landing',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'borger
erhverv
politik
bo-i-rebild',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -38,
      ),
    ),
    'title' => 'Kontakt Rebild Kommune',
    'visibility' => 1,
  );

  $export['block-rebild_footer_contact'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -26,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_footer_contact_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_contact_2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -25,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_footer_logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-16'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 16,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => 'borger
erhverv
politik
bo-i-rebild',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -48,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['menu_block-8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 8,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -48,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
