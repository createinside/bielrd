<?php
/**
 * @file
 * rebild_edagsorden.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rebild_edagsorden_filter_default_formats() {
  $formats = array();

  // Exported format: SBSYS.
  $formats['sbsys'] = array(
    'format' => 'sbsys',
    'name' => 'SBSYS',
    'cache' => 1,
    'status' => 1,
    'weight' => -6,
    'filters' => array(
      'filter_html' => array(
        'weight' => -49,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <p> <b> <i> <h1> <h2> <h3> <table> <tr> <td> <img> <div>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_sbsys' => array(
        'weight' => -42,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
