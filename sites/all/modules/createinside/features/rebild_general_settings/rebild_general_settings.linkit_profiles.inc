<?php
/**
 * @file
 * rebild_general_settings.linkit_profiles.inc
 */

/**
 * Implements hook_default_linkit_profiles().
 */
function rebild_general_settings_default_linkit_profiles() {
  $export = array();

  $linkit_profile = new stdClass();
  $linkit_profile->disabled = FALSE; /* Edit this to true to make a default linkit_profile disabled initially */
  $linkit_profile->api_version = 1;
  $linkit_profile->name = 'standard';
  $linkit_profile->admin_title = 'Standard';
  $linkit_profile->data = array(
    'plugins' => array(
      'entity:taxonomy_term' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'entity:node' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:file' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'entity:user' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
    ),
    'entity:node' => array(
      'result_description' => '',
      'bundles' => array(
        'os2web_borger_dk_article' => 'os2web_borger_dk_article',
        'consultation' => 'consultation',
        'news_article' => 'news_article',
        'page' => 'page',
        'offering' => 'offering',
        'featured_article' => 0,
        'article' => 0,
        'agenda' => 0,
        'calendar_post' => 0,
        'cloned_page' => 0,
        'announcement' => 0,
        'self_service' => 0,
        'subscription_email' => 0,
        'webform' => 0,
        'simplenews' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'include_unpublished' => 0,
    ),
    'entity:file' => array(
      'result_description' => '',
      'bundles' => array(
        'document' => 'document',
        'image' => 'image',
        'application' => 0,
        'audio' => 0,
        'video' => 0,
      ),
      'group_by_bundle' => 1,
      'reverse_menu_trail' => 0,
      'show_scheme' => 0,
      'group_by_scheme' => 0,
      'image_extra_info' => array(
        'thumbnail' => 'thumbnail',
        'dimensions' => 'dimensions',
      ),
    ),
    'entity:taxonomy_term' => array(
      'result_description' => '',
      'bundles' => array(
        'rebild_sections' => 0,
        'rebild_tags' => 0,
        'self_service_categories' => 0,
        'self_service_types' => 0,
        'calendar_categories' => 0,
        'edagsorden_committees' => 0,
        'centrer' => 0,
        'newsletter' => 0,
        'subscription_types' => 0,
      ),
      'group_by_bundle' => 0,
      'reverse_menu_trail' => 0,
    ),
    'entity:user' => array(
      'result_description' => '',
      'reverse_menu_trail' => 0,
    ),
    'imce' => array(
      'use_imce' => 1,
    ),
    'autocomplete' => array(
      'charLimit' => 3,
      'wait' => 350,
      'remoteTimeout' => 10000,
    ),
    'attributes' => array(
      'id' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'title' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'class' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'accesskey' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'rel' => array(
        'weight' => '0',
        'enabled' => 0,
      ),
      'anchor' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
      'target' => array(
        'weight' => '0',
        'enabled' => 1,
      ),
    ),
  );
  $linkit_profile->role_rids = array(
    4 => 1,
    5 => 1,
    3 => 1,
  );
  $linkit_profile->weight = 0;
  $export['standard'] = $linkit_profile;

  return $export;
}
