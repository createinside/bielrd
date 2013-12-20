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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'grant content access'.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'content_access',
  );

  // Exported permission: 'grant own content access'.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'content_access',
  );

  return $permissions;
}
