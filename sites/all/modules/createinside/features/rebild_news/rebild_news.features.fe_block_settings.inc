<?php
/**
 * @file
 * rebild_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-news_articles-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_articles-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -73,
      ),
    ),
    'title' => 'Nyheder',
    'visibility' => 1,
  );

  $export['views-news_articles-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_articles-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'borger',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -62,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news_articles-block_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_articles-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'erhverv',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -61,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news_articles-block_3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_articles-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'politik',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -60,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news_articles-block_4'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'news_articles-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -63,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
