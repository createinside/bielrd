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

  $export['views-3226c25c64c163bda08ca74c5c45395b'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3226c25c64c163bda08ca74c5c45395b',
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

  $export['views-9cf22433e0efbd8b206c8e4c2edb177c'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9cf22433e0efbd8b206c8e4c2edb177c',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => 2,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-workbench_current_user-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'workbench_current_user-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-workbench_edited-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'workbench_edited-block_1',
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

  $export['workbench-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block',
    'module' => 'workbench',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
