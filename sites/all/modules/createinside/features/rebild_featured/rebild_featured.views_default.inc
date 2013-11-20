<?php
/**
 * @file
 * rebild_featured.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_featured_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rebild_frontpage';
  $view->description = 'Forside og landing pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Aktuelt i Rebild';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fokus';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
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
  $handler->display->display_options['style_options']['row_class'] = 'grid-5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Ingen resultater.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_featured_link']['id'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['table'] = 'field_data_field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['field'] = 'field_featured_link';
  $handler->display->display_options['fields']['field_featured_link']['label'] = '';
  $handler->display->display_options['fields']['field_featured_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_featured_link']['type'] = 'link_plain';
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_featured_image']['id'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['table'] = 'field_data_field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['field'] = 'field_featured_image';
  $handler->display->display_options['fields']['field_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_featured_image']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['field_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['element_wrapper_class'] = 'featured-image';
  $handler->display->display_options['fields']['field_featured_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_featured_image']['settings'] = array(
    'picture_group' => 'blok',
    'fallback_image_style' => 'blok',
    'image_link' => '',
  );
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_featured_link]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'featured-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_featured_summary']['id'] = 'field_featured_summary';
  $handler->display->display_options['fields']['field_featured_summary']['table'] = 'field_data_field_featured_summary';
  $handler->display->display_options['fields']['field_featured_summary']['field'] = 'field_featured_summary';
  $handler->display->display_options['fields']['field_featured_summary']['label'] = '';
  $handler->display->display_options['fields']['field_featured_summary']['alter']['max_length'] = '240';
  $handler->display->display_options['fields']['field_featured_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_featured_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_summary']['element_wrapper_class'] = 'featured-summary';
  $handler->display->display_options['fields']['field_featured_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_featured_summary']['settings'] = array(
    'trim_length' => '100',
  );
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_article' => 'featured_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    1 => '1',
    3 => '3',
    2 => '2',
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';

  /* Display: Forside */
  $handler = $view->new_display('page', 'Forside', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'forsidek_' => 'forsidek_',
    'borger_queue' => 0,
    'erhverv_queue' => 0,
    'politik_queue' => 0,
    'bo_i_rebild_queue' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Nodequeue: Subqueue reference */
  $handler->display->display_options['sorts']['reference']['id'] = 'reference';
  $handler->display->display_options['sorts']['reference']['table'] = 'nodequeue_subqueue';
  $handler->display->display_options['sorts']['reference']['field'] = 'reference';
  $handler->display->display_options['sorts']['reference']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Forfremmet til forside */
  $handler->display->display_options['sorts']['promote']['id'] = 'promote';
  $handler->display->display_options['sorts']['promote']['table'] = 'node';
  $handler->display->display_options['sorts']['promote']['field'] = 'promote';
  $handler->display->display_options['sorts']['promote']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'frontpage';

  /* Display: Borger */
  $handler = $view->new_display('page', 'Borger', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Borger';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'borger_queue' => 'borger_queue',
    'forsidek_' => 0,
    'erhverv_queue' => 0,
    'politik_queue' => 0,
    'bo_i_rebild_queue' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_article' => 'featured_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['path'] = 'borger';

  /* Display: Erhverv */
  $handler = $view->new_display('page', 'Erhverv', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Erhverv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'erhverv_queue' => 'erhverv_queue',
    'forsidek_' => 0,
    'borger_queue' => 0,
    'politik_queue' => 0,
    'bo_i_rebild_queue' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_article' => 'featured_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['expose']['operator_id'] = 'field_main_section_tid_op';
  $handler->display->display_options['filters']['field_main_section_tid']['expose']['label'] = 'Sektion (field_main_section)';
  $handler->display->display_options['filters']['field_main_section_tid']['expose']['operator'] = 'field_main_section_tid_op';
  $handler->display->display_options['filters']['field_main_section_tid']['expose']['identifier'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['path'] = 'erhverv';

  /* Display: Politik */
  $handler = $view->new_display('page', 'Politik', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Politik';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'politik_queue' => 'politik_queue',
    'forsidek_' => 0,
    'borger_queue' => 0,
    'erhverv_queue' => 0,
    'bo_i_rebild_queue' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_article' => 'featured_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['path'] = 'politik';

  /* Display: Bo i Rebild */
  $handler = $view->new_display('page', 'Bo i Rebild', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bo i Rebild';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'bo_i_rebild_queue' => 'bo_i_rebild_queue',
    'forsidek_' => 0,
    'borger_queue' => 0,
    'erhverv_queue' => 0,
    'politik_queue' => 0,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Nodequeue: Placering */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Sorteringskriterie: Indhold: Klæbrig */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_article' => 'featured_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['path'] = 'bo-i-rebild';
  $translatables['rebild_frontpage'] = array(
    t('Master'),
    t('Fokus'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Ingen resultater.'),
    t('queue'),
    t('Forside'),
    t('Borger'),
    t('Erhverv'),
    t('Sektion (field_main_section)'),
    t('Politik'),
    t('Bo i Rebild'),
  );
  $export['rebild_frontpage'] = $view;

  return $export;
}
