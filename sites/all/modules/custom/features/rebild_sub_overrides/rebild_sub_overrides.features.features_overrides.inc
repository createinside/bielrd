<?php
/**
 * @file
 * rebild_sub_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function rebild_sub_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page_extended-field_main_contact.node-page_extended-field_main_contact"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page_extended-field_main_links_external.node-page_extended-field_main_links_external"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page_extended-field_main_links_internal.node-page_extended-field_main_links_internal"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page_extended-field_main_section.node-page_extended-field_main_section"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page_extended-field_main_tags.node-page_extended-field_main_tags"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page_extended-field_main_view.node-page_extended-field_main_view"]["DELETED"] = TRUE;

 return $overrides;
}
