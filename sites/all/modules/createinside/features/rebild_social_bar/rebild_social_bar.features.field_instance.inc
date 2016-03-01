<?php
/**
 * @file
 * rebild_social_bar.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rebild_social_bar_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-social_media-field_social_media_services'
  $field_instances['bean-social_media-field_social_media_services'] = array(
    'bundle' => 'social_media',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_social_media_services',
    'label' => 'Tjenester',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'accordion' => -1,
        'contact' => -1,
        'gis_map' => -1,
        'image_gallery' => -1,
        'navigation_list' => -1,
        'nl_br_sec_1' => -1,
        'nl_br_sec_2' => -1,
        'nl_br_sec_3' => -1,
        'nl_br_sec_4' => -1,
        'nl_br_sec_5' => -1,
        'nl_br_sec_6' => -1,
        'nl_br_sec_7' => -1,
        'pdf_list' => -1,
        'selfservice' => -1,
        'social_media' => 'social_media',
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
        'nl_br_sec_5' => -10,
        'nl_br_sec_6' => -10,
        'nl_br_sec_7' => -10,
        'pdf_list' => -10,
        'selfservice' => -10,
        'social_media' => -10,
        'text' => -10,
        'text_image' => -10,
        'text_video' => -10,
        'video' => -10,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Tjeneste',
      'title_multiple' => 'Tjenester',
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

  // Exported field_instance: 'paragraphs_item-social_media-field_social_media_profiles'
  $field_instances['paragraphs_item-social_media-field_social_media_profiles'] = array(
    'bundle' => 'social_media',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Overskriften på linket benyttes kun hvis der oprettes flere profiler til det samme sociale medie.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_social_media_profiles',
    'label' => 'Profiler',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'rel_remove' => 'default',
      'title' => 'required',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'paragraphs_item-social_media-field_social_media_type'
  $field_instances['paragraphs_item-social_media-field_social_media_type'] = array(
    'bundle' => 'social_media',
    'default_value' => array(
      0 => array(
        'tid' => 157,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_social_media_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 0,
      ),
      'type' => 'options_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-social_media-field_social_media_machine_name'
  $field_instances['taxonomy_term-social_media-field_social_media_machine_name'] = array(
    'bundle' => 'social_media',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_social_media_machine_name',
    'label' => 'Maskinnavn',
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
  t('Maskinnavn');
  t('Overskriften på linket benyttes kun hvis der oprettes flere profiler til det samme sociale medie.');
  t('Profiler');
  t('Tjenester');
  t('Type');

  return $field_instances;
}
