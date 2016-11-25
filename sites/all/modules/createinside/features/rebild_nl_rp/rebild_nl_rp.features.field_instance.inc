<?php
/**
 * @file
 * rebild_nl_rp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rebild_nl_rp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-nl_rp-field_nl_br_sections'.
  $field_instances['node-nl_rp-field_nl_br_sections'] = array(
    'bundle' => 'nl_rp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'rp',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nl_br_sections',
    'label' => 'Sektioner',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion' => -1,
        'contact' => -1,
        'gis_map' => -1,
        'image_gallery' => -1,
        'navigation_list' => -1,
        'nl_br_sec_1' => 'nl_br_sec_1',
        'nl_br_sec_2' => 'nl_br_sec_2',
        'nl_br_sec_3' => 'nl_br_sec_3',
        'nl_br_sec_4' => 'nl_br_sec_4',
        'nl_br_sec_5' => 'nl_br_sec_5',
        'nl_br_sec_6' => 'nl_br_sec_6',
        'nl_br_sec_7' => 'nl_br_sec_7',
        'pdf_list' => -1,
        'selfservice' => -1,
        'social_media' => -1,
        'text' => -1,
        'text_image' => -1,
        'text_video' => -1,
        'video' => -1,
      ),
      'bundle_weights' => array(
        'accordion' => 2,
        'contact' => 3,
        'gis_map' => 4,
        'image_gallery' => 5,
        'navigation_list' => 6,
        'nl_br_sec_1' => 7,
        'nl_br_sec_2' => 8,
        'nl_br_sec_3' => 9,
        'nl_br_sec_4' => 10,
        'nl_br_sec_5' => 11,
        'nl_br_sec_6' => 12,
        'nl_br_sec_7' => 13,
        'pdf_list' => 14,
        'selfservice' => 15,
        'social_media' => 16,
        'text' => 17,
        'text_image' => 18,
        'text_video' => 19,
        'video' => 20,
      ),
      'default_edit_mode' => 'closed',
      'title' => 'sektion',
      'title_multiple' => 'sektioner',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-nl_rp-field_nl_br_subject'.
  $field_instances['node-nl_rp-field_nl_br_subject'] = array(
    'bundle' => 'nl_rp',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nl_br_subject',
    'label' => 'Emne',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Emne');
  t('Sektioner');

  return $field_instances;
}
