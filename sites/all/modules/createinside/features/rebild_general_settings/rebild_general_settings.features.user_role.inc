<?php
/**
 * @file
 * rebild_general_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_general_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 10,
  );

  // Exported role: business.
  $roles['business'] = array(
    'name' => 'business',
    'weight' => 4,
  );

  // Exported role: fagredaktør.
  $roles['fagredaktør'] = array(
    'name' => 'fagredaktør',
    'weight' => 3,
  );

  // Exported role: kommunikation.
  $roles['kommunikation'] = array(
    'name' => 'kommunikation',
    'weight' => 5,
  );

  // Exported role: konfigurator.
  $roles['konfigurator'] = array(
    'name' => 'konfigurator',
    'weight' => 6,
  );

  // Exported role: politiker.
  $roles['politiker'] = array(
    'name' => 'politiker',
    'weight' => 2,
  );

  return $roles;
}
