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
        'weight' => -26,
      ),
    ),
    'title' => 'Nyheder',
    'visibility' => 1,
  );

  return $export;
}
