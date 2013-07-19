<?php
/**
 * @file
 * rebild_self_service.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_self_service_user_default_permissions() {
  $permissions = array();

  // Exported permission: create self_service content.
  $permissions['create self_service content'] = array(
    'name' => 'create self_service content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any self_service content.
  $permissions['delete any self_service content'] = array(
    'name' => 'delete any self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own self_service content.
  $permissions['delete own self_service content'] = array(
    'name' => 'delete own self_service content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any self_service content.
  $permissions['edit any self_service content'] = array(
    'name' => 'edit any self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own self_service content.
  $permissions['edit own self_service content'] = array(
    'name' => 'edit own self_service content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
