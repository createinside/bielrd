<?php
/**
 * @file
 * rebild_search.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function rebild_search_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(),
    'apachesolr_index_updated' => 1378286649,
  );
  $environment->index_bundles = array(
    'node' => array(
      0 => 'calendar_post',
      1 => 'cloned_page',
      2 => 'consultation',
      3 => 'news_article',
      4 => 'offering',
      5 => 'os2web_borger_dk_article',
      6 => 'page',
      7 => 'self_service',
      8 => 'webform',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
