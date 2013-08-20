<?php
/**
 * @file
 * rebild_offering.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_offering_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create offering content'.
  $permissions['create offering content'] = array(
    'name' => 'create offering content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offering content'.
  $permissions['delete any offering content'] = array(
    'name' => 'delete any offering content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offering content'.
  $permissions['delete own offering content'] = array(
    'name' => 'delete own offering content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any offering content'.
  $permissions['edit any offering content'] = array(
    'name' => 'edit any offering content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offering content'.
  $permissions['edit own offering content'] = array(
    'name' => 'edit own offering content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  return $permissions;
}
