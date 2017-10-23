<?php
/**
 * @file
 * rebild_sub_perm.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_sub_perm_user_default_roles() {
  $roles = array();

  // Exported role: subsite admin.
  $roles['subsite admin'] = array(
    'name' => 'subsite admin',
    'weight' => 2,
  );

  return $roles;
}
