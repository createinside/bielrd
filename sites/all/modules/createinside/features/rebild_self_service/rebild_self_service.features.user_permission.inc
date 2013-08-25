<?php
/**
 * @file
 * rebild_self_service.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_self_service_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create self_service content'.
  $permissions['create self_service content'] = array(
    'name' => 'create self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any self_service content'.
  $permissions['delete any self_service content'] = array(
    'name' => 'delete any self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own self_service content'.
  $permissions['delete own self_service content'] = array(
    'name' => 'delete own self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in rebild_sections'.
  $permissions['delete terms in rebild_sections'] = array(
    'name' => 'delete terms in rebild_sections',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in rebild_tags'.
  $permissions['delete terms in rebild_tags'] = array(
    'name' => 'delete terms in rebild_tags',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in self_service_types'.
  $permissions['delete terms in self_service_types'] = array(
    'name' => 'delete terms in self_service_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any self_service content'.
  $permissions['edit any self_service content'] = array(
    'name' => 'edit any self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own self_service content'.
  $permissions['edit own self_service content'] = array(
    'name' => 'edit own self_service content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in rebild_sections'.
  $permissions['edit terms in rebild_sections'] = array(
    'name' => 'edit terms in rebild_sections',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in rebild_tags'.
  $permissions['edit terms in rebild_tags'] = array(
    'name' => 'edit terms in rebild_tags',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in self_service_types'.
  $permissions['edit terms in self_service_types'] = array(
    'name' => 'edit terms in self_service_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
