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
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Calendar - frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Det sker i kommunen:';
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
  $handler->display->display_options['style_options']['row_class'] = 'rebild_calendar post[counter]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['calendar_frontpage'] = array(
    t('Master'),
    t('Det sker i kommunen:'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
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
  );
  $export['calendar_frontpage'] = $view;

  return $export;
}
