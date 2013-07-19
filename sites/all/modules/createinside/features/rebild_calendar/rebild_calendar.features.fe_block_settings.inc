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

  $export['block-rebild_calendar_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_calendar_front',
    'module' => 'block',
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
    'title' => 'Det sker i kommunen',
    'visibility' => 1,
  );

  return $export;
}
