<?php
/**
 * @file
 * rebild_nl_rp.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_nl_rp_user_default_roles() {
  $roles = array();

  // Exported role: Rebildporten - nyhedsbrev.
  $roles['Rebildporten - nyhedsbrev'] = array(
    'name' => 'Rebildporten - nyhedsbrev',
    'weight' => 10,
  );

  return $roles;
}
