<?php
/**
 * @file
 * rebild_page_extended.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_page_extended_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create page_extended content'.
  $permissions['create page_extended content'] = array(
    'name' => 'create page_extended content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_extended content'.
  $permissions['delete any page_extended content'] = array(
    'name' => 'delete any page_extended content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page_extended content'.
  $permissions['delete own page_extended content'] = array(
    'name' => 'delete own page_extended content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_extended content'.
  $permissions['edit any page_extended content'] = array(
    'name' => 'edit any page_extended content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page_extended content'.
  $permissions['edit own page_extended content'] = array(
    'name' => 'edit own page_extended content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
