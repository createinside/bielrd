<?php
/**
 * @file
 * rebild_user_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_user_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'user',
  );

  return $permissions;
}
