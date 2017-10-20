<?php
/**
 * @file
 * rebild_sub_overrides.features.inc
 */

/**
 * Implements hook_field_default_field_bases_alter().
 */
function rebild_sub_overrides_field_default_field_bases_alter(&$data) {
  if (isset($data['field_main_contact'])) {
    unset($data['field_main_contact']);
  }
  if (isset($data['field_main_links_external'])) {
    unset($data['field_main_links_external']);
  }
  if (isset($data['field_main_links_internal'])) {
    unset($data['field_main_links_internal']);
  }
  if (isset($data['field_main_section'])) {
    unset($data['field_main_section']);
  }
  if (isset($data['field_main_tags'])) {
    unset($data['field_main_tags']);
  }
  if (isset($data['field_main_view'])) {
    unset($data['field_main_view']);
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function rebild_sub_overrides_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page_extended-field_main_contact'])) {
    unset($data['node-page_extended-field_main_contact']);
  }
  if (isset($data['node-page_extended-field_main_links_external'])) {
    unset($data['node-page_extended-field_main_links_external']);
  }
  if (isset($data['node-page_extended-field_main_links_internal'])) {
    unset($data['node-page_extended-field_main_links_internal']);
  }
  if (isset($data['node-page_extended-field_main_section'])) {
    unset($data['node-page_extended-field_main_section']);
  }
  if (isset($data['node-page_extended-field_main_tags'])) {
    unset($data['node-page_extended-field_main_tags']);
  }
  if (isset($data['node-page_extended-field_main_view'])) {
    unset($data['node-page_extended-field_main_view']);
  }
}
