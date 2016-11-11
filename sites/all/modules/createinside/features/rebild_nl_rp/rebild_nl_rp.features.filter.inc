<?php
/**
 * @file
 * rebild_nl_rp.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rebild_nl_rp_filter_default_formats() {
  $formats = array();

  // Exported format: Newsletter.
  $formats['newsletter'] = array(
    'format' => 'newsletter',
    'name' => 'Newsletter',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <ul> <ol> <li> <p> <h2> <h3> <h4> <br> <br /> <sup> <sub>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -44,
        'status' => 1,
        'settings' => array(),
      ),
      'media_filter' => array(
        'weight' => -41,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -40,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
