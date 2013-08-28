<?php
/**
 * @file
 * rebild_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function rebild_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'apachesolr@solr::im_field_main_section';
  $facet->searcher = 'apachesolr@solr';
  $facet->realm = '';
  $facet->facet = 'im_field_main_section';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(),
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => 0,
    'flatten' => '0',
    'query_type' => 'term',
  );
  $export['apachesolr@solr::im_field_main_section'] = $facet;

  return $export;
}
