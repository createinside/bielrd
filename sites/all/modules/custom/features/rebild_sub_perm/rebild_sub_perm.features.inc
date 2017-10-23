<?php
/**
 * @file
 * rebild_sub_perm.features.inc
 */

/**
 * Implements hook_user_default_permissions_alter().
 */
function rebild_sub_perm_user_default_permissions_alter(&$data) {
  if (isset($data['create page_extended content'])) {
    $data['create page_extended content']['roles']['subsite admin'] = 'subsite admin'; /* WAS: '' */
  }
  if (isset($data['delete any page_extended content'])) {
    $data['delete any page_extended content']['roles']['subsite admin'] = 'subsite admin'; /* WAS: '' */
  }
  if (isset($data['delete own page_extended content'])) {
    $data['delete own page_extended content']['roles']['subsite admin'] = 'subsite admin'; /* WAS: '' */
  }
  if (isset($data['edit any page_extended content'])) {
    $data['edit any page_extended content']['roles']['subsite admin'] = 'subsite admin'; /* WAS: '' */
  }
  if (isset($data['edit own page_extended content'])) {
    $data['edit own page_extended content']['roles']['subsite admin'] = 'subsite admin'; /* WAS: '' */
  }
}
