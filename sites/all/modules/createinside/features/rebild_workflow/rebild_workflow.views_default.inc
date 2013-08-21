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
  /* Felt: Indhold: Overskrift */
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

  $view = new view();
  $view->name = 'workbench_rebild_edits_by_user';
  $view->description = 'Lists content edited by the user.';
  $view->tag = 'Workbench';
  $view->base_table = 'node_revision';
  $view->human_name = 'Workbench_rebild: Edits by user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Mine sider';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'vis alle';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'status' => 'status',
    'timestamp' => 'timestamp',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = 'Har du redigeret noget for nyligt som ikke optræder på listen? Hvis en indholdstype ikke er versioneret og du ikke har oprettet den, optræder den ikke på denne liste når du redigerer den. Du kan finde den på fanen \'Indhold jeg kan redigere\'.';
  $handler->display->display_options['footer']['area']['format'] = 'plain_text';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Du har ikke redigeret noget indhold.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Forbindelse: Indholdsversion: Bruger */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Forbindelse: Indholdsversion: Indhold */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'vid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indholdsversion: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'vid';
  $handler->display->display_options['fields']['title']['link_to_node'] = TRUE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'vid';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'vid';
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Indholdsversion: Opdateringsdato */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['label'] = 'Senest opdateret';
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'time ago';
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'vid';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filterkriterie: Indholdsversion: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node_revision';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'vid';
  $handler->display->display_options['filters']['status']['value'] = 'All';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'published';
  $handler->display->display_options['filters']['status']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/workbench/content/edited';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'My Edits';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'De fem senest opdaterede stykker indhold.';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['operator'] = 'not empty';
  $translatables['workbench_rebild_edits_by_user'] = array(
    t('Defaults'),
    t('Mine sider'),
    t('vis alle'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Har du redigeret noget for nyligt som ikke optræder på listen? Hvis en indholdstype ikke er versioneret og du ikke har oprettet den, optræder den ikke på denne liste når du redigerer den. Du kan finde den på fanen \'Indhold jeg kan redigere\'.'),
    t('Du har ikke redigeret noget indhold.'),
    t('revision bruger'),
    t('Hent indholdet fra en indholdsversion.'),
    t('Overskrift'),
    t('Type'),
    t('Udgivet'),
    t('Senest opdateret'),
    t('Titel'),
    t('Page'),
    t('mere'),
    t('Block'),
    t('De fem senest opdaterede stykker indhold.'),
  );
  $export['workbench_rebild_edits_by_user'] = $view;

  $view = new view();
  $view->name = 'workbench_rebild_moderation_require_attention';
  $view->description = 'Lists content by moderation state.';
  $view->tag = 'Workbench Moderation';
  $view->base_table = 'node_revision';
  $view->human_name = 'Workbench_rebild Moderation: Require attention';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Kræver opmærksomhed';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'vis alle';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'use workbench_moderation my drafts tab';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'log' => 'log',
    'workbench_moderation_history_link' => 'workbench_moderation_history_link',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workbench_moderation_history_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Oversigt over emner der kræver opmærksomhed.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Du har ikke redigeret noget indhold.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Forbindelse: Workbench Moderation: Indholdselement */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Forbindelse: Indholdsversion: Bruger */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indholdsversion: Logbesked */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['exclude'] = TRUE;
  /* Felt: Workbench Moderation: Moderation history link */
  $handler->display->display_options['fields']['workbench_moderation_history_link']['id'] = 'workbench_moderation_history_link';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['table'] = 'node';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['field'] = 'workbench_moderation_history_link';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['workbench_moderation_history_link']['hide_alter_empty'] = FALSE;
  /* Felt: Moderation state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['ui_name'] = 'Moderation state';
  $handler->display->display_options['fields']['state']['label'] = 'Moderation state';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['state']['alter']['text'] = '<div>[state]</div><div>[workbench_moderation_history_link]</div>';
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Felt: Workbench Moderation: Moderation links */
  $handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['label'] = 'Angiv moderationsstatus';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Redigeret af';
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'nid';
  $handler->display->display_options['fields']['changed']['label'] = 'Senest opdateret';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'all' => 'all',
    'draft' => 'draft',
    'needs_review' => 'needs_review',
    'published' => 'published',
  );
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
  /* Filterkriterie: Workbench Moderation: Aktuelle */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';

  /* Display: Needs review page */
  $handler = $view->new_display('page', 'Needs review page', 'needs_review_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Needs review';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access workbench';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'This list displays content in the "Needs review" state that you can moderate. Currently there is no such content.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Workbench Moderation: Indholdselement */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = TRUE;
  /* Forbindelse: Indholdsversion: Bruger */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Workbench Moderation: Aktuelle */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['filters']['current']['group'] = 1;
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'needs_review' => 'needs_review',
    'published_needs_review' => 'published_needs_review',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Workbench Moderation: State';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'needs_review' => 'needs_review',
    'published_needs_review' => 'published_needs_review',
  );
  $handler->display->display_options['filters']['state_1']['group'] = 1;
  $handler->display->display_options['filters']['state_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state_1']['expose']['operator_id'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['state_1']['expose']['operator'] = 'state_1_op';
  $handler->display->display_options['filters']['state_1']['expose']['identifier'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['state_1']['expose']['reduce'] = TRUE;
  /* Filterkriterie: Bruger: Center (field_user_center) */
  $handler->display->display_options['filters']['field_user_center_tid']['id'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['table'] = 'field_data_field_user_center';
  $handler->display->display_options['filters']['field_user_center_tid']['field'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_center_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_user_center_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['operator_id'] = 'field_user_center_tid_op';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['label'] = 'Centrer';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['operator'] = 'field_user_center_tid_op';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['identifier'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_user_center_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_center_tid']['vocabulary'] = 'centrer';
  /* Filterkriterie: Indhold: Forfatter uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'nid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Forfatter';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'admin/workbench/content/needs-review';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Kræver opmærksomhed';
  $handler->display->display_options['menu']['weight'] = '99';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Drafts page */
  $handler = $view->new_display('page', 'Drafts page', 'drafts_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My drafts';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'This list displays content you have created that is not published. Currently there is no such content.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Bruger: Aktuelle */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['filters']['uid_current']['group'] = 1;
  /* Filterkriterie: Workbench Moderation: Aktuelle */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  $handler->display->display_options['filters']['current']['group'] = 1;
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state_1']['id'] = 'state_1';
  $handler->display->display_options['filters']['state_1']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state_1']['field'] = 'state';
  $handler->display->display_options['filters']['state_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['state_1']['value'] = array(
    'published' => 'published',
  );
  $handler->display->display_options['filters']['state_1']['group'] = 1;
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'nid';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'draft' => 'draft',
    'needs_review' => 'needs_review',
  );
  $handler->display->display_options['filters']['state']['group'] = 1;
  $handler->display->display_options['filters']['state']['exposed'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['operator_id'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['state']['expose']['operator'] = 'state_op';
  $handler->display->display_options['filters']['state']['expose']['identifier'] = 'state';
  $handler->display->display_options['filters']['state']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['state']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'admin/workbench/drafts';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Mine kladder';
  $handler->display->display_options['menu']['weight'] = '98';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: needs attention */
  $handler = $view->new_display('block', 'needs attention', 'test');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'log' => 'log',
    'workbench_moderation_history_link' => 'workbench_moderation_history_link',
    'state' => 'state',
    'moderation_actions' => 'moderation_actions',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'log' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workbench_moderation_history_link' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'state' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'moderation_actions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indholdsversion: Logbesked */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  $handler->display->display_options['fields']['log']['exclude'] = TRUE;
  /* Felt: Workbench Moderation: Moderation history link */
  $handler->display->display_options['fields']['workbench_moderation_history_link']['id'] = 'workbench_moderation_history_link';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['table'] = 'node';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['field'] = 'workbench_moderation_history_link';
  $handler->display->display_options['fields']['workbench_moderation_history_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['workbench_moderation_history_link']['hide_alter_empty'] = FALSE;
  /* Felt: Moderation state */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['ui_name'] = 'Moderation state';
  $handler->display->display_options['fields']['state']['label'] = 'Moderation state';
  $handler->display->display_options['fields']['state']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['state']['alter']['text'] = '<div>[state]</div><div>[workbench_moderation_history_link]</div>';
  $handler->display->display_options['fields']['state']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  /* Felt: Workbench Moderation: Moderation links */
  $handler->display->display_options['fields']['moderation_actions']['id'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['moderation_actions']['field'] = 'moderation_actions';
  $handler->display->display_options['fields']['moderation_actions']['label'] = 'Angiv moderationsstatus';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'nid';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'nid';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Redigeret af';
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'nid';
  $handler->display->display_options['fields']['changed']['label'] = 'Senest opdateret';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['relationship'] = 'nid';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Workbench Moderation: Aktuelle */
  $handler->display->display_options['filters']['current']['id'] = 'current';
  $handler->display->display_options['filters']['current']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['current']['field'] = 'current';
  $handler->display->display_options['filters']['current']['value'] = '1';
  /* Filterkriterie: Workbench Moderation: Status */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['value'] = array(
    'needs_review' => 'needs_review',
    'published_needs_review' => 'published_needs_review',
  );
  $translatables['workbench_rebild_moderation_require_attention'] = array(
    t('Defaults'),
    t('Kræver opmærksomhed'),
    t('vis alle'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Oversigt over emner der kræver opmærksomhed.'),
    t('Du har ikke redigeret noget indhold.'),
    t('Indholdselement'),
    t('revision bruger'),
    t('Nid'),
    t('Logbesked'),
    t('Moderation history link'),
    t('Moderation state'),
    t('<div>[state]</div><div>[workbench_moderation_history_link]</div>'),
    t('Angiv moderationsstatus'),
    t('Overskrift'),
    t('Type'),
    t('Redigeret af'),
    t('Senest opdateret'),
    t('Titel'),
    t('Status'),
    t('Needs review page'),
    t('Needs review'),
    t('mere'),
    t('This list displays content in the "Needs review" state that you can moderate. Currently there is no such content.'),
    t('Workbench Moderation: State'),
    t('Centrer'),
    t('Forfatter'),
    t('Drafts page'),
    t('My drafts'),
    t('This list displays content you have created that is not published. Currently there is no such content.'),
    t('needs attention'),
  );
  $export['workbench_rebild_moderation_require_attention'] = $view;

  $view = new view();
  $view->name = 'workbench_rebild_recent_content';
  $view->description = 'Content overview page for Workbench.';
  $view->tag = 'Workbench';
  $view->base_table = 'node';
  $view->human_name = 'Workbench_rebild: Recent content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Seneste indhold';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'vis alle';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 25, 50, 100, 200';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'type' => 'type',
    'status' => 'status',
    'name' => 'name',
    'changed' => 'changed',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'Oversigt over alt det nyeste indhold.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['content'] = 'Der er ikke noget indhold, som du kan redigere.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  /* Forbindelse: Indhold: Forfatter */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Forfatter';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Senest opdateret';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'redigér';
  /* Sorteringskriterie: Indhold: Opdateringsdato */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titel';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Udgivet';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'published';
  /* Filterkriterie: Bruger: Center (field_user_center) */
  $handler->display->display_options['filters']['field_user_center_tid']['id'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['table'] = 'field_data_field_user_center';
  $handler->display->display_options['filters']['field_user_center_tid']['field'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_user_center_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['operator_id'] = 'field_user_center_tid_op';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['label'] = 'Centrer';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['operator'] = 'field_user_center_tid_op';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['identifier'] = 'field_user_center_tid';
  $handler->display->display_options['filters']['field_user_center_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_user_center_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_user_center_tid']['vocabulary'] = 'centrer';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Udgivet */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Felt: Bruger: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Forfatter';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Opdateringsdato */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Senest opdateret';
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'time ago';
  /* Felt: Indhold: Redigér-link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Handlinger';
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'redigér';
  $handler->display->display_options['path'] = 'admin/workbench/content/all';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'All Recent Content';
  $handler->display->display_options['menu']['weight'] = '2';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $translatables['workbench_rebild_recent_content'] = array(
    t('Defaults'),
    t('Seneste indhold'),
    t('vis alle'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Oversigt over alt det nyeste indhold.'),
    t('Der er ikke noget indhold, som du kan redigere.'),
    t('forfatter'),
    t('Overskrift'),
    t('Type'),
    t('Forfatter'),
    t('Senest opdateret'),
    t('Handlinger'),
    t('redigér'),
    t('Titel'),
    t('Udgivet'),
    t('Centrer'),
    t('Page'),
    t('mere'),
    t('Block'),
  );
  $export['workbench_rebild_recent_content'] = $view;

  return $export;
}
