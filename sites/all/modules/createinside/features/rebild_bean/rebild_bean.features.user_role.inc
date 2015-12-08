<?php
/**
 * @file
 * rebild_bean.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_bean_user_default_roles() {
  $roles = array();

  // Exported role: blokadministrator.
  $roles['blokadministrator'] = array(
    'name' => 'blokadministrator',
    'weight' => 9,
  );

  return $roles;
}
