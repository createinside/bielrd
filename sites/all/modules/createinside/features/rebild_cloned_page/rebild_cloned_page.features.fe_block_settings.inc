<?php
/**
 * @file
 * rebild_cloned_page.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_cloned_page_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-47ca9c2ff8b57d0a766e7849148edb9c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '47ca9c2ff8b57d0a766e7849148edb9c',
    'module' => 'views',
    'node_types' => array(
      0 => 'cloned_page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content_sidebar',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
