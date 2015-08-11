<?php
/**
 * @file
 * rebild_page_extended.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rebild_page_extended_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_sec_nav_elment-field_sec_nav_body'
  $field_instances['field_collection_item-field_sec_nav_elment-field_sec_nav_body'] = array(
    'bundle' => 'field_sec_nav_elment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 0,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 135,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sec_nav_body',
    'label' => 'Appetitvækker',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_sec_nav_elment-field_sec_nav_image'
  $field_instances['field_collection_item-field_sec_nav_elment-field_sec_nav_image'] = array(
    'bundle' => 'field_sec_nav_elment',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'section_navigation',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sec_nav_image',
    'label' => 'Billede',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'nav_list',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '105x90',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_clone--media_browser_1' => 0,
          'media_browser_clone--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_browser_plus_customized--media_browser_my_files' => 0,
          'media_browser_plus_customized--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 0,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'section_navigation' => 'section_navigation',
        ),
        'manualcrop_styles_list' => array(
          'section_navigation' => 'section_navigation',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_sec_nav_elment-field_sec_nav_link'
  $field_instances['field_collection_item-field_sec_nav_elment-field_sec_nav_link'] = array(
    'bundle' => 'field_sec_nav_elment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sec_nav_link',
    'label' => 'Link',
    'required' => 1,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'linkit' => array(
        'enable' => 1,
        'insert_plugin' => 'raw_url',
      ),
      'rel_remove' => 'default',
      'title' => 'value',
      'title_maxlength' => 128,
      'title_value' => 'Læs mere',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_sec_nav_elment-field_sec_nav_title'
  $field_instances['field_collection_item-field_sec_nav_elment-field_sec_nav_title'] = array(
    'bundle' => 'field_sec_nav_elment',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_sec_nav_title',
    'label' => 'Titel',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_contact'
  $field_instances['node-page_extended-field_main_contact'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_contact',
    'label' => 'Kontakt',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'accordion' => -1,
        'contact' => 'contact',
        'gis_map' => -1,
        'image_gallery' => -1,
        'navigation_list' => -1,
        'pdf_list' => -1,
        'selfservice' => -1,
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
        'pdf_list' => 7,
        'selfservice' => 8,
        'text' => 9,
        'text_image' => 10,
        'text_video' => -10,
        'video' => -10,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_factbox'
  $field_instances['node-page_extended-field_main_factbox'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_factbox',
    'label' => 'Faktaboks',
    'required' => 0,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_image'
  $field_instances['node-page_extended-field_main_image'] = array(
    'bundle' => 'page_extended',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'indhold_top',
        ),
        'type' => 'image',
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
    'field_name' => 'field_main_image',
    'label' => 'Billede',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'page_extended',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5 MB',
      'max_resolution' => '',
      'min_resolution' => '680x190',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_clone--media_browser_1' => 0,
          'media_browser_clone--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_browser_plus_customized--media_browser_my_files' => 0,
          'media_browser_plus_customized--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 0,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(
          'indhold_top' => 'indhold_top',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_links_external'
  $field_instances['node-page_extended-field_main_links_external'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_links_external',
    'label' => 'Eksterne links',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'user',
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
      'title' => 'optional',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_links_internal'
  $field_instances['node-page_extended-field_main_links_internal'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_links_internal',
    'label' => 'Interne links',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_paragraphs'
  $field_instances['node-page_extended-field_main_paragraphs'] = array(
    'bundle' => 'page_extended',
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
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_paragraphs',
    'label' => 'Sektioner',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'accordion' => 'accordion',
        'contact' => -1,
        'gis_map' => 'gis_map',
        'image_gallery' => 'image_gallery',
        'navigation_list' => 'navigation_list',
        'pdf_list' => 'pdf_list',
        'selfservice' => 'selfservice',
        'text' => 'text',
        'text_image' => 'text_image',
        'text_video' => 'text_video',
        'video' => 'video',
      ),
      'bundle_weights' => array(
        'accordion' => -8,
        'contact' => 0,
        'gis_map' => -1,
        'image_gallery' => -2,
        'navigation_list' => -7,
        'pdf_list' => -5,
        'selfservice' => -6,
        'text' => -10,
        'text_image' => -9,
        'text_video' => -4,
        'video' => -3,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_section'
  $field_instances['node-page_extended-field_main_section'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Tilknyt dette indhold til en sektion.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_section',
    'label' => 'Sektion',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_summary'
  $field_instances['node-page_extended-field_main_summary'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_main_summary',
    'label' => 'Resumé',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page_extended-field_main_tags'
  $field_instances['node-page_extended-field_main_tags'] = array(
    'bundle' => 'page_extended',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg et eller flere tags som beskriver dette indhold.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_tags',
    'label' => 'Tags',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'paragraphs_item-accordion-field_main_accordion'
  $field_instances['paragraphs_item-accordion-field_main_accordion'] = array(
    'bundle' => 'accordion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
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
    'field_name' => 'field_main_accordion',
    'label' => 'Accordion',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_address'
  $field_instances['paragraphs_item-contact-field_con_address'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_address',
    'label' => 'Adresse',
    'required' => 0,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_center'
  $field_instances['paragraphs_item-contact-field_con_center'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
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
    'field_name' => 'field_con_center',
    'label' => 'Center',
    'required' => 0,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_email'
  $field_instances['paragraphs_item-contact-field_con_email'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_link'
  $field_instances['paragraphs_item-contact-field_con_link'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_link',
    'label' => 'Website',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
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
      'title' => 'optional',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_name'
  $field_instances['paragraphs_item-contact-field_con_name'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_con_name',
    'label' => 'Navn',
    'required' => 0,
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
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_opening_hours'
  $field_instances['paragraphs_item-contact-field_con_opening_hours'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'date_first_day' => 1,
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'separator_day_hours' => ': ',
          'separator_days' => '<br />',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => 'all',
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 7,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_opening_hours',
    'label' => 'Åbningstider',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'office_hours',
      'settings' => array(),
      'type' => 'office_hours',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_phone'
  $field_instances['paragraphs_item-contact-field_con_phone'] = array(
    'bundle' => 'contact',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'cck_phone',
        'settings' => array(),
        'type' => 'global_phone_number',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_phone',
    'label' => 'Telefonnummer',
    'required' => 0,
    'settings' => array(
      'all_country_codes' => 0,
      'country_code_position' => 'before',
      'country_codes' => array(
        'country_selection' => array(
          'ad' => 0,
          'ae' => 0,
          'af' => 0,
          'ag' => 0,
          'ai' => 0,
          'al' => 0,
          'am' => 0,
          'an' => 0,
          'ao' => 0,
          'ar' => 0,
          'as' => 0,
          'at' => 0,
          'au' => 0,
          'aw' => 0,
          'az' => 0,
          'ba' => 0,
          'bb' => 0,
          'bd' => 0,
          'be' => 0,
          'bf' => 0,
          'bg' => 0,
          'bh' => 0,
          'bi' => 0,
          'bj' => 0,
          'bm' => 0,
          'bn' => 0,
          'bo' => 0,
          'br' => 0,
          'bs' => 0,
          'bt' => 0,
          'bw' => 0,
          'by' => 0,
          'bz' => 0,
          'ca' => 0,
          'cc' => 0,
          'cd' => 0,
          'cf' => 0,
          'cg' => 0,
          'ch' => 0,
          'ci' => 0,
          'ck' => 0,
          'cl' => 0,
          'cm' => 0,
          'cn' => 0,
          'co' => 0,
          'cr' => 0,
          'cu' => 0,
          'cv' => 0,
          'cx' => 0,
          'cy' => 0,
          'cz' => 0,
          'de' => 0,
          'dj' => 0,
          'dk' => 'dk',
          'dm' => 0,
          'do' => 0,
          'dz' => 0,
          'ec' => 0,
          'ee' => 0,
          'eg' => 0,
          'er' => 0,
          'es' => 0,
          'et' => 0,
          'fi' => 0,
          'fj' => 0,
          'fk' => 0,
          'fm' => 0,
          'fo' => 0,
          'fr' => 0,
          'ga' => 0,
          'gb' => 0,
          'gd' => 0,
          'ge' => 0,
          'gf' => 0,
          'gh' => 0,
          'gi' => 0,
          'gl' => 0,
          'gm' => 0,
          'gn' => 0,
          'gp' => 0,
          'gq' => 0,
          'gr' => 0,
          'gt' => 0,
          'gu' => 0,
          'gw' => 0,
          'gy' => 0,
          'hk' => 0,
          'hn' => 0,
          'hr' => 0,
          'ht' => 0,
          'hu' => 0,
          'id' => 0,
          'ie' => 0,
          'il' => 0,
          'in' => 0,
          'io' => 0,
          'iq' => 0,
          'ir' => 0,
          'is' => 0,
          'it' => 0,
          'jm' => 0,
          'jo' => 0,
          'jp' => 0,
          'ke' => 0,
          'kg' => 0,
          'kh' => 0,
          'ki' => 0,
          'km' => 0,
          'kn' => 0,
          'kp' => 0,
          'kr' => 0,
          'kw' => 0,
          'ky' => 0,
          'kz' => 0,
          'la' => 0,
          'lb' => 0,
          'lc' => 0,
          'li' => 0,
          'lk' => 0,
          'lr' => 0,
          'ls' => 0,
          'lt' => 0,
          'lu' => 0,
          'lv' => 0,
          'ly' => 0,
          'ma' => 0,
          'mc' => 0,
          'md' => 0,
          'me' => 0,
          'mg' => 0,
          'mh' => 0,
          'mk' => 0,
          'ml' => 0,
          'mm' => 0,
          'mn' => 0,
          'mo' => 0,
          'mp' => 0,
          'mq' => 0,
          'mr' => 0,
          'ms' => 0,
          'mt' => 0,
          'mu' => 0,
          'mv' => 0,
          'mw' => 0,
          'mx' => 0,
          'my' => 0,
          'mz' => 0,
          'na' => 0,
          'nc' => 0,
          'ne' => 0,
          'nf' => 0,
          'ng' => 0,
          'ni' => 0,
          'nl' => 0,
          'no' => 0,
          'np' => 0,
          'nr' => 0,
          'nu' => 0,
          'nz' => 0,
          'om' => 0,
          'pa' => 0,
          'pe' => 0,
          'pf' => 0,
          'pg' => 0,
          'ph' => 0,
          'pk' => 0,
          'pl' => 0,
          'pm' => 0,
          'pr' => 0,
          'ps' => 0,
          'pt' => 0,
          'pw' => 0,
          'py' => 0,
          'qa' => 0,
          'ro' => 0,
          'rs' => 0,
          'ru' => 0,
          'rw' => 0,
          'sa' => 0,
          'sb' => 0,
          'sc' => 0,
          'sd' => 0,
          'se' => 0,
          'sg' => 0,
          'sh' => 0,
          'si' => 0,
          'sk' => 0,
          'sl' => 0,
          'sm' => 0,
          'sn' => 0,
          'so' => 0,
          'sr' => 0,
          'ss' => 0,
          'st' => 0,
          'sv' => 0,
          'sy' => 0,
          'sz' => 0,
          'tc' => 0,
          'td' => 0,
          'tg' => 0,
          'th' => 0,
          'tj' => 0,
          'tk' => 0,
          'tm' => 0,
          'tn' => 0,
          'to' => 0,
          'tp' => 0,
          'tr' => 0,
          'tt' => 0,
          'tv' => 0,
          'tw' => 0,
          'tz' => 0,
          'ua' => 0,
          'ug' => 0,
          'us' => 0,
          'uy' => 0,
          'uz' => 0,
          'va' => 0,
          'vc' => 0,
          've' => 0,
          'vg' => 0,
          'vi' => 0,
          'vn' => 0,
          'vu' => 0,
          'wf' => 0,
          'ws' => 0,
          'ye' => 0,
          'yt' => 0,
          'za' => 0,
          'zm' => 0,
          'zw' => 0,
        ),
        'hide_single_cc' => 0,
      ),
      'default_country' => 'dk',
      'enable_country_level_validation' => 1,
      'enable_default_country' => 1,
      'enable_extension' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'cck_phone',
      'settings' => array(
        'size' => 15,
      ),
      'type' => 'phone_number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_phone_hours'
  $field_instances['paragraphs_item-contact-field_con_phone_hours'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => FALSE,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'date_first_day' => 1,
          'daysformat' => 'long',
          'grouped' => FALSE,
          'hoursformat' => 0,
          'separator_day_hours' => ': ',
          'separator_days' => '<br />',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => 'all',
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 8,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_phone_hours',
    'label' => 'Telefontider',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'office_hours',
      'settings' => array(),
      'type' => 'office_hours',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'paragraphs_item-contact-field_con_title'
  $field_instances['paragraphs_item-contact-field_con_title'] = array(
    'bundle' => 'contact',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_con_title',
    'label' => 'Funktion/Titel',
    'required' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-gis_map-field_main_gis_map'
  $field_instances['paragraphs_item-gis_map-field_main_gis_map'] = array(
    'bundle' => 'gis_map',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_main_gis_map',
    'label' => 'GIS Kort',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-image_gallery-field_main_image_gallery'
  $field_instances['paragraphs_item-image_gallery-field_main_image_gallery'] = array(
    'bundle' => 'image_gallery',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'image_link_style' => 'galleri_stor',
          'image_style' => 'galleri_lille',
        ),
        'type' => 'fancybox_image',
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
    'field_name' => 'field_main_image_gallery',
    'label' => 'Billeder',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'gallery',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_clone--media_browser_1' => 0,
          'media_browser_clone--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_browser_plus_customized--media_browser_my_files' => 0,
          'media_browser_plus_customized--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-navigation_list-field_sec_nav_elment'
  $field_instances['paragraphs_item-navigation_list-field_sec_nav_elment'] = array(
    'bundle' => 'navigation_list',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 0,
          'edit' => '',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
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
    'field_name' => 'field_sec_nav_elment',
    'label' => 'Navigationselement',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-pdf_list-field_sec_pdf_file'
  $field_instances['paragraphs_item-pdf_list-field_sec_pdf_file'] = array(
    'bundle' => 'pdf_list',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_sec_pdf_file',
    'label' => 'PDF',
    'required' => 1,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'pdf_list',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'document' => 'document',
          'image' => 0,
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_clone--media_browser_1' => 0,
          'media_browser_clone--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_browser_plus_customized--media_browser_my_files' => 0,
          'media_browser_plus_customized--media_browser_thumbnails' => 'media_browser_plus_customized--media_browser_thumbnails',
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(),
        'manualcrop_styles_list' => array(),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-selfservice-field_main_selfservice'
  $field_instances['paragraphs_item-selfservice-field_main_selfservice'] = array(
    'bundle' => 'selfservice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_main_selfservice',
    'label' => 'Selvbetjeningløsninger',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text-field_main_factbox'
  $field_instances['paragraphs_item-text-field_main_factbox'] = array(
    'bundle' => 'text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_main_factbox',
    'label' => 'Tekst',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 2,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text-field_sec_txt_body'
  $field_instances['paragraphs_item-text-field_sec_txt_body'] = array(
    'bundle' => 'text',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sec_txt_body',
    'label' => 'Tekst',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_image-field_sec_txt_img_body'
  $field_instances['paragraphs_item-text_image-field_sec_txt_img_body'] = array(
    'bundle' => 'text_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_sec_txt_img_body',
    'label' => 'Tekst',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_image-field_sec_txt_img_image'
  $field_instances['paragraphs_item-text_image-field_sec_txt_img_image'] = array(
    'bundle' => 'text_image',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'fancybox',
        'settings' => array(
          'image_link_style' => 'galleri_stor',
          'image_style' => 'section_text',
        ),
        'type' => 'fancybox_image',
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
    'field_name' => 'field_sec_txt_img_image',
    'label' => 'Billede',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'paragraphs',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
        ),
        'allowed_types' => array(
          'application' => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_browser_clone--media_browser_1' => 0,
          'media_browser_clone--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_my_files' => 0,
          'media_browser_plus--media_browser_thumbnails' => 0,
          'media_browser_plus_customized--media_browser_my_files' => 0,
          'media_browser_plus_customized--media_browser_thumbnails' => 0,
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => 0,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_keyboard' => 1,
        'manualcrop_maximize_default_crop_area' => 0,
        'manualcrop_require_cropping' => array(
          'section_navigation' => 'section_navigation',
        ),
        'manualcrop_styles_list' => array(
          'section_navigation' => 'section_navigation',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
      ),
      'type' => 'media_generic',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_video-field_sec_txt_vid_body'
  $field_instances['paragraphs_item-text_video-field_sec_txt_vid_body'] = array(
    'bundle' => 'text_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_sec_txt_vid_body',
    'label' => 'Tekst',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'enable' => 0,
        'insert_plugin' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'paragraphs_item-text_video-field_sec_txt_vid_url'
  $field_instances['paragraphs_item-text_video-field_sec_txt_vid_url'] = array(
    'bundle' => 'text_video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'image_style' => 'video_thumbnail',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field_thumbnail_colorbox',
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
    'field_name' => 'field_sec_txt_vid_url',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'allowed_providers' => array(
        'vimeo' => 'vimeo',
        'youtube' => 'youtube',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-video-field_sec_vid_url'
  $field_instances['paragraphs_item-video-field_sec_vid_url'] = array(
    'bundle' => 'video',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'video_embed_field',
        'settings' => array(
          'description' => 1,
          'description_position' => 'bottom',
          'video_style' => 'normal',
        ),
        'type' => 'video_embed_field',
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
    'field_name' => 'field_sec_vid_url',
    'label' => 'Video',
    'required' => 1,
    'settings' => array(
      'allowed_providers' => array(
        0 => 'youtube',
        1 => 'vimeo',
      ),
      'description_field' => 0,
      'description_length' => 128,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'video_embed_field',
      'settings' => array(),
      'type' => 'video_embed_field_video',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion');
  t('Adresse');
  t('Appetitvækker');
  t('Billede');
  t('Billeder');
  t('Center');
  t('Eksterne links');
  t('Email');
  t('Faktaboks');
  t('Funktion/Titel');
  t('GIS Kort');
  t('Interne links');
  t('Kontakt');
  t('Link');
  t('Navigationselement');
  t('Navn');
  t('PDF');
  t('Resumé');
  t('Sektion');
  t('Sektioner');
  t('Selvbetjeningløsninger');
  t('Tags');
  t('Tekst');
  t('Telefonnummer');
  t('Telefontider');
  t('Tilknyt dette indhold til en sektion.');
  t('Titel');
  t('Video');
  t('Vælg et eller flere tags som beskriver dette indhold.');
  t('Website');
  t('Åbningstider');

  return $field_instances;
}
