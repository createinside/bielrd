<?php
/**
 * @file
 * rebild_featured.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function rebild_featured_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'blok';
  $picture_mapping->breakpoint_group = 'blok';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'blok_mobile',
    ),
    'custom.user.narrow' => array(
      '1x' => 'blok_narrow',
    ),
    'custom.user.normal' => array(
      '1x' => 'blok',
    ),
  );
  $export['blok'] = $picture_mapping;

  return $export;
}
