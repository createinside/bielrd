<?php
/**
 * @file
 * rebild_wcag.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_wcag_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'print',
  );

  return $permissions;
}
