<?php
/**
 * @file
 * rebild_workflow.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_workflow_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'En block med kontaktinformation til workbench';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'dine_kontakter_block';
  $fe_block_boxes->body = '<p>Søren Sørensen</p>
<p>&nbsp;</p>
<p>Tlf: 45 02 58 65</p>
<p>Email: soren@rebild.com&nbsp;</p>
<p>&nbsp;</p>
<p>Allan Pinderup</p>
<p>&nbsp;</p>
<p>Tlf: 65 32 45 98</p>
<p>Email: alp@rebild.dk</p>';

  $export['dine_kontakter_block'] = $fe_block_boxes;

  return $export;
}
