<?php
/**
 * @file
 * rebild_self_service.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function rebild_self_service_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'self_service_views';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Selvbetjeningsløsninger';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'selfservice_items',
      'display' => 'emner',
      'args' => '',
      'title' => 'Emner',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'selfservice_items',
      'display' => 'alfabetisk',
      'args' => '',
      'title' => 'Alfabetisk',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Alfabetisk');
  t('Emner');
  t('Selvbetjeningsløsninger');

  $export['self_service_views'] = $quicktabs;

  return $export;
}
