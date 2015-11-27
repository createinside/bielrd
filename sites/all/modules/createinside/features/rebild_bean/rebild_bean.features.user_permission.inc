<?php
/**
 * @file
 * rebild_bean.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_bean_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any blok_hoej_format bean'.
  $permissions['create any blok_hoej_format bean'] = array(
    'name' => 'create any blok_hoej_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any blok_lav_format bean'.
  $permissions['create any blok_lav_format bean'] = array(
    'name' => 'create any blok_lav_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any contact bean'.
  $permissions['create any contact bean'] = array(
    'name' => 'create any contact bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any forsideblokke bean'.
  $permissions['create any forsideblokke bean'] = array(
    'name' => 'create any forsideblokke bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any link_collection bean'.
  $permissions['create any link_collection bean'] = array(
    'name' => 'create any link_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any blok_hoej_format bean'.
  $permissions['delete any blok_hoej_format bean'] = array(
    'name' => 'delete any blok_hoej_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any blok_lav_format bean'.
  $permissions['delete any blok_lav_format bean'] = array(
    'name' => 'delete any blok_lav_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any contact bean'.
  $permissions['delete any contact bean'] = array(
    'name' => 'delete any contact bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any forsideblokke bean'.
  $permissions['delete any forsideblokke bean'] = array(
    'name' => 'delete any forsideblokke bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any link_collection bean'.
  $permissions['delete any link_collection bean'] = array(
    'name' => 'delete any link_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any blok_hoej_format bean'.
  $permissions['edit any blok_hoej_format bean'] = array(
    'name' => 'edit any blok_hoej_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any blok_lav_format bean'.
  $permissions['edit any blok_lav_format bean'] = array(
    'name' => 'edit any blok_lav_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any contact bean'.
  $permissions['edit any contact bean'] = array(
    'name' => 'edit any contact bean',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any forsideblokke bean'.
  $permissions['edit any forsideblokke bean'] = array(
    'name' => 'edit any forsideblokke bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any link_collection bean'.
  $permissions['edit any link_collection bean'] = array(
    'name' => 'edit any link_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any blok_hoej_format bean'.
  $permissions['view any blok_hoej_format bean'] = array(
    'name' => 'view any blok_hoej_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any blok_lav_format bean'.
  $permissions['view any blok_lav_format bean'] = array(
    'name' => 'view any blok_lav_format bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any contact bean'.
  $permissions['view any contact bean'] = array(
    'name' => 'view any contact bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any forsideblokke bean'.
  $permissions['view any forsideblokke bean'] = array(
    'name' => 'view any forsideblokke bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any link_collection bean'.
  $permissions['view any link_collection bean'] = array(
    'name' => 'view any link_collection bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
