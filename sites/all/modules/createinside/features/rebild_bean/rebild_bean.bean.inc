<?php
/**
 * @file
 * rebild_bean.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function rebild_bean_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'blok_hoej_format';
  $bean_type->label = 'Blok - Høj format';
  $bean_type->options = '';
  $bean_type->description = 'Husk at placér blokken efterfølgende i en sidebar.';
  $export['blok_hoej_format'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'blok_lav_format';
  $bean_type->label = 'Blok - Lav format';
  $bean_type->options = '';
  $bean_type->description = 'Husk at placér blokken efterfølgende i en sidebar.';
  $export['blok_lav_format'] = $bean_type;

  return $export;
}
