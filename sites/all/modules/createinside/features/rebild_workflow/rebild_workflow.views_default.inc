<?php
/**
 * @file
 * rebild_workflow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_workflow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'outdated_content';
  $view->description = 'En oversigt over forældet indhold, som bruges af rules til at underrette fagredaktører om at opdatere deres indhold.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Forældet indhold';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Forældelsesdato */
  $handler->display->display_options['fields']['field_main_outdated']['id'] = 'field_main_outdated';
  $handler->display->display_options['fields']['field_main_outdated']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['fields']['field_main_outdated']['field'] = 'field_main_outdated';
  $handler->display->display_options['fields']['field_main_outdated']['label'] = '';
  $handler->display->display_options['fields']['field_main_outdated']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_outdated']['settings'] = array(
    'format_type' => 'long',
    'fromto' => '',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_rebild_outdated_send_email' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::workbench_moderation_set_state_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Sort criterion: Content: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['sorts']['field_main_outdated_value']['id'] = 'field_main_outdated_value';
  $handler->display->display_options['sorts']['field_main_outdated_value']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['sorts']['field_main_outdated_value']['field'] = 'field_main_outdated_value';
  /* Filter criterion: Content: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['filters']['field_main_outdated_value']['id'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['filters']['field_main_outdated_value']['field'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['filters']['field_main_outdated_value_1']['id'] = 'field_main_outdated_value_1';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['field'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['operator'] = '<=';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['default_date'] = 'now';
  $translatables['outdated_content'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Gendan'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['outdated_content'] = $view;

  return $export;
}
