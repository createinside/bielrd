<?php
/**
 * @file
 * rebild_news.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function rebild_news_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'nyhed';
  $picture_mapping->breakpoint_group = 'nyhed';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'nyhed_forside_mobile',
    ),
    'custom.user.narrow' => array(
      '1x' => 'nyhed_forside_narrow',
    ),
    'custom.user.normal' => array(
      '1x' => 'nyhed_forside',
    ),
  );
  $export['nyhed'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'nyhed_oversigt';
  $picture_mapping->breakpoint_group = 'nyhed_oversigt';
  $picture_mapping->mapping = array(
    'custom.user.mobile' => array(
      '1x' => 'nyhed_oversigt',
    ),
    'custom.user.narrow' => array(
      '1x' => 'nyhed_oversigt',
    ),
    'custom.user.normal' => array(
      '1x' => 'nyhed_oversigt',
    ),
  );
  $export['nyhed_oversigt'] = $picture_mapping;

  return $export;
}
