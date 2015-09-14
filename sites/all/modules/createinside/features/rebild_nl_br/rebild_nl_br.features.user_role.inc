<?php
/**
 * @file
 * rebild_nl_br.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_nl_br_user_default_roles() {
  $roles = array();

  // Exported role: nyhedsbrev.
  $roles['nyhedsbrev'] = array(
    'name' => 'nyhedsbrev',
    'weight' => 8,
  );

  return $roles;
}
