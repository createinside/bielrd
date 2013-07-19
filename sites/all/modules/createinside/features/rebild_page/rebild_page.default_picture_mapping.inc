<?php
/**
 * @file
 * rebild_page.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function rebild_page_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'indhold_top';
  $picture_mapping->breakpoint_group = 'indhold_top';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'indhold_top_mobile',
    ),
    'custom.user.narrow' => array(
      '1x' => 'indhold_top_narrow',
    ),
    'custom.user.normal' => array(
      '1x' => 'indhold_top',
    ),
  );
  $export['indhold_top'] = $picture_mapping;

  return $export;
}
