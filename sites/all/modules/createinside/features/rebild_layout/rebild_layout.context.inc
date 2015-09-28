<?php
/**
 * @file
 * rebild_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rebild_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'business_frontpage';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'erhverv' => 'erhverv',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-16' => array(
          'module' => 'menu_block',
          'delta' => '16',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
        'views-news_articles-block_2' => array(
          'module' => 'views',
          'delta' => 'news_articles-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-calendar_frontpage-block_3' => array(
          'module' => 'views',
          'delta' => 'calendar_frontpage-block_3',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'business_frontpage',
    ),
    'theme_html' => array(
      'class' => 'business-theme',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['business_frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'business_subpage';
  $context->description = '';
  $context->tag = 'theme';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:15:{s:4:"node";s:4:"node";s:4:"bean";i:0;s:7:"comment";i:0;s:10:"entityform";i:0;s:15:"entityform_type";i:0;s:21:"field_collection_item";i:0;s:15:"paragraphs_item";i:0;s:8:"redirect";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:15:"wysiwyg_profile";i:0;s:12:"rules_config";i:0;s:9:"menu_link";i:0;}',
        'field_name' => 'field_main_section',
        'field_value' => '3',
        'field_empty' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'erhverv/*' => 'erhverv/*',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'business_primary',
    ),
    'theme_html' => array(
      'class' => 'business-theme',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  $export['business_subpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'business_temporary';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'erhverv' => 'erhverv',
        'erhverv/*' => 'erhverv/*',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'context_redirect' => array(
      'redirect_path' => 'node/4972',
      'enable_message' => 0,
      'redirect_message' => '',
      'qsa' => 0,
      'redirect_type' => '307',
      'admin_key' => '',
    ),
  );
  $context->condition_mode = 1;
  $export['business_temporary'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rebild_subpage';
  $context->description = 'Places the title block in the title region';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'title',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places the title block in the title region');
  t('theme');
  $export['rebild_subpage'] = $context;

  return $export;
}
