<?php
/**
 * @file
 * rebild_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mobile header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mobile_header';
  $fe_block_boxes->body = '<div id="mob-header"><p id="mob-header-left"><a href="#" id="mobile-menu-toggle"><span class="icon-reorder">&nbsp;</span></a></p><p id="mob-header-center"><a href="/"><span class="icon-mobil_logo">&nbsp;</span></a></p><p id="mob-header-right"><a href="/search"><span class="icon-search">&nbsp;</span></a></p></div>';

  $export['mobile_header'] = $fe_block_boxes;

  return $export;
}
