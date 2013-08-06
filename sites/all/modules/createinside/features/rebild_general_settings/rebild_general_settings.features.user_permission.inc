<?php
/**
 * @file
 * rebild_general_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_general_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'admin_menu',
  );

  return $permissions;
}
