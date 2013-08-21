<?php
/**
 * @file
 * rebild_calendar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_calendar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create calendar_post content'.
  $permissions['create calendar_post content'] = array(
    'name' => 'create calendar_post content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any calendar_post content'.
  $permissions['delete any calendar_post content'] = array(
    'name' => 'delete any calendar_post content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own calendar_post content'.
  $permissions['delete own calendar_post content'] = array(
    'name' => 'delete own calendar_post content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in self_service_categories'.
  $permissions['delete terms in self_service_categories'] = array(
    'name' => 'delete terms in self_service_categories',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any calendar_post content'.
  $permissions['edit any calendar_post content'] = array(
    'name' => 'edit any calendar_post content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own calendar_post content'.
  $permissions['edit own calendar_post content'] = array(
    'name' => 'edit own calendar_post content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in self_service_categories'.
  $permissions['edit terms in self_service_categories'] = array(
    'name' => 'edit terms in self_service_categories',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
