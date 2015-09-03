<?php
/**
 * @file
 * rebild_calendar.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_calendar_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'calendar_frontpage';
  $view->description = 'Frontpage block, and sektion blocks';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar - block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Det sker i kommunen:';
  $handler->display->display_options['css_class'] = 'calendar_block';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rebild_calendar post[counter] sektion-[field_main_section]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Sidefod: Global: Ufiltreret tekst */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Se alle arrangementer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<span class="calendar_view_all"><a href="/arrangementer">Se alle arrangementer</a></span>';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Dato i måneden */
  $handler->display->display_options['fields']['field_calendar_date']['id'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['ui_name'] = 'Dato i måneden';
  $handler->display->display_options['fields']['field_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Dag i måneden */
  $handler->display->display_options['fields']['field_calendar_date_1']['id'] = 'field_calendar_date_1';
  $handler->display->display_options['fields']['field_calendar_date_1']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['ui_name'] = 'Dag i måneden';
  $handler->display->display_options['fields']['field_calendar_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Måned */
  $handler->display->display_options['fields']['field_calendar_date_2']['id'] = 'field_calendar_date_2';
  $handler->display->display_options['fields']['field_calendar_date_2']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['ui_name'] = 'Måned';
  $handler->display->display_options['fields']['field_calendar_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_2']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Sektion */
  $handler->display->display_options['fields']['field_main_section']['id'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['fields']['field_main_section']['field'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['label'] = '';
  $handler->display->display_options['fields']['field_main_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_section']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Samlet udtræk */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Samlet udtræk';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_section">[field_main_section]</div>
<div class="calendar_title">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['sorts']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['sorts']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['sorts']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';

  /* Display: Bo i rebild */
  $handler = $view->new_display('block', 'Bo i rebild', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';

  /* Display: Borger */
  $handler = $view->new_display('block', 'Borger', 'block_2');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';

  /* Display: Erhverv */
  $handler = $view->new_display('block', 'Erhverv', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Kalender';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '60';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Dato i måneden */
  $handler->display->display_options['fields']['field_calendar_date']['id'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['ui_name'] = 'Dato i måneden';
  $handler->display->display_options['fields']['field_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Dag i måneden */
  $handler->display->display_options['fields']['field_calendar_date_1']['id'] = 'field_calendar_date_1';
  $handler->display->display_options['fields']['field_calendar_date_1']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['ui_name'] = 'Dag i måneden';
  $handler->display->display_options['fields']['field_calendar_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Måned */
  $handler->display->display_options['fields']['field_calendar_date_2']['id'] = 'field_calendar_date_2';
  $handler->display->display_options['fields']['field_calendar_date_2']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['ui_name'] = 'Måned';
  $handler->display->display_options['fields']['field_calendar_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_2']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Sektion */
  $handler->display->display_options['fields']['field_main_section']['id'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['fields']['field_main_section']['field'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['label'] = '';
  $handler->display->display_options['fields']['field_main_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_section']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Samlet udtræk */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Samlet udtræk';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_title">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['block_description'] = 'Calendar - Business';

  /* Display: Politik */
  $handler = $view->new_display('block', 'Politik', 'block_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $translatables['calendar_frontpage'] = array(
    t('Master'),
    t('Det sker i kommunen:'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Se alle arrangementer'),
    t('<span class="calendar_view_all"><a href="/arrangementer">Se alle arrangementer</a></span>'),
    t('<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_section">[field_main_section]</div>
<div class="calendar_title">[title]</div>
</div>'),
    t('Block'),
    t('Bo i rebild'),
    t('Borger'),
    t('Erhverv'),
    t('Kalender'),
    t('<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_title">[title]</div>
</div>'),
    t('Calendar - Business'),
    t('Politik'),
  );
  $export['calendar_frontpage'] = $view;

  $view = new view();
  $view->name = 'calendar_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar - overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Alle arrangementer';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Month */
  $handler->display->display_options['fields']['field_calendar_date_1']['id'] = 'field_calendar_date_1';
  $handler->display->display_options['fields']['field_calendar_date_1']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['ui_name'] = 'Month';
  $handler->display->display_options['fields']['field_calendar_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_1']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Year */
  $handler->display->display_options['fields']['field_calendar_date_2']['id'] = 'field_calendar_date_2';
  $handler->display->display_options['fields']['field_calendar_date_2']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['ui_name'] = 'Year';
  $handler->display->display_options['fields']['field_calendar_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_2']['settings'] = array(
    'format_type' => 'year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_calendar_date']['id'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date']['alter']['text'] = '<strong>Dato:</strong> [field_calendar_date]. [field_calendar_date_1]  [field_calendar_date_2]';
  $handler->display->display_options['fields']['field_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_main_summary']['id'] = 'field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['table'] = 'field_data_field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['field'] = 'field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['label'] = '';
  $handler->display->display_options['fields']['field_main_summary']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_main_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_main_summary']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['sorts']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['sorts']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['sorts']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['expose']['operator_id'] = 'field_calendar_date_value_op';
  $handler->display->display_options['filters']['field_calendar_date_value']['expose']['label'] = 'Dato -  startdato (field_calendar_date)';
  $handler->display->display_options['filters']['field_calendar_date_value']['expose']['operator'] = 'field_calendar_date_value_op';
  $handler->display->display_options['filters']['field_calendar_date_value']['expose']['identifier'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view/arrangementer';
  $translatables['calendar_overview'] = array(
    t('Master'),
    t('Alle arrangementer'),
    t('mere'),
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
    t('<strong>Dato:</strong> [field_calendar_date]. [field_calendar_date_1]  [field_calendar_date_2]'),
    t('Dato -  startdato (field_calendar_date)'),
    t('Page'),
  );
  $export['calendar_overview'] = $view;

  $view = new view();
  $view->name = 'calendar_sidebar';
  $view->description = 'Calendar sidebar';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar - sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Det sker i kommunen:';
  $handler->display->display_options['css_class'] = 'calendar_sidebar';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'rebild_calendar post[counter]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Sidefod: Global: Ufiltreret tekst */
  $handler->display->display_options['footer']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['footer']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['footer']['area_text_custom']['label'] = 'Se alle arrangementer';
  $handler->display->display_options['footer']['area_text_custom']['content'] = '<span class="calendar_view_all"><a href="/arrangementer">Se alle arrangementer</a></span>';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '45';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Dato i måneden */
  $handler->display->display_options['fields']['field_calendar_date']['id'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date']['ui_name'] = 'Dato i måneden';
  $handler->display->display_options['fields']['field_calendar_date']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date']['settings'] = array(
    'format_type' => 'date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Dag i måneden */
  $handler->display->display_options['fields']['field_calendar_date_1']['id'] = 'field_calendar_date_1';
  $handler->display->display_options['fields']['field_calendar_date_1']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_1']['ui_name'] = 'Dag i måneden';
  $handler->display->display_options['fields']['field_calendar_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_1']['settings'] = array(
    'format_type' => 'day',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Måned */
  $handler->display->display_options['fields']['field_calendar_date_2']['id'] = 'field_calendar_date_2';
  $handler->display->display_options['fields']['field_calendar_date_2']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['field'] = 'field_calendar_date';
  $handler->display->display_options['fields']['field_calendar_date_2']['ui_name'] = 'Måned';
  $handler->display->display_options['fields']['field_calendar_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_calendar_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_calendar_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_calendar_date_2']['settings'] = array(
    'format_type' => 'month',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Sektion */
  $handler->display->display_options['fields']['field_main_section']['id'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['fields']['field_main_section']['field'] = 'field_main_section';
  $handler->display->display_options['fields']['field_main_section']['label'] = '';
  $handler->display->display_options['fields']['field_main_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_section']['type'] = 'taxonomy_term_reference_plain';
  /* Felt: Samlet udtræk */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Samlet udtræk';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_section">[field_main_section]</div>
<div class="calendar_title">[title]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Global: View resultattæller */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = '';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['sorts']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['sorts']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['sorts']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  /* Kontekstuelt filter: Indhold: Har taksonomiterm ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'rebild_sections' => 'rebild_sections',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'now';
  /* Filterkriterie: Indhold: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'calendar_post' => 'calendar_post',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_calendar_date) */
  $handler->display->display_options['filters']['field_calendar_date_value']['id'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['table'] = 'field_data_field_calendar_date';
  $handler->display->display_options['filters']['field_calendar_date_value']['field'] = 'field_calendar_date_value';
  $handler->display->display_options['filters']['field_calendar_date_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_calendar_date_value']['default_date'] = 'yesterday';
  $translatables['calendar_sidebar'] = array(
    t('Master'),
    t('Det sker i kommunen:'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Se alle arrangementer'),
    t('<span class="calendar_view_all"><a href="/arrangementer">Se alle arrangementer</a></span>'),
    t('<div class="calendar_left">
<div class="calendar_day">[field_calendar_date_1]</div>
<div class="calendar_date">[field_calendar_date]</div>
<div class="calendar_month">[field_calendar_date_2]</div>
</div>
<div class="calendar_right">
<div class="calendar_section">[field_main_section]</div>
<div class="calendar_title">[title]</div>
</div>'),
    t('Alle'),
    t('Block'),
  );
  $export['calendar_sidebar'] = $view;

  return $export;
}
