<?php
/**
 * @file
 * rebild_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ci_search-ci_search_borger'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_borger',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_borger',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ci_search-ci_search_erhverv'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_erhverv',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_erhverv',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ci_search-ci_search_front'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_front',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'header_second',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['ci_search-ci_search_header'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_header',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ci_search-ci_search_politik'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_politik',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_politik',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ci_search-ci_search_rebild'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_rebild',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_bo_i_rebild',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -50,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ci_search-ci_search_results'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'ci_search_results',
    'module' => 'ci_search',
    'node_types' => array(),
    'pages' => 'soeg
soeg/*',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -48,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
