<?php
/**
 * @file
 * rebild_calendar.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_calendar_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kalender';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_calendar_front';
  $fe_block_boxes->body = '<table border="0" cellspacing="0" align="left" style="height: 100%; ; width: 100%;"><tbody><tr><td><img style="float: left;" src="/sites/default/files/16_februar.png" width="73" height="53" />BORGER<br />Maecenas faucibus Curabitur sagittis orci litmus asus.</td><td></td><td><img style="float: left;" src="/sites/default/files/11_marts.png" width="73" height="53" />BORGER<br />Maecenas faucibus Curabitur sagittis orci litmus asus.</td></tr><tr><td></td><td></td><td></td></tr><tr><td><img style="float: left;" src="/sites/default/files/23_august.png" width="73" height="53" />BORGER<br />Maecenas faucibus Curabitur sagittis orci litmus asus.</td><td></td><td><img style="float: left;" src="/sites/default/files/07_september.png" width="73" height="53" />BORGER<br />Maecenas faucibus Curabitur sagittis orci litmus asus.</td></tr></tbody></table>';

  $export['rebild_calendar_front'] = $fe_block_boxes;

  return $export;
}
