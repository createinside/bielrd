<?php
/**
 * @file
 * rebild_wcag.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_wcag_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-wcag_read_aloud'] = array(
    'cache' => -1,
    'css_class' => 'wcag-block read-aloud',
    'custom' => 0,
    'machine_name' => 'wcag_read_aloud',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -59,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['print-print-links'] = array(
    'cache' => 4,
    'css_class' => 'wcag-block print',
    'custom' => 0,
    'delta' => 'print-links',
    'module' => 'print',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -60,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['text_resize-0'] = array(
    'cache' => 1,
    'css_class' => 'wcag-block textsize',
    'custom' => 0,
    'delta' => 0,
    'module' => 'text_resize',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -61,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
