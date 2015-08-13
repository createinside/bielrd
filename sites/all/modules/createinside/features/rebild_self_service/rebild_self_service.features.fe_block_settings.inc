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

  $export['quicktabs-self_service_views'] = array(
    'cache' => -1,
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
        'weight' => -24,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-selfservice_blocks-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_blocks-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'selvbetjening
erhverv/*
business-rebild-nyt-navn-til-erhvervskontoret',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -67,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-selfservice_blocks-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_blocks-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-selfservice_frontpage-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_frontpage-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -70,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-selfservice_frontpage-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_frontpage-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -6,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-selfservice_frontpage-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_frontpage-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -7,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-selfservice_landing-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_landing-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'erhverv',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -64,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-selfservice_landing-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'selfservice_landing-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
