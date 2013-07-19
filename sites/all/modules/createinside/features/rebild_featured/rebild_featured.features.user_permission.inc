<?php
/**
 * @file
 * rebild_featured.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_featured_user_default_permissions() {
  $permissions = array();

  // Exported permission: create featured_article content.
  $permissions['create featured_article content'] = array(
    'name' => 'create featured_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured_article content.
  $permissions['delete any featured_article content'] = array(
    'name' => 'delete any featured_article content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured_article content.
  $permissions['delete own featured_article content'] = array(
    'name' => 'delete own featured_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured_article content.
  $permissions['edit any featured_article content'] = array(
    'name' => 'edit any featured_article content',
    'roles' => array(
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured_article content.
  $permissions['edit own featured_article content'] = array(
    'name' => 'edit own featured_article content',
    'roles' => array(
      'fagredaktør' => 'fagredaktør',
      'kommunikation' => 'kommunikation',
    ),
    'module' => 'node',
  );

  return $permissions;
}
