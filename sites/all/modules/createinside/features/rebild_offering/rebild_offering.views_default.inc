<?php
/**
 * @file
 * rebild_offering.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_offering_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'offerings';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Offerings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Udbud';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Antal elementer';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« første';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ forrige';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'næste ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'sidste »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_node'] = TRUE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href="[view_node]">[title]</a>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_offering_link']['id'] = 'field_offering_link';
  $handler->display->display_options['fields']['field_offering_link']['table'] = 'field_data_field_offering_link';
  $handler->display->display_options['fields']['field_offering_link']['field'] = 'field_offering_link';
  $handler->display->display_options['fields']['field_offering_link']['label'] = '';
  $handler->display->display_options['fields']['field_offering_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offering_link']['alter']['text'] = '[field_offering_link]';
  $handler->display->display_options['fields']['field_offering_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offering_link']['empty'] = '[view_node] ';
  $handler->display->display_options['fields']['field_offering_link']['click_sort_column'] = 'url';
  /* Felt: Indhold: Tilbudsfrist */
  $handler->display->display_options['fields']['field_offering_deadline']['id'] = 'field_offering_deadline';
  $handler->display->display_options['fields']['field_offering_deadline']['table'] = 'field_data_field_offering_deadline';
  $handler->display->display_options['fields']['field_offering_deadline']['field'] = 'field_offering_deadline';
  $handler->display->display_options['fields']['field_offering_deadline']['label'] = '';
  $handler->display->display_options['fields']['field_offering_deadline']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_offering_deadline']['alter']['text'] = '<p>Tilbudsfrist: [field_offering_deadline]</p>';
  $handler->display->display_options['fields']['field_offering_deadline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_offering_deadline']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_offering_deadline']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sorteringskriterie: Indhold: Tilbudsfrist (field_offering_deadline) */
  $handler->display->display_options['sorts']['field_offering_deadline_value']['id'] = 'field_offering_deadline_value';
  $handler->display->display_options['sorts']['field_offering_deadline_value']['table'] = 'field_data_field_offering_deadline';
  $handler->display->display_options['sorts']['field_offering_deadline_value']['field'] = 'field_offering_deadline_value';
  $handler->display->display_options['sorts']['field_offering_deadline_value']['expose']['label'] = 'Tilbudsfrist (field_offering_deadline)';
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
    'offering' => 'offering',
  );
  /* Filterkriterie: Indhold: Tilbudsfrist (field_offering_deadline) */
  $handler->display->display_options['filters']['field_offering_deadline_value']['id'] = 'field_offering_deadline_value';
  $handler->display->display_options['filters']['field_offering_deadline_value']['table'] = 'field_data_field_offering_deadline';
  $handler->display->display_options['filters']['field_offering_deadline_value']['field'] = 'field_offering_deadline_value';
  $handler->display->display_options['filters']['field_offering_deadline_value']['operator'] = '>';
  $handler->display->display_options['filters']['field_offering_deadline_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_offering_deadline_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_offering_deadline_value']['default_date'] = 'now';

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $translatables['offerings'] = array(
    t('Master'),
    t('Udbud'),
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
    t('<a href="[view_node]">[title]</a>'),
    t('[field_offering_link]'),
    t('[view_node] '),
    t('<p>Tilbudsfrist: [field_offering_deadline]</p>'),
    t('Tilbudsfrist (field_offering_deadline)'),
    t('Blok'),
  );
  $export['offerings'] = $view;

  return $export;
}
