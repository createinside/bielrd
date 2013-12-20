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

  // Exported permission: 'administer nodeaccess'.
  $permissions['administer nodeaccess'] = array(
    'name' => 'administer nodeaccess',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant deletable node permissions'.
  $permissions['grant deletable node permissions'] = array(
    'name' => 'grant deletable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant editable node permissions'.
  $permissions['grant editable node permissions'] = array(
    'name' => 'grant editable node permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant node permissions'.
  $permissions['grant node permissions'] = array(
    'name' => 'grant node permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'nodeaccess',
  );

  // Exported permission: 'grant own node permissions'.
  $permissions['grant own node permissions'] = array(
    'name' => 'grant own node permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'nodeaccess',
  );

  return $permissions;
}
