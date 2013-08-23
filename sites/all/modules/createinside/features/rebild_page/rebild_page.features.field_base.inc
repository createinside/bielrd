<?php
/**
 * @file
 * rebild_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rebild_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_accordion_text'
  $field_bases['field_accordion_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_accordion_title'
  $field_bases['field_accordion_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_accordion_title',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_file_image_alt_text'
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_file_image_title_text'
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_main_accordion'
  $field_bases['field_main_accordion'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_accordion',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_main_block'
  $field_bases['field_main_block'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_block',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(
      'bid' => array(
        'columns' => array(
          'bid' => 'bid',
        ),
        'table' => 'block',
      ),
    ),
    'indexes' => array(
      'bid' => array(
        0 => 'bid',
      ),
    ),
    'locked' => 0,
    'module' => 'blockreference',
    'settings' => array(
      'referenceable_modules' => array(
        'accordion_menu' => 0,
        'block' => 0,
        'comment' => 0,
        'context_ui' => 0,
        'delta_blocks' => 0,
        'devel' => 0,
        'diff' => 0,
        'locale' => 0,
        'menu' => 0,
        'menu_block' => 0,
        'node' => 0,
        'quicktabs' => 'quicktabs',
        'search' => 0,
        'statistics' => 0,
        'system' => 0,
        'ultimenu' => 0,
        'user' => 0,
        'views' => 0,
        'webform' => 0,
        'workbench' => 0,
      ),
      'referenceable_operator' => 'AND',
      'referenceable_regions' => array(
        '' => 0,
        'bottom' => 0,
        'branding' => 0,
        'content' => 0,
        'content_sidebar' => 0,
        'footer_fifth' => 0,
        'footer_first' => 0,
        'footer_fourth' => 0,
        'footer_second' => 0,
        'footer_third' => 0,
        'header_first' => 0,
        'header_second' => 0,
        'menu' => 0,
        'mobile_menu' => 0,
        'postscript_first' => 0,
        'postscript_second' => 0,
        'sidebar_first' => 0,
        'title' => 0,
        'ultimenu_main_bo_i_rebild' => 0,
        'ultimenu_main_borger' => 0,
        'ultimenu_main_erhverv' => 0,
        'ultimenu_main_politik' => 0,
        'user_first' => 0,
        'user_second' => 0,
      ),
      'referenceable_theme' => 'default',
      'respect_visibility' => 0,
    ),
    'translatable' => 0,
    'type' => 'blockreference',
  );

  // Exported field_base: 'field_main_body'
  $field_bases['field_main_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_body',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_main_factbox'
  $field_bases['field_main_factbox'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_factbox',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_main_gis_map'
  $field_bases['field_main_gis_map'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_gis_map',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_main_image'
  $field_bases['field_main_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_image',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
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

  // Exported field_base: 'field_main_image_gallery'
  $field_bases['field_main_image_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_image_gallery',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
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

  // Exported field_base: 'field_main_links_external'
  $field_bases['field_main_links_external'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_links_external',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
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

  // Exported field_base: 'field_main_links_internal'
  $field_bases['field_main_links_internal'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_links_internal',
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'entity_reference_main_links_internal',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_main_outdated'
  $field_bases['field_main_outdated'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_outdated',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
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

  // Exported field_base: 'field_main_section'
  $field_bases['field_main_section'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_section',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
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

  // Exported field_base: 'field_main_selfservice'
  $field_bases['field_main_selfservice'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_selfservice',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'node' => array(
        'columns' => array(
          'target_id' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'title',
          'type' => 'property',
        ),
        'target_bundles' => array(
          'self_service' => 'self_service',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_main_summary'
  $field_bases['field_main_summary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_summary',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
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

  // Exported field_base: 'field_main_tags'
  $field_bases['field_main_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_tags',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
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

  // Exported field_base: 'field_main_view'
  $field_bases['field_main_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_main_view',
    'field_permissions' => array(
      'type' => 2,
    ),
    'foreign keys' => array(),
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
        'archive:block' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:page' => 0,
        'calendar_frontpage:block' => 0,
        'comments_recent:block' => 0,
        'comments_recent:page' => 0,
        'content_accordion:entity_view_1' => 0,
        'content_sidebar_borger_dk_read_also:block' => 0,
        'content_sidebar_most_read:block' => 0,
        'content_sidebar_read_also:block' => 0,
        'content_sidebar_relevant_content:block' => 0,
        'entity_reference_cloned_pages:entityreference_1' => 0,
        'entity_reference_main_links_internal:entityreference_1' => 0,
        'feeds_log:page_1' => 0,
        'feeds_log:page_2' => 0,
        'feeds_log:page_3' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:page' => 0,
        'media_browser_clone:media_browser_1' => 0,
        'media_browser_clone:media_browser_my_files' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'news_articles:block' => 0,
        'popular:block' => 0,
        'popular:block_1' => 0,
        'popular:page' => 0,
        'popular:page_1' => 0,
        'rebild_frontpage:page' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'selfservice_items:alfabetisk' => 'selfservice_items:alfabetisk',
        'selfservice_items:emner' => 'selfservice_items:emner',
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'tracker:page' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
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
      'skip_empty' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  return $field_bases;
}
