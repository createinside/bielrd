<?php
/**
 * @file
 * rebild_social_bar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_social_bar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any social_media bean'.
  $permissions['create any social_media bean'] = array(
    'name' => 'create any social_media bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any social_media bean'.
  $permissions['delete any social_media bean'] = array(
    'name' => 'delete any social_media bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete terms in social_media'.
  $permissions['delete terms in social_media'] = array(
    'name' => 'delete terms in social_media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any social_media bean'.
  $permissions['edit any social_media bean'] = array(
    'name' => 'edit any social_media bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit terms in social_media'.
  $permissions['edit terms in social_media'] = array(
    'name' => 'edit terms in social_media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view any social_media bean'.
  $permissions['view any social_media bean'] = array(
    'name' => 'view any social_media bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
