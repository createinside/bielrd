<?php
/**
 * @file
 * rebild_self_service.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_self_service_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-rebild_selfservice_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_selfservice_front',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'header_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-rebild_selfservice_sub'] = array(
    'cache' => -1,
    'css_class' => 'selvbetjening',
    'custom' => 0,
    'machine_name' => 'rebild_selfservice_sub',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -24,
      ),
    ),
    'title' => 'Selvbetjening',
    'visibility' => 0,
  );

  $export['quicktabs-self_service_views'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'self_service_views',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'selvbetjening
content/selvbetjening',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -36,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
