<?php
/**
 * @file
 * rebild_sub_perm.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function rebild_sub_perm_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.create page_extended content.roles|subsite admin"] = 'subsite admin';
  $overrides["user_permission.delete any page_extended content.roles|subsite admin"] = 'subsite admin';
  $overrides["user_permission.delete own page_extended content.roles|subsite admin"] = 'subsite admin';
  $overrides["user_permission.edit any page_extended content.roles|subsite admin"] = 'subsite admin';
  $overrides["user_permission.edit own page_extended content.roles|subsite admin"] = 'subsite admin';

 return $overrides;
}
