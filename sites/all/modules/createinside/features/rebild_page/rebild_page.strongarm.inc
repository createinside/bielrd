<?php
/**
 * @file
 * rebild_page.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rebild_page_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 1;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_page';
  $strongarm->value = '0';
  $export['comment_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 1;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fancybox_settings';
  $strongarm->value = array(
    'settings' => array(
      'selectors' => '',
      'deactivated_pages' => 'admin*
img_assist*
imce*
node/add*
node/*/edit
block/add*
block/*/edit
',
    ),
    'options' => array(
      'padding' => 15,
      'margin' => 20,
      'width' => 'auto',
      'height' => 'auto',
      'minWidth' => 100,
      'minHeight' => 100,
      'maxWidth' => 9999,
      'maxHeight' => 9999,
      'autoSize' => 0,
      'autoHeight' => 0,
      'autoWidth' => 0,
      'autoResize' => 1,
      'autoCenter' => 1,
      'fitToView' => 1,
      'aspectRatio' => 0,
      'topRatio' => 0.5,
      'leftRatio' => 0.5,
      'scrolling' => 'auto',
      'wrapCSS' => '',
      'arrows' => 1,
      'closeBtn' => 1,
      'closeClick' => 0,
      'nextClick' => 0,
      'mouseWheel' => 1,
      'autoPlay' => 0,
      'playSpeed' => 3000,
      'preload' => 3,
      'modal' => 0,
      'openEffect' => 'fade',
      'closeEffect' => 'fade',
      'nextEffect' => 'elastic',
      'prevEffect' => 'elastic',
      'openSpeed' => 150,
      'closeSpeed' => 150,
      'nextSpeed' => 150,
      'prevSpeed' => 150,
      'openEasing' => 'swing',
      'closeEasing' => 'swing',
      'nextEasing' => 'swing',
      'prevEasing' => 'swing',
      'openOpacity' => 1,
      'closeOpacity' => 1,
      'openMethod' => 'zoomIn',
      'closeMethod' => 'zoomOut',
      'nextMethod' => 'changeIn',
      'prevMethod' => 'changeOut',
    ),
    'helpers' => array(
      'title_enabled' => 1,
      'title' => array(
        'type' => 'float',
        'position' => 'bottom',
      ),
      'overlay_enabled' => 1,
      'overlay' => array(
        'closeClick' => 1,
        'speedOut' => 200,
        'showEarly' => 1,
        'locked' => 1,
        'fixed' => 1,
      ),
      'thumbs_enabled' => 0,
      'thumbs' => array(
        'width' => 50,
        'height' => 50,
        'position' => 'bottom',
      ),
      'media_enabled' => 0,
      'buttons_enabled' => 0,
      'buttons' => array(
        'position' => 'top',
      ),
    ),
    'callbacks' => array(
      'onCancel' => '',
      'beforeLoad' => '',
      'afterLoad' => '',
      'beforeShow' => '',
      'afterShow' => '',
      'beforeClose' => '',
      'afterClose' => '',
      'onUpdate' => '',
      'onPlayStart' => '',
      'onPlayEnd' => '',
    ),
  );
  $export['fancybox_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '7',
        ),
        'workbench_access' => array(
          'weight' => '11',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '8',
        ),
        'rabbit_hole' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'content_accordion_entity_view_1' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'selfservice_items_entity_view_1' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'selfservice_items_embedded' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'content_accordion_revisions__entity_view_1' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.7';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '0';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg png gif txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp';
  $export['media__file_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__wysiwyg_upload_directory';
  $strongarm->value = 'wysiwyg_media_files';
  $export['media__wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_page';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '0';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_page';
  $strongarm->value = 0;
  $export['node_submitted_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '[node:menu-link:parents:join-path]/[node:title]';
  $export['pathauto_node_page_pattern'] = $strongarm;

  return $export;
}
