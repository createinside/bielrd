<?php
/**
 * @file
 * rebild_mail_subscription.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function rebild_mail_subscription_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_sub_confirmed'
  $field_bases['field_sub_confirmed'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sub_confirmed',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Unconfirmed',
        1 => 'Confirmed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_sub_email'
  $field_bases['field_sub_email'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sub_email',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'email',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'email',
  );

  // Exported field_base: 'field_sub_name'
  $field_bases['field_sub_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sub_name',
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
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_sub_type'
  $field_bases['field_sub_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sub_type',
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
          'vocabulary' => 'subscription_types',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_subscription_attach_view'
  $field_bases['field_subscription_attach_view'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subscription_attach_view',
    'field_permissions' => array(
      'type' => 0,
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
        'agenda_accordion:default' => 0,
        'agenda_accordion:entity_view_1' => 0,
        'agenda_overview:default' => 0,
        'agenda_overview:page' => 0,
        'archive:block' => 0,
        'archive:default' => 0,
        'archive:page' => 0,
        'backlinks:block' => 0,
        'backlinks:default' => 0,
        'backlinks:page' => 0,
        'calendar_frontpage:block' => 0,
        'calendar_frontpage:block_1' => 0,
        'calendar_frontpage:block_2' => 0,
        'calendar_frontpage:block_3' => 0,
        'calendar_frontpage:block_4' => 0,
        'calendar_frontpage:default' => 0,
        'calendar_overview:default' => 0,
        'calendar_overview:page' => 0,
        'calendar_sidebar:block' => 0,
        'calendar_sidebar:default' => 0,
        'comments_recent:block' => 0,
        'comments_recent:default' => 0,
        'comments_recent:page' => 0,
        'content_accordion_revisions_:default' => 0,
        'content_accordion_revisions_:entity_view_1' => 0,
        'content_sidebar_borger_dk_read_also:block' => 0,
        'content_sidebar_borger_dk_read_also:default' => 0,
        'content_sidebar_most_read:block' => 0,
        'content_sidebar_most_read:default' => 0,
        'content_sidebar_read_also:block' => 0,
        'content_sidebar_read_also:default' => 0,
        'content_sidebar_relevant_content:block' => 0,
        'content_sidebar_relevant_content:default' => 0,
        'content_sidebar_relevant_content_cloned_pages:block' => 0,
        'content_sidebar_relevant_content_cloned_pages:default' => 0,
        'entity_reference_cloned_pages:default' => 0,
        'entity_reference_cloned_pages:entityreference_1' => 0,
        'entity_reference_main_links_internal:default' => 0,
        'entity_reference_main_links_internal:entityreference_1' => 0,
        'entityform_type_list:default' => 0,
        'entityform_type_list:page' => 0,
        'entityforms:autofields_table' => 0,
        'entityforms:default' => 0,
        'entityforms:entityforms_admin_page' => 0,
        'feeds_log:default' => 0,
        'feeds_log:page_1' => 0,
        'feeds_log:page_2' => 0,
        'feeds_log:page_3' => 0,
        'frontpage:default' => 0,
        'frontpage:feed' => 0,
        'frontpage:page' => 0,
        'glossary:attachment' => 0,
        'glossary:default' => 0,
        'glossary:page' => 0,
        'media_browser_clone:default' => 0,
        'media_browser_clone:media_browser_1' => 0,
        'media_browser_clone:media_browser_my_files' => 0,
        'media_default:default' => 0,
        'media_default:media_browser_1' => 0,
        'media_default:media_browser_my_files' => 0,
        'news_articles:block' => 0,
        'news_articles:block_1' => 0,
        'news_articles:block_2' => 0,
        'news_articles:block_3' => 0,
        'news_articles:block_4' => 0,
        'news_articles:default' => 0,
        'news_articles:page_1' => 0,
        'newsletter_news:default' => 0,
        'newsletter_news:nyheder' => 0,
        'newsletter_news:udbud' => 0,
        'nodequeue_1:block' => 0,
        'nodequeue_1:default' => 0,
        'nodequeue_1:page' => 0,
        'nodequeue_2:block' => 0,
        'nodequeue_2:default' => 0,
        'nodequeue_2:page' => 0,
        'nodequeue_3:block' => 0,
        'nodequeue_3:default' => 0,
        'nodequeue_3:page' => 0,
        'nodequeue_4:block' => 0,
        'nodequeue_4:default' => 0,
        'nodequeue_4:page' => 0,
        'nodequeue_5:block' => 0,
        'nodequeue_5:default' => 0,
        'nodequeue_5:page' => 0,
        'nodes_not_assigned_to_menu:default' => 0,
        'nodes_not_assigned_to_menu:page' => 0,
        'offerings:block_1' => 0,
        'offerings:default' => 0,
        'outdated_content:default' => 0,
        'popular:block' => 0,
        'popular:block_1' => 0,
        'popular:default' => 0,
        'popular:page' => 0,
        'popular:page_1' => 0,
        'rebild_frontpage:default' => 0,
        'rebild_frontpage:page' => 0,
        'rebild_frontpage:page_1' => 0,
        'rebild_frontpage:page_2' => 0,
        'rebild_frontpage:page_3' => 0,
        'rebild_frontpage:page_4' => 0,
        'redirects:default' => 0,
        'redirects:page_admin' => 0,
        'redirects:page_user' => 0,
        'rules_scheduler:default' => 0,
        'selfservice_blocks:block_1' => 0,
        'selfservice_blocks:block_2' => 0,
        'selfservice_blocks:default' => 0,
        'selfservice_frontpage:block' => 0,
        'selfservice_frontpage:block_1' => 0,
        'selfservice_frontpage:block_2' => 0,
        'selfservice_frontpage:default' => 0,
        'selfservice_items:alfabetisk' => 0,
        'selfservice_items:default' => 0,
        'selfservice_items:embedded' => 0,
        'selfservice_items:emner' => 0,
        'selfservice_landing:block_1' => 0,
        'selfservice_landing:block_2' => 0,
        'selfservice_landing:default' => 0,
        'subscription_news:block_2' => 0,
        'subscription_news:default' => 0,
        'subscription_news:nyheder' => 'subscription_news:nyheder',
        'subscription_offerings:block_2' => 0,
        'subscription_offerings:default' => 0,
        'subscription_offerings:nyheder' => 'subscription_offerings:nyheder',
        'taxonomy_term:default' => 0,
        'taxonomy_term:feed' => 0,
        'taxonomy_term:page' => 0,
        'tracker:default' => 0,
        'tracker:page' => 0,
        'user_entityforms:default' => 0,
        'user_entityforms:entityforms_admin_page' => 0,
        'workbench_current_user:block_1' => 0,
        'workbench_current_user:default' => 0,
        'workbench_edited:block_1' => 0,
        'workbench_edited:default' => 0,
        'workbench_edited:page_1' => 0,
        'workbench_moderation:default' => 0,
        'workbench_moderation:drafts_page' => 0,
        'workbench_moderation:needs_review_page' => 0,
        'workbench_rebild_current_user:block_1' => 0,
        'workbench_rebild_current_user:default' => 0,
        'workbench_rebild_edits_by_user:block_1' => 0,
        'workbench_rebild_edits_by_user:default' => 0,
        'workbench_rebild_edits_by_user:page_1' => 0,
        'workbench_rebild_moderation_require_attention:default' => 0,
        'workbench_rebild_moderation_require_attention:drafts_page' => 0,
        'workbench_rebild_moderation_require_attention:needs_review_page' => 0,
        'workbench_rebild_moderation_require_attention:test' => 0,
        'workbench_rebild_recent_content:block_1' => 0,
        'workbench_rebild_recent_content:default' => 0,
        'workbench_rebild_recent_content:page_1' => 0,
        'workbench_recent_content:block_1' => 0,
        'workbench_recent_content:default' => 0,
        'workbench_recent_content:page_1' => 0,
      ),
      'skip_default' => 0,
      'skip_empty' => 1,
    ),
    'translatable' => 0,
    'type' => 'viewreference',
  );

  // Exported field_base: 'field_subscription_list'
  $field_bases['field_subscription_list'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_subscription_list',
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
          'vocabulary' => 'subscription_types',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
