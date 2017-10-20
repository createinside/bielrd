<?php
/**
 * @file
 * rebild_base_fields.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rebild_base_fields_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_accordion_image'.
  $field_bases['field_accordion_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_image',
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

  // Exported field_base: 'field_accordion_overlay'.
  $field_bases['field_accordion_overlay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_overlay',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_accordion_text'.
  $field_bases['field_accordion_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_text',
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

  // Exported field_base: 'field_accordion_title'.
  $field_bases['field_accordion_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_title',
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

  // Exported field_base: 'field_file_image_alt_text'.
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
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

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
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

  // Exported field_base: 'field_main_accordion'.
  $field_bases['field_main_accordion'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_accordion',
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

  // Exported field_base: 'field_main_allow_publishing'.
  $field_bases['field_main_allow_publishing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_allow_publishing',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Nej',
        1 => 'Ja',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_main_body'.
  $field_bases['field_main_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_body',
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

  // Exported field_base: 'field_main_factbox'.
  $field_bases['field_main_factbox'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_factbox',
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

  // Exported field_base: 'field_main_gis_map'.
  $field_bases['field_main_gis_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_gis_map',
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

  // Exported field_base: 'field_main_gis_overlay'.
  $field_bases['field_main_gis_overlay'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_gis_overlay',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_main_image'.
  $field_bases['field_main_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_image',
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

  // Exported field_base: 'field_main_image_gallery'.
  $field_bases['field_main_image_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_image_gallery',
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

  // Exported field_base: 'field_main_outdated'.
  $field_bases['field_main_outdated'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_outdated',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_main_section'.
  $field_bases['field_main_section'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_section',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'rebild_sections',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_main_summary'.
  $field_bases['field_main_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_summary',
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

  // Exported field_base: 'field_main_tags'.
  $field_bases['field_main_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_tags',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'rebild_tags',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_main_view'.
  $field_bases['field_main_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_view',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(
      'view_id' => array(
        0 => 'view_id',
      ),
    ),
    'locked' => 0,
    'module' => 'viewreference',
    'settings' => array(
      'append_id' => 0,
      'arguments' => array(
        'delimiter' => '/',
        'dsv_arguments' => 0,
        'label' => '!field_label arguments',
        'php_arguments' => 0,
        'rows' => 1,
      ),
      'referenceable_tags' => array(
        'allow' => '',
        'deny' => '',
      ),
      'referenceable_views' => array(
        'agenda_accordion:entity_view_1' => 0,
        'agenda_overview:embedded_page' => 0,
        'agenda_overview:page' => 0,
        'archive:block' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:page' => 0,
        'bean_blocks_overview:admin_page' => 0,
        'calendar_frontpage:block' => 0,
        'calendar_frontpage:block_1' => 0,
        'calendar_frontpage:block_2' => 0,
        'calendar_frontpage:block_3' => 0,
        'calendar_frontpage:block_4' => 0,
        'calendar_overview:page' => 'calendar_overview:page',
        'calendar_overview:page_1' => 0,
        'calendar_sidebar:block' => 0,
        'calendar_xml:page' => 0,
        'comments_recent:block' => 0,
        'comments_recent:page' => 0,
        'contact_content_sidebar:block' => 0,
        'content_accordion_revisions_:entity_view_1' => 0,
        'content_sidebar_most_read:block' => 0,
        'content_sidebar_read_also:block' => 0,
        'content_sidebar_relevant_content:block' => 0,
        'content_sidebar_relevant_content:block_1' => 0,
        'content_sidebar_relevant_content_cloned_pages:block' => 0,
        'entity_reference_cloned_pages:entityreference_1' => 0,
        'entity_reference_main_links_internal:entityreference_1' => 0,
        'entityform_type_list:page' => 0,
        'entityforms:autofields_table' => 0,
        'entityforms:entityforms_admin_page' => 0,
        'feeds_log:page_1' => 0,
        'feeds_log:page_2' => 0,
        'feeds_log:page_3' => 0,
        'files_admin:page' => 0,
        'fix_udgivelse:page' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'frontpage_blocks:block' => 0,
        'glossary:attachment' => 0,
        'glossary:page' => 0,
        'media_browser_clone:media_browser_1' => 0,
        'media_browser_clone:media_browser_my_files' => 0,
        'media_browser_plus:media_browser_my_files' => 0,
        'media_browser_plus:media_browser_plus' => 0,
        'media_browser_plus:media_browser_thumbnails' => 0,
        'media_browser_plus_customized:media_browser_my_files' => 0,
        'media_browser_plus_customized:media_browser_plus' => 0,
        'media_browser_plus_customized:media_browser_thumbnails' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'messages:block_1' => 'messages:block_1',
        'news_articles:block' => 0,
        'news_articles:block_1' => 0,
        'news_articles:block_2' => 0,
        'news_articles:block_3' => 0,
        'news_articles:block_4' => 0,
        'news_articles:business' => 'news_articles:business',
        'news_articles:page_1' => 'news_articles:page_1',
        'nodequeue_1:block' => 0,
        'nodequeue_1:page' => 0,
        'nodequeue_2:block' => 0,
        'nodequeue_2:page' => 0,
        'nodequeue_3:block' => 0,
        'nodequeue_3:page' => 0,
        'nodequeue_4:block' => 0,
        'nodequeue_4:page' => 0,
        'nodequeue_5:block' => 0,
        'nodequeue_5:page' => 0,
        'nodequeue_6:block' => 0,
        'nodequeue_6:page' => 0,
        'nodes_not_assigned_to_menu:page' => 0,
        'offerings:block_1' => 'offerings:block_1',
        'popular:block' => 0,
        'popular:block_1' => 0,
        'popular:page' => 0,
        'popular:page_1' => 0,
        'rebild_frontpage:page' => 0,
        'rebild_frontpage:page_1' => 0,
        'rebild_frontpage:page_2' => 0,
        'rebild_frontpage:page_3' => 0,
        'rebild_frontpage:page_4' => 0,
        'rebild_frontpage:page_5' => 0,
        'rebild_job_list:block_1' => 'rebild_job_list:block_1',
        'rebildporten_content_list:block_1' => 0,
        'rebildporten_content_list:page' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'section_pdf_list:entity_view_1' => 0,
        'selfservice_blocks:block_1' => 0,
        'selfservice_blocks:block_2' => 0,
        'selfservice_frontpage:block' => 0,
        'selfservice_frontpage:block_1' => 0,
        'selfservice_frontpage:block_2' => 0,
        'selfservice_items:alfabetisk' => 'selfservice_items:alfabetisk',
        'selfservice_items:embedded' => 0,
        'selfservice_items:emner' => 'selfservice_items:emner',
        'selfservice_items_paragraphs:entity_view_1' => 0,
        'selfservice_landing:block_1' => 0,
        'selfservice_landing:block_2' => 0,
        'subscription_news:block_2' => 0,
        'subscription_news:nyheder' => 0,
        'subscription_offerings:block_2' => 0,
        'subscription_offerings:nyheder' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'temp:page_1' => 0,
        'test:page_1' => 0,
        'tracker:page' => 0,
        'user_entityforms:entityforms_admin_page' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
        'workbench_rebild_content_without_moderations:block_1' => 0,
        'workbench_rebild_content_without_moderations:page' => 0,
        'workbench_rebild_current_user:block_1' => 0,
        'workbench_rebild_edits_by_user:block_1' => 0,
        'workbench_rebild_edits_by_user:page_1' => 0,
        'workbench_rebild_moderation_require_attention:drafts_page' => 0,
        'workbench_rebild_moderation_require_attention:needs_review_page' => 0,
        'workbench_rebild_moderation_require_attention:test' => 0,
        'workbench_rebild_recent_content:block_1' => 0,
        'workbench_rebild_recent_content:page_1' => 0,
        'workbench_recent_content:block_1' => 0,
        'workbench_recent_content:page_1' => 0,
      ),
      'skip_default' => 1,
      'skip_empty' => 0,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  return $field_bases;
}
