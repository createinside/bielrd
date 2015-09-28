<?php
/**
 * @file
 * rebild_nl_br.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rebild_nl_br_filter_default_formats() {
  $formats = array();

  // Exported format: HTML Email.
  $formats['html_email'] = array(
    'format' => 'html_email',
    'name' => 'HTML Email',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_emogrifier' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
