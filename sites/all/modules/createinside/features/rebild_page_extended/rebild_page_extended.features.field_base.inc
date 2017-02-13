<?php
/**
 * @file
 * rebild_page_extended.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rebild_page_extended_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_main_contact'.
  $field_bases['field_main_contact'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_contact',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_main_paragraphs'.
  $field_bases['field_main_paragraphs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_paragraphs',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  // Exported field_base: 'field_sec_nav_body'.
  $field_bases['field_sec_nav_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_nav_body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sec_nav_elment'.
  $field_bases['field_sec_nav_elment'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_nav_elment',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => FALSE,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_sec_nav_image'.
  $field_bases['field_sec_nav_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_nav_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_sec_nav_link'.
  $field_bases['field_sec_nav_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_nav_link',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_sec_nav_title'.
  $field_bases['field_sec_nav_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_nav_title',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sec_pdf_file'.
  $field_bases['field_sec_pdf_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_pdf_file',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_sec_txt_body'.
  $field_bases['field_sec_txt_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_txt_body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sec_txt_img_body'.
  $field_bases['field_sec_txt_img_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_txt_img_body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sec_txt_img_image'.
  $field_bases['field_sec_txt_img_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_txt_img_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_sec_txt_vid_body'.
  $field_bases['field_sec_txt_vid_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_txt_vid_body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_sec_txt_vid_url'.
  $field_bases['field_sec_txt_vid_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_txt_vid_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'video_embed_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'video_embed_field',
  );

  // Exported field_base: 'field_sec_vid_url'.
  $field_bases['field_sec_vid_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sec_vid_url',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'video_embed_field',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'video_embed_field',
  );

  return $field_bases;
}
