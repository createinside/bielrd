<?php
/**
 * @file
 * rebild_general_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rebild_general_settings_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: fagredaktør.
  $roles['fagredaktør'] = array(
    'name' => 'fagredaktør',
    'weight' => 2,
  );

  // Exported role: kommunikation.
  $roles['kommunikation'] = array(
    'name' => 'kommunikation',
    'weight' => 3,
  );

  return $roles;
}
