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
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Forældelsesdato */
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
  /* Felt: Masse-handlinger: Indhold */
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
  /* Sorteringskriterie: Indhold: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['sorts']['field_main_outdated_value']['id'] = 'field_main_outdated_value';
  $handler->display->display_options['sorts']['field_main_outdated_value']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['sorts']['field_main_outdated_value']['field'] = 'field_main_outdated_value';
  /* Filterkriterie: Indhold: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['filters']['field_main_outdated_value']['id'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['filters']['field_main_outdated_value']['field'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value']['operator'] = 'not empty';
  /* Filterkriterie: Indhold: Forældelsesdato (field_main_outdated) */
  $handler->display->display_options['filters']['field_main_outdated_value_1']['id'] = 'field_main_outdated_value_1';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['table'] = 'field_data_field_main_outdated';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['field'] = 'field_main_outdated_value';
  $handler->display->display_options['filters']['field_main_outdated_value_1']['operator'] = '<=';
  $translatables['outdated_content'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
  );
  $export['outdated_content'] = $view;

  $view = new view();
  $view->name = 'workbench_rebild_current_user';
  $view->description = 'Information about the current user.';
  $view->tag = 'Workbench';
  $view->base_table = 'users';
  $view->human_name = 'Workbench_rebild: Current user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access workbench';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Oprettet d. [created]  </p>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Felt: Bruger: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Oprettet d.';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['field_user_navn']['id'] = 'field_user_navn';
  $handler->display->display_options['fields']['field_user_navn']['table'] = 'field_data_field_user_navn';
  $handler->display->display_options['fields']['field_user_navn']['field'] = 'field_user_navn';
  $handler->display->display_options['fields']['field_user_navn']['label'] = '';
  $handler->display->display_options['fields']['field_user_navn']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_user_navn']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Felt: Bruger: Billede */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['image_style'] = 'profil_visning';
  /* Felt: Bruger: Jobtitel */
  $handler->display->display_options['fields']['field_user_jobtitel']['id'] = 'field_user_jobtitel';
  $handler->display->display_options['fields']['field_user_jobtitel']['table'] = 'field_data_field_user_jobtitel';
  $handler->display->display_options['fields']['field_user_jobtitel']['field'] = 'field_user_jobtitel';
  $handler->display->display_options['fields']['field_user_jobtitel']['label'] = '';
  $handler->display->display_options['fields']['field_user_jobtitel']['element_label_colon'] = FALSE;
  /* Felt: Bruger: Telefonnummer */
  $handler->display->display_options['fields']['field_user_tlf']['id'] = 'field_user_tlf';
  $handler->display->display_options['fields']['field_user_tlf']['table'] = 'field_data_field_user_tlf';
  $handler->display->display_options['fields']['field_user_tlf']['field'] = 'field_user_tlf';
  $handler->display->display_options['fields']['field_user_tlf']['label'] = '';
  $handler->display->display_options['fields']['field_user_tlf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_tlf']['alter']['text'] = '<p>Tlf: [field_user_tlf]</p>';
  $handler->display->display_options['fields']['field_user_tlf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_tlf']['type'] = 'text_plain';
  /* Felt: Bruger: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $translatables['workbench_rebild_current_user'] = array(
    t('Defaults'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<p>Oprettet d. [created]  </p>'),
    t('Oprettet d.'),
    t('<p>Tlf: [field_user_tlf]</p>'),
    t('E-mail'),
    t('Block'),
  );
  $export['workbench_rebild_current_user'] = $view;

  return $export;
}
