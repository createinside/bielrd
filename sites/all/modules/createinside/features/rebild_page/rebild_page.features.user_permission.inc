<?php
/**
 * @file
 * rebild_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create field_main_block'.
  $permissions['create field_main_block'] = array(
    'name' => 'create field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_main_view'.
  $permissions['create field_main_view'] = array(
    'name' => 'create field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_main_block'.
  $permissions['edit field_main_block'] = array(
    'name' => 'edit field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_main_view'.
  $permissions['edit field_main_view'] = array(
    'name' => 'edit field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_main_block'.
  $permissions['edit own field_main_block'] = array(
    'name' => 'edit own field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_main_view'.
  $permissions['edit own field_main_view'] = array(
    'name' => 'edit own field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view field_main_block'.
  $permissions['view field_main_block'] = array(
    'name' => 'view field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_main_view'.
  $permissions['view field_main_view'] = array(
    'name' => 'view field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_main_block'.
  $permissions['view own field_main_block'] = array(
    'name' => 'view own field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_main_view'.
  $permissions['view own field_main_view'] = array(
    'name' => 'view own field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
