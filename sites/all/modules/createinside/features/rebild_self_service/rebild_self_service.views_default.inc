<?php
/**
 * @file
 * rebild_self_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_self_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'selfservice_items';
  $view->description = 'Selfservice links as nested accordions.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjeningsløsninger';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Indhold: Kategori (field_self_service_category) */
  $handler->display->display_options['relationships']['field_self_service_category_tid']['id'] = 'field_self_service_category_tid';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['table'] = 'field_data_field_self_service_category';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['field'] = 'field_self_service_category_tid';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['label'] = 'category';
  /* Forbindelse: Indhold: Type (field_self_service_type) */
  $handler->display->display_options['relationships']['field_self_service_type_tid']['id'] = 'field_self_service_type_tid';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['table'] = 'field_data_field_self_service_type';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['field'] = 'field_self_service_type_tid';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['label'] = 'type';
  /* Forbindelse: Indhold: PDF (field_self_service_pdf:fid) */
  $handler->display->display_options['relationships']['field_self_service_pdf_fid']['id'] = 'field_self_service_pdf_fid';
  $handler->display->display_options['relationships']['field_self_service_pdf_fid']['table'] = 'field_data_field_self_service_pdf';
  $handler->display->display_options['relationships']['field_self_service_pdf_fid']['field'] = 'field_self_service_pdf_fid';
  $handler->display->display_options['relationships']['field_self_service_pdf_fid']['label'] = 'PDF';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Brødtekst */
  $handler->display->display_options['fields']['field_main_body']['id'] = 'field_main_body';
  $handler->display->display_options['fields']['field_main_body']['table'] = 'field_data_field_main_body';
  $handler->display->display_options['fields']['field_main_body']['field'] = 'field_main_body';
  $handler->display->display_options['fields']['field_main_body']['label'] = '';
  $handler->display->display_options['fields']['field_main_body']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Beskrivelse af term */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['relationship'] = 'field_self_service_type_tid';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['hide_empty'] = TRUE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_self_service_link']['id'] = 'field_self_service_link';
  $handler->display->display_options['fields']['field_self_service_link']['table'] = 'field_data_field_self_service_link';
  $handler->display->display_options['fields']['field_self_service_link']['field'] = 'field_self_service_link';
  $handler->display->display_options['fields']['field_self_service_link']['label'] = '';
  $handler->display->display_options['fields']['field_self_service_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_self_service_link']['click_sort_column'] = 'url';
  /* Felt: Fil: Link */
  $handler->display->display_options['fields']['link']['id'] = 'link';
  $handler->display->display_options['fields']['link']['table'] = 'file_managed';
  $handler->display->display_options['fields']['link']['field'] = 'link';
  $handler->display->display_options['fields']['link']['relationship'] = 'field_self_service_pdf_fid';
  $handler->display->display_options['fields']['link']['label'] = '';
  $handler->display->display_options['fields']['link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['link']['text'] = 'Download fil';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_service' => 'self_service',
  );

  /* Display: Emner */
  $handler = $view->new_display('page', 'Emner', 'emner');
  $handler->display->display_options['path'] = 'views/selvbetjening';

  /* Display: Alfabetisk */
  $handler = $view->new_display('page', 'Alfabetisk', 'alfabetisk');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'views/selvbetjening/liste';
  $translatables['selfservice_items'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('category'),
    t('type'),
    t('PDF'),
    t('Download fil'),
    t('Emner'),
    t('Alfabetisk'),
  );
  $export['selfservice_items'] = $view;

  return $export;
}
