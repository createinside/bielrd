<?php
/**
 * @file
 * os2web_borger_dk.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function os2web_borger_dk_user_default_permissions() {
  $permissions = array();

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_main_section.
  $permissions['create field_main_section'] = array(
    'name' => 'create field_main_section',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_main_tags.
  $permissions['create field_main_tags'] = array(
    'name' => 'create field_main_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_os2web_borger_dk_formterm.
  $permissions['create field_os2web_borger_dk_formterm'] = array(
    'name' => 'create field_os2web_borger_dk_formterm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_termref_kle.
  $permissions['create field_termref_kle'] = array(
    'name' => 'create field_termref_kle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create os2web_borger_dk_article content.
  $permissions['create os2web_borger_dk_article content'] = array(
    'name' => 'create os2web_borger_dk_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any os2web_borger_dk_article content.
  $permissions['delete any os2web_borger_dk_article content'] = array(
    'name' => 'delete any os2web_borger_dk_article content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own os2web_borger_dk_article content.
  $permissions['delete own os2web_borger_dk_article content'] = array(
    'name' => 'delete own os2web_borger_dk_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any os2web_borger_dk_article content.
  $permissions['edit any os2web_borger_dk_article content'] = array(
    'name' => 'edit any os2web_borger_dk_article content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_main_section.
  $permissions['edit field_main_section'] = array(
    'name' => 'edit field_main_section',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_main_tags.
  $permissions['edit field_main_tags'] = array(
    'name' => 'edit field_main_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_os2web_borger_dk_formterm.
  $permissions['edit field_os2web_borger_dk_formterm'] = array(
    'name' => 'edit field_os2web_borger_dk_formterm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_termref_kle.
  $permissions['edit field_termref_kle'] = array(
    'name' => 'edit field_termref_kle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_main_section.
  $permissions['edit own field_main_section'] = array(
    'name' => 'edit own field_main_section',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_main_tags.
  $permissions['edit own field_main_tags'] = array(
    'name' => 'edit own field_main_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_os2web_borger_dk_formterm.
  $permissions['edit own field_os2web_borger_dk_formterm'] = array(
    'name' => 'edit own field_os2web_borger_dk_formterm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_termref_kle.
  $permissions['edit own field_termref_kle'] = array(
    'name' => 'edit own field_termref_kle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own os2web_borger_dk_article content.
  $permissions['edit own os2web_borger_dk_article content'] = array(
    'name' => 'edit own os2web_borger_dk_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: view field_main_section.
  $permissions['view field_main_section'] = array(
    'name' => 'view field_main_section',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_main_tags.
  $permissions['view field_main_tags'] = array(
    'name' => 'view field_main_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_os2web_borger_dk_formterm.
  $permissions['view field_os2web_borger_dk_formterm'] = array(
    'name' => 'view field_os2web_borger_dk_formterm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_termref_kle.
  $permissions['view field_termref_kle'] = array(
    'name' => 'view field_termref_kle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_main_section.
  $permissions['view own field_main_section'] = array(
    'name' => 'view own field_main_section',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_main_tags.
  $permissions['view own field_main_tags'] = array(
    'name' => 'view own field_main_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_os2web_borger_dk_formterm.
  $permissions['view own field_os2web_borger_dk_formterm'] = array(
    'name' => 'view own field_os2web_borger_dk_formterm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_termref_kle.
  $permissions['view own field_termref_kle'] = array(
    'name' => 'view own field_termref_kle',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
