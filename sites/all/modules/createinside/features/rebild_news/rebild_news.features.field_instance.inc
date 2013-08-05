<?php
/**
 * @file
 * rebild_news.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function rebild_news_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news_article-field_main_body'
  $field_instances['node-news_article-field_main_body'] = array(
    'bundle' => 'news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indtast en brødtekst for nyheden.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
        'rows' => 10,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-news_article-field_main_factbox'
  $field_instances['node-news_article-field_main_factbox'] = array(
    'bundle' => 'news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indtast en kort tekst til faktaboksen.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-news_article-field_main_image'
  $field_instances['node-news_article-field_main_image'] = array(
    'bundle' => 'news_article',
    'deleted' => 0,
    'description' => 'Upload et billede, eller vælg fra biblioteket. Du har mulighed for at beskære og indstille billedet til forskellige visninger.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'fallback_image_style' => '',
          'image_link' => '',
          'picture_group' => 'indhold_top',
        ),
        'type' => 'picture',
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
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'news_article',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '10 MB',
      'max_resolution' => '',
      'min_resolution' => '680x190',
      'title_field' => 1,
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
        'manualcrop_crop_info' => 0,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
        'manualcrop_inline_crop' => FALSE,
        'manualcrop_instant_crop' => FALSE,
        'manualcrop_instant_preview' => 1,
        'manualcrop_require_cropping' => array(
          'blok' => 0,
          'indhold_top' => 'indhold_top',
          'nyhed_forside' => 'nyhed_forside',
        ),
        'manualcrop_styles_list' => array(
          'blok' => 0,
          'indhold_top' => 'indhold_top',
          'nyhed_forside' => 'nyhed_forside',
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_article-field_main_image_gallery'
  $field_instances['node-news_article-field_main_image_gallery'] = array(
    'bundle' => 'news_article',
    'deleted' => 0,
    'description' => 'Upload et eller flere billeder, eller vælg fra biblioteket. Du har mulighed for at beskære og indstille billedet til forskellige visninger.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'swipebox',
        'settings' => array(
          'swipebox_caption' => 'auto',
          'swipebox_caption_custom' => '',
          'swipebox_gallery' => 'post',
          'swipebox_gallery_custom' => '',
          'swipebox_image_style_content' => 'node_gallery_thumb',
          'swipebox_image_style_swipebox' => 'node_gallery_full',
        ),
        'type' => 'swipebox',
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
    'field_name' => 'field_main_image_gallery',
    'label' => 'Billedgalleri',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
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
          'nyhed_forside' => 0,
        ),
        'manualcrop_styles_list' => array(
          'blok' => 0,
          'indhold_top' => 0,
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

  // Exported field_instance: 'node-news_article-field_main_inlineimage'
  $field_instances['node-news_article-field_main_inlineimage'] = array(
    'bundle' => 'news_article',
    'deleted' => 0,
    'description' => 'Upload et billede der er indlejret nederst til venstre.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_main_inlineimage',
    'label' => 'Indlejret billede',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
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
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
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
          'inline_bottom' => 'inline_bottom',
          'inline_top' => 'inline_top',
          'nyhed_forside' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-news_article-field_main_outdated'
  $field_instances['node-news_article-field_main_outdated'] = array(
    'bundle' => 'news_article',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-news_article-field_main_section'
  $field_instances['node-news_article-field_main_section'] = array(
    'bundle' => 'news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg hvilken sektion indholdet hører til.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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

  // Exported field_instance: 'node-news_article-field_main_summary'
  $field_instances['node-news_article-field_main_summary'] = array(
    'bundle' => 'news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Indtast et resumé. Resuméet vises øverst før brødteksten.',
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
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news_article-field_main_tags'
  $field_instances['node-news_article-field_main_tags'] = array(
    'bundle' => 'news_article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vælg et eller flere tags der er med til at beskrive indholdet.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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

  // Exported field_instance: 'node-news_article-field_main_topimage'
  $field_instances['node-news_article-field_main_topimage'] = array(
    'bundle' => 'news_article',
    'deleted' => 0,
    'description' => 'Upload et billede der er placeret øverst i teksten.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
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
    'field_name' => 'field_main_topimage',
    'label' => 'Topbillede',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
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
          'audio' => 0,
          'document' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'browser_plugins' => array(
          'media_default--media_browser_1' => 0,
          'media_default--media_browser_my_files' => 0,
          'upload' => 0,
        ),
        'manualcrop_crop_info' => 1,
        'manualcrop_default_crop_area' => 1,
        'manualcrop_enable' => 1,
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
          'inline_bottom' => 'inline_bottom',
          'inline_top' => 'inline_top',
          'nyhed_forside' => 0,
        ),
        'manualcrop_styles_mode' => 'include',
        'manualcrop_thumblist' => 0,
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 13,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Angiv en dato for hvornår dette indhold skal opdateres eller gennemses igen.');
  t('Billede');
  t('Billedgalleri');
  t('Brødtekst');
  t('Faktaboks');
  t('Forældelsesdato');
  t('Indlejret billede');
  t('Indtast en brødtekst for nyheden.');
  t('Indtast en kort tekst til faktaboksen.');
  t('Indtast et resumé. Resuméet vises øverst før brødteksten.');
  t('Resumé');
  t('Sektion');
  t('Tags');
  t('Topbillede');
  t('Upload et billede der er indlejret nederst til venstre.');
  t('Upload et billede der er placeret øverst i teksten.');
  t('Upload et billede, eller vælg fra biblioteket. Du har mulighed for at beskære og indstille billedet til forskellige visninger.');
  t('Upload et eller flere billeder, eller vælg fra biblioteket. Du har mulighed for at beskære og indstille billedet til forskellige visninger.');
  t('Vælg et eller flere tags der er med til at beskrive indholdet.');
  t('Vælg hvilken sektion indholdet hører til.');

  return $field_instances;
}
