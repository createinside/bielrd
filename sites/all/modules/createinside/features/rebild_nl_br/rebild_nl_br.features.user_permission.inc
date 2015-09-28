<?php
/**
 * @file
 * rebild_nl_br.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_nl_br_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nl_br content'.
  $permissions['create nl_br content'] = array(
    'name' => 'create nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nl_br content'.
  $permissions['delete any nl_br content'] = array(
    'name' => 'delete any nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nl_br content'.
  $permissions['delete own nl_br content'] = array(
    'name' => 'delete own nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nl_br content'.
  $permissions['edit any nl_br content'] = array(
    'name' => 'edit any nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nl_br content'.
  $permissions['edit own nl_br content'] = array(
    'name' => 'edit own nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any unpublished nl_br content'.
  $permissions['view any unpublished nl_br content'] = array(
    'name' => 'view any unpublished nl_br content',
    'roles' => array(
      'nyhedsbrev' => 'nyhedsbrev',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
