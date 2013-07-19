<?php
/**
 * @file
 * rebild_self_service.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_self_service_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Selvbetjening forside';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'rebild_selfservice_front';
  $fe_block_boxes->body = '<h2>Brug <strong>selvbetjening</strong> og spring køen over</h2><p>Betjen dig selv 24 timer i døgnet alle ugens syv dage, når det passer dig.</p><form><p><select><option>Find hjælp til...</option><option>Bestille pas</option><option>Søge dagpenge</option><option>Skifte læge</option></select></p><p><span> - eller - </span></p><p><select><option>Vælg emne...</option><option>Arbejde og Erhverv</option><option>Sundhed og sygdom</option><option>Ældreområdet</option><option>Økonomi</option></select></p></form><p class="small-text"><strong>Mest søgte emner:</strong> <a href="#">Integer</a><a href="#">accumsan</a><a href="#">sodales euismod</a><a href="#">cum sociis natoque</a><a href="#">penatibus et</a><a href="#">magnis dis</a><a href="#">parturient</a></p><p class="arrow-link"><a href="#">Mere selvbetjening</a></p>';

  $export['rebild_selfservice_front'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Selvbetjening underside';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_selfservice_sub';
  $fe_block_boxes->body = '<form><p><select><option>Find hjælp til at...</option><option>Bestille pas</option><option>Søge dagpenge</option><option>Skifte læge</option></select></p></form><p class="arrow-link"><a href="#">Mere selvbetjening</a></p><ul><li>Digital Pladsanvisning&nbsp;</li><li>Økonomisk friplads</li><li>Underretning om udsatte børn/unge</li></ul>';

  $export['rebild_selfservice_sub'] = $fe_block_boxes;

  return $export;
}
