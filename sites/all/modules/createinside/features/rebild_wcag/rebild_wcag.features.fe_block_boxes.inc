<?php
/**
 * @file
 * rebild_wcag.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_wcag_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Read aloud';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'wcag_read_aloud';
  $fe_block_boxes->body = '<p><a href="http://www.adgangforalle.dk/" target="_blank">Læs højt</a></p>';

  $export['wcag_read_aloud'] = $fe_block_boxes;

  return $export;
}
