<?php
/**
 * @file
 * rebild_self_service.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rebild_self_service_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-self_service-field_main_body'
  $field_instances['node-self_service-field_main_body'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indtast en brødtekst for selvbetjeningsløsningen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_main_body',
    'label' => 'Brødtekst',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 25,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-self_service-field_main_outdated'
  $field_instances['node-self_service-field_main_outdated'] = array(
    'bundle' => 'self_service',
    'deleted' => 0,
    'description' => 'Angiv en dato for hvornår dette indhold skal opdateres eller gennemses igen.',
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
    'field_name' => 'field_main_outdated',
    'label' => 'Forældelsesdato',
    'required' => 0,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '+6 months',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-0:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-self_service-field_main_section'
  $field_instances['node-self_service-field_main_section'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg hvilken sektion indholdet hører til.',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-self_service-field_main_tags'
  $field_instances['node-self_service-field_main_tags'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg et eller flere tags der er med til at beskrive indholdet.',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-self_service-field_self_service_category'
  $field_instances['node-self_service-field_self_service_category'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg en kategori til selvbetjeningsløsningen.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_self_service_category',
    'label' => 'Kategori',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-self_service-field_self_service_link'
  $field_instances['node-self_service-field_self_service_link'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indtast et link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
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
    'field_name' => 'field_self_service_link',
    'label' => 'Link',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-self_service-field_self_service_pdf'
  $field_instances['node-self_service-field_self_service_pdf'] = array(
    'bundle' => 'self_service',
    'deleted' => 0,
    'description' => 'Upload en PDF.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
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
    'field_name' => 'field_self_service_pdf',
    'label' => 'PDF',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'pdf',
      'max_filesize' => '5 MB',
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
          0 => 0,
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 'media_default--media_browser_1',
          'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
          'upload' => 'upload',
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 0,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'blok' => 0,
          'indhold_top' => 0,
          'inline_bottom' => 0,
          'inline_top' => 0,
          'nyhed_forside' => 0,
        ),
        'manualcrop_styles_list' => array(
          'blok' => 0,
          'indhold_top' => 0,
          'inline_bottom' => 0,
          'inline_top' => 0,
          'nyhed_forside' => 0,
        ),
        'manualcrop_styles_mode' => 'exclude',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-self_service-field_self_service_type'
  $field_instances['node-self_service-field_self_service_type'] = array(
    'bundle' => 'self_service',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg en type af selvbetjeningsløsning.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_self_service_type',
    'label' => 'Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Angiv en dato for hvornår dette indhold skal opdateres eller gennemses igen.');
  t('Brødtekst');
  t('Forældelsesdato');
  t('Indtast en brødtekst for selvbetjeningsløsningen.');
  t('Indtast et link.');
  t('Kategori');
  t('Link');
  t('PDF');
  t('Sektion');
  t('Tags');
  t('Type');
  t('Upload en PDF.');
  t('Vælg en kategori til selvbetjeningsløsningen.');
  t('Vælg en type af selvbetjeningsløsning.');
  t('Vælg et eller flere tags der er med til at beskrive indholdet.');
  t('Vælg hvilken sektion indholdet hører til.');

  return $field_instances;
}
