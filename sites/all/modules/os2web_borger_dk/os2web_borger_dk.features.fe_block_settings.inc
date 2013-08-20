<?php
/**
 * @file
 * os2web_borger_dk.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function os2web_borger_dk_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-a5d9265fca746ddd9c73becb8dca28be'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'a5d9265fca746ddd9c73becb8dca28be',
    'module' => 'views',
    'node_types' => array(
      0 => 'os2web_borger_dk_article',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content_sidebar',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
