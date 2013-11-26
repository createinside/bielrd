<?php
/**
 * This module contains a fix to the redirect module, prevent Infinite loops when changing title (node alias).
 * Implements hook_redirect_presave().
 */
function misc_modifications_redirect_presave($redirect) {
  // Remove redirects pointing to aliases of the node it handles.
  $query = db_select('url_alias', 'u')
          ->fields('u', array('alias'));
  $query->join('redirect', 'r', 'u.alias = r.source');
  $query->fields('r', array('rid'));
  $results = $query->execute();
  foreach ($results as $record) {
    db_delete('redirect')
            ->condition('rid', $record->rid)
            ->execute();
  }
}
/**
 * Implements hook_redirect_insert().
 */
function misc_modifications_redirect_insert($redirect) {
  misc_modifications_redirect_presave($redirect);
}
/**
 * Implements hook_redirect_update().
 */
function misc_modifications_redirect_update($redirect) {
  misc_modifications_redirect_presave($redirect);
}
?>