<?php

/**
 * @file
 * os2forms_pagebuilder.features.inc
 */

/**
 * Implements hook_node_info().
 */
function os2forms_pagebuilder_node_info() {
  $items = array(
    'form_content_page' => array(
      'name' => t('Form side'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function os2forms_pagebuilder_paragraphs_info() {
  $items = array(
    'accordion' => array(
      'name' => 'Harmonika',
      'bundle' => 'accordion',
      'locked' => '1',
    ),
    'tabs' => array(
      'name' => 'Faneblade',
      'bundle' => 'tabs',
      'locked' => '1',
    ),
    'textarea' => array(
      'name' => 'textarea',
      'bundle' => 'textarea',
      'locked' => '1',
    ),
    'webform' => array(
      'name' => 'webform',
      'bundle' => 'webform',
      'locked' => '1',
    ),
  );
  return $items;
}
