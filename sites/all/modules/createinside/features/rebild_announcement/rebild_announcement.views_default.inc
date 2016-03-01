<?php
/**
 * @file
 * rebild_announcement.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_announcement_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'expired_announcements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Expired announcements';
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
  /* Felt: Masse-handlinger: Indhold */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_announcement_date']['id'] = 'field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['field'] = 'field_announcement_date';
  $handler->display->display_options['fields']['field_announcement_date']['label'] = '';
  $handler->display->display_options['fields']['field_announcement_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_announcement_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Sorteringskriterie: Indhold: Dato (field_announcement_date) */
  $handler->display->display_options['sorts']['field_announcement_date_value']['id'] = 'field_announcement_date_value';
  $handler->display->display_options['sorts']['field_announcement_date_value']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['sorts']['field_announcement_date_value']['field'] = 'field_announcement_date_value';
  $handler->display->display_options['sorts']['field_announcement_date_value']['order'] = 'DESC';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'announcement' => 'announcement',
  );
  /* Filterkriterie: Indhold: Dato (field_announcement_date) */
  $handler->display->display_options['filters']['field_announcement_date_value_1']['id'] = 'field_announcement_date_value_1';
  $handler->display->display_options['filters']['field_announcement_date_value_1']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['filters']['field_announcement_date_value_1']['field'] = 'field_announcement_date_value';
  $handler->display->display_options['filters']['field_announcement_date_value_1']['operator'] = '<';
  $handler->display->display_options['filters']['field_announcement_date_value_1']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_announcement_date_value_1']['default_date'] = 'now -60 weeks';
  $translatables['expired_announcements'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Indhold'),
    t('- Vælg en handling -'),
  );
  $export['expired_announcements'] = $view;

  $view = new view();
  $view->name = 'messages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Messages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Din kommune informerer';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'dato';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Der er ingen meddelelser i denne uge.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['field_main_body']['id'] = 'field_main_body';
  $handler->display->display_options['fields']['field_main_body']['table'] = 'field_data_field_main_body';
  $handler->display->display_options['fields']['field_main_body']['field'] = 'field_main_body';
  $handler->display->display_options['fields']['field_main_body']['label'] = '';
  $handler->display->display_options['fields']['field_main_body']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Position (field_announcement_weight:value:null sort) */
  $handler->display->display_options['sorts']['field_announcement_weight_value_nullsort']['id'] = 'field_announcement_weight_value_nullsort';
  $handler->display->display_options['sorts']['field_announcement_weight_value_nullsort']['table'] = 'field_data_field_announcement_weight';
  $handler->display->display_options['sorts']['field_announcement_weight_value_nullsort']['field'] = 'field_announcement_weight_value_nullsort';
  /* Sorteringskriterie: Indhold: Position (field_announcement_weight) */
  $handler->display->display_options['sorts']['field_announcement_weight_value']['id'] = 'field_announcement_weight_value';
  $handler->display->display_options['sorts']['field_announcement_weight_value']['table'] = 'field_data_field_announcement_weight';
  $handler->display->display_options['sorts']['field_announcement_weight_value']['field'] = 'field_announcement_weight_value';
  /* Kontekstuelt filter: Indhold: Dato (field_announcement_date) */
  $handler->display->display_options['arguments']['field_announcement_date_value']['id'] = 'field_announcement_date_value';
  $handler->display->display_options['arguments']['field_announcement_date_value']['table'] = 'field_data_field_announcement_date';
  $handler->display->display_options['arguments']['field_announcement_date_value']['field'] = 'field_announcement_date_value';
  $handler->display->display_options['arguments']['field_announcement_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_announcement_date_value']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_announcement_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_announcement_date_value']['default_argument_options']['code'] = '$params = drupal_get_query_parameters();
if(!empty($params) && isset($params["dato"])) { return $params["dato"]; }
else { return date("Y-\\WW"); }';
  $handler->display->display_options['arguments']['field_announcement_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_announcement_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_announcement_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_announcement_date_value']['granularity'] = 'week';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'announcement' => 'announcement',
  );

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['block_description'] = 'Din kommune informerer - Liste';
  $translatables['messages'] = array(
    t('Master'),
    t('Din kommune informerer'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<p>Der er ingen meddelelser i denne uge.</p>'),
    t('Alle'),
    t('Blok'),
    t('Din kommune informerer - Liste'),
  );
  $export['messages'] = $view;

  return $export;
}
