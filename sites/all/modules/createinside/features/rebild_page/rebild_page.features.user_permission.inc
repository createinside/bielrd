<?php
/**
 * @file
 * rebild_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create field_con_address'.
  $permissions['create field_con_address'] = array(
    'name' => 'create field_con_address',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_center'.
  $permissions['create field_con_center'] = array(
    'name' => 'create field_con_center',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_email'.
  $permissions['create field_con_email'] = array(
    'name' => 'create field_con_email',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_link'.
  $permissions['create field_con_link'] = array(
    'name' => 'create field_con_link',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_name'.
  $permissions['create field_con_name'] = array(
    'name' => 'create field_con_name',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_opening_hours'.
  $permissions['create field_con_opening_hours'] = array(
    'name' => 'create field_con_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_phone'.
  $permissions['create field_con_phone'] = array(
    'name' => 'create field_con_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_phone_hours'.
  $permissions['create field_con_phone_hours'] = array(
    'name' => 'create field_con_phone_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_con_title'.
  $permissions['create field_con_title'] = array(
    'name' => 'create field_con_title',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_main_block'.
  $permissions['create field_main_block'] = array(
    'name' => 'create field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_main_protected'.
  $permissions['create field_main_protected'] = array(
    'name' => 'create field_main_protected',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_main_view'.
  $permissions['create field_main_view'] = array(
    'name' => 'create field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_con_address'.
  $permissions['edit field_con_address'] = array(
    'name' => 'edit field_con_address',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_center'.
  $permissions['edit field_con_center'] = array(
    'name' => 'edit field_con_center',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_email'.
  $permissions['edit field_con_email'] = array(
    'name' => 'edit field_con_email',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_link'.
  $permissions['edit field_con_link'] = array(
    'name' => 'edit field_con_link',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_name'.
  $permissions['edit field_con_name'] = array(
    'name' => 'edit field_con_name',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_opening_hours'.
  $permissions['edit field_con_opening_hours'] = array(
    'name' => 'edit field_con_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_phone'.
  $permissions['edit field_con_phone'] = array(
    'name' => 'edit field_con_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_phone_hours'.
  $permissions['edit field_con_phone_hours'] = array(
    'name' => 'edit field_con_phone_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_con_title'.
  $permissions['edit field_con_title'] = array(
    'name' => 'edit field_con_title',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_main_block'.
  $permissions['edit field_main_block'] = array(
    'name' => 'edit field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_main_protected'.
  $permissions['edit field_main_protected'] = array(
    'name' => 'edit field_main_protected',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_main_view'.
  $permissions['edit field_main_view'] = array(
    'name' => 'edit field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_address'.
  $permissions['edit own field_con_address'] = array(
    'name' => 'edit own field_con_address',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_center'.
  $permissions['edit own field_con_center'] = array(
    'name' => 'edit own field_con_center',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_email'.
  $permissions['edit own field_con_email'] = array(
    'name' => 'edit own field_con_email',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_link'.
  $permissions['edit own field_con_link'] = array(
    'name' => 'edit own field_con_link',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_name'.
  $permissions['edit own field_con_name'] = array(
    'name' => 'edit own field_con_name',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_opening_hours'.
  $permissions['edit own field_con_opening_hours'] = array(
    'name' => 'edit own field_con_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_phone'.
  $permissions['edit own field_con_phone'] = array(
    'name' => 'edit own field_con_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_phone_hours'.
  $permissions['edit own field_con_phone_hours'] = array(
    'name' => 'edit own field_con_phone_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_con_title'.
  $permissions['edit own field_con_title'] = array(
    'name' => 'edit own field_con_title',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_main_block'.
  $permissions['edit own field_main_block'] = array(
    'name' => 'edit own field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_main_protected'.
  $permissions['edit own field_main_protected'] = array(
    'name' => 'edit own field_main_protected',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_main_view'.
  $permissions['edit own field_main_view'] = array(
    'name' => 'edit own field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view field_con_address'.
  $permissions['view field_con_address'] = array(
    'name' => 'view field_con_address',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_center'.
  $permissions['view field_con_center'] = array(
    'name' => 'view field_con_center',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_email'.
  $permissions['view field_con_email'] = array(
    'name' => 'view field_con_email',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_link'.
  $permissions['view field_con_link'] = array(
    'name' => 'view field_con_link',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_name'.
  $permissions['view field_con_name'] = array(
    'name' => 'view field_con_name',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_opening_hours'.
  $permissions['view field_con_opening_hours'] = array(
    'name' => 'view field_con_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_phone'.
  $permissions['view field_con_phone'] = array(
    'name' => 'view field_con_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_phone_hours'.
  $permissions['view field_con_phone_hours'] = array(
    'name' => 'view field_con_phone_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_con_title'.
  $permissions['view field_con_title'] = array(
    'name' => 'view field_con_title',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'kommunikation' => 'kommunikation',
      'konfigurator' => 'konfigurator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_main_block'.
  $permissions['view field_main_block'] = array(
    'name' => 'view field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_main_protected'.
  $permissions['view field_main_protected'] = array(
    'name' => 'view field_main_protected',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_main_view'.
  $permissions['view field_main_view'] = array(
    'name' => 'view field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_address'.
  $permissions['view own field_con_address'] = array(
    'name' => 'view own field_con_address',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_center'.
  $permissions['view own field_con_center'] = array(
    'name' => 'view own field_con_center',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_email'.
  $permissions['view own field_con_email'] = array(
    'name' => 'view own field_con_email',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_link'.
  $permissions['view own field_con_link'] = array(
    'name' => 'view own field_con_link',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_name'.
  $permissions['view own field_con_name'] = array(
    'name' => 'view own field_con_name',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_opening_hours'.
  $permissions['view own field_con_opening_hours'] = array(
    'name' => 'view own field_con_opening_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_phone'.
  $permissions['view own field_con_phone'] = array(
    'name' => 'view own field_con_phone',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_phone_hours'.
  $permissions['view own field_con_phone_hours'] = array(
    'name' => 'view own field_con_phone_hours',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_con_title'.
  $permissions['view own field_con_title'] = array(
    'name' => 'view own field_con_title',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_main_block'.
  $permissions['view own field_main_block'] = array(
    'name' => 'view own field_main_block',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_main_protected'.
  $permissions['view own field_main_protected'] = array(
    'name' => 'view own field_main_protected',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_main_view'.
  $permissions['view own field_main_view'] = array(
    'name' => 'view own field_main_view',
    'roles' => array(
      'administrator' => 'administrator',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
