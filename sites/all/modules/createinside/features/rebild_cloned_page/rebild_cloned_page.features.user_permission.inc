<?php
/**
 * @file
 * rebild_cloned_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_cloned_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: create cloned_page content.
  $permissions['create cloned_page content'] = array(
    'name' => 'create cloned_page content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any cloned_page content.
  $permissions['delete any cloned_page content'] = array(
    'name' => 'delete any cloned_page content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own cloned_page content.
  $permissions['delete own cloned_page content'] = array(
    'name' => 'delete own cloned_page content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any cloned_page content.
  $permissions['edit any cloned_page content'] = array(
    'name' => 'edit any cloned_page content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own cloned_page content.
  $permissions['edit own cloned_page content'] = array(
    'name' => 'edit own cloned_page content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  return $permissions;
}
