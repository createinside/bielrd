<?php
/**
 * @file
 * rebild_calendar.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_calendar_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-calendar_frontpage-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar_frontpage-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'postscript_second',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-calendar_sidebar-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'calendar_sidebar-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'calendar_post',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -57,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
