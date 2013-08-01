<?php
/**
 * @file
 * rebild_workflow.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_workflow_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-dine_kontakter_block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'dine_kontakter_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Dine kontakter til kommunikation',
    'visibility' => 0,
  );

  $export['views-145b74fe69cf19a82692b5177d007af1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '145b74fe69cf19a82692b5177d007af1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-215f446cf0ce9fd19df35c2434815413'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '215f446cf0ce9fd19df35c2434815413',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-69f0223a916cd32a4145072220e5f81b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '69f0223a916cd32a4145072220e5f81b',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-7707e39b25d9412e6373717767a6e8d6'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '7707e39b25d9412e6373717767a6e8d6',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
