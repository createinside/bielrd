<?php
/**
 * @file
 * rebild_user_profile.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rebild_user_profile_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  return $export;
}
