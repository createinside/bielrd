<?php
/**
 * @file
 * rebild_edagsorden.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rebild_edagsorden_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer edagsorden importer'.
  $permissions['administer edagsorden importer'] = array(
    'name' => 'administer edagsorden importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'edagsorden_importer',
  );

  // Exported permission: 'clear edagsorden_agenda_importer feeds'.
  $permissions['clear edagsorden_agenda_importer feeds'] = array(
    'name' => 'clear edagsorden_agenda_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear edagsorden_committee_importer feeds'.
  $permissions['clear edagsorden_committee_importer feeds'] = array(
    'name' => 'clear edagsorden_committee_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear edagsorden_item_importer feeds'.
  $permissions['clear edagsorden_item_importer feeds'] = array(
    'name' => 'clear edagsorden_item_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create agenda content'.
  $permissions['create agenda content'] = array(
    'name' => 'create agenda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agenda content'.
  $permissions['delete any agenda content'] = array(
    'name' => 'delete any agenda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agenda content'.
  $permissions['delete own agenda content'] = array(
    'name' => 'delete own agenda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in calendar_categories'.
  $permissions['delete terms in calendar_categories'] = array(
    'name' => 'delete terms in calendar_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in edagsorden_committees'.
  $permissions['delete terms in edagsorden_committees'] = array(
    'name' => 'delete terms in edagsorden_committees',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any agenda content'.
  $permissions['edit any agenda content'] = array(
    'name' => 'edit any agenda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agenda content'.
  $permissions['edit own agenda content'] = array(
    'name' => 'edit own agenda content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in calendar_categories'.
  $permissions['edit terms in calendar_categories'] = array(
    'name' => 'edit terms in calendar_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in edagsorden_committees'.
  $permissions['edit terms in edagsorden_committees'] = array(
    'name' => 'edit terms in edagsorden_committees',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import edagsorden_agenda_importer feeds'.
  $permissions['import edagsorden_agenda_importer feeds'] = array(
    'name' => 'import edagsorden_agenda_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import edagsorden_committee_importer feeds'.
  $permissions['import edagsorden_committee_importer feeds'] = array(
    'name' => 'import edagsorden_committee_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import edagsorden_item_importer feeds'.
  $permissions['import edagsorden_item_importer feeds'] = array(
    'name' => 'import edagsorden_item_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper edagsorden_agenda_importer'.
  $permissions['tamper edagsorden_agenda_importer'] = array(
    'name' => 'tamper edagsorden_agenda_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper edagsorden_committee_importer'.
  $permissions['tamper edagsorden_committee_importer'] = array(
    'name' => 'tamper edagsorden_committee_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper edagsorden_item_importer'.
  $permissions['tamper edagsorden_item_importer'] = array(
    'name' => 'tamper edagsorden_item_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock edagsorden_agenda_importer feeds'.
  $permissions['unlock edagsorden_agenda_importer feeds'] = array(
    'name' => 'unlock edagsorden_agenda_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock edagsorden_committee_importer feeds'.
  $permissions['unlock edagsorden_committee_importer feeds'] = array(
    'name' => 'unlock edagsorden_committee_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock edagsorden_item_importer feeds'.
  $permissions['unlock edagsorden_item_importer feeds'] = array(
    'name' => 'unlock edagsorden_item_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
