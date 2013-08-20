<?php
/**
 * @file
 * rebild_layout.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_layout_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer accordion menu'.
  $permissions['administer accordion menu'] = array(
    'name' => 'administer accordion menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'accordion_menu',
  );

  // Exported permission: 'administer delta'.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: 'administer delta blocks'.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: 'administer ultimenu'.
  $permissions['administer ultimenu'] = array(
    'name' => 'administer ultimenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ultimenu',
  );

  return $permissions;
}
