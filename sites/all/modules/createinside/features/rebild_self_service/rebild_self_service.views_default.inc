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
  $view->name = 'selfservice_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjeningsblok - sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['css_class'] = 'selvbetjening-sidebar';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = '- Vælg -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/selvbetjening">Mere selvbetjening</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Felt: Tags (field_main_tags) */
  $handler->display->display_options['arguments']['field_main_tags_tid']['id'] = 'field_main_tags_tid';
  $handler->display->display_options['arguments']['field_main_tags_tid']['table'] = 'field_data_field_main_tags';
  $handler->display->display_options['arguments']['field_main_tags_tid']['field'] = 'field_main_tags_tid';
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_main_tags_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_main_tags_tid']['default_argument_options']['vocabularies'] = array(
    'rebild_tags' => 'rebild_tags',
  );
  $handler->display->display_options['arguments']['field_main_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_main_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_main_tags_tid']['summary_options']['items_per_page'] = '25';
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
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_service' => 'self_service',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Sidebar */
  $handler = $view->new_display('block', 'Sidebar', 'block_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selfservice_blocks:block_2';
  $handler->display->display_options['block_description'] = 'Selvbetjening - sidebar';

  /* Display: Sidebar bottom */
  $handler = $view->new_display('block', 'Sidebar bottom', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $translatables['selfservice_blocks'] = array(
    t('Master'),
    t('Selvbetjening'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="/selvbetjening">Mere selvbetjening</a>'),
    t('selvbetjening#loesning-[nid]'),
    t('Alle'),
    t('Sidebar'),
    t('<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>'),
    t('Selvbetjening - sidebar'),
    t('Sidebar bottom'),
  );
  $export['selfservice_blocks'] = $view;

  $view = new view();
  $view->name = 'selfservice_frontpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjeningsblok - forside';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Brug <strong>selvbetjening</strong> og spring køen over</h2>
<p>Betjen dig selv 24 timer i døgnet alle ugens syv dage, når det passer dig.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Forsideblok */
  $handler = $view->new_display('block', 'Forsideblok', 'block');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Brug <strong>selvbetjening</strong> og spring køen over</h2>
<p>Betjen dig selv 24 timer i døgnet alle ugens syv dage, når det passer dig.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Overskrift: Global: View-område */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'selfservice_frontpage:block_1';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<p class="separator">- eller -</p>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html';
  /* Overskrift: Global: View-område */
  $handler->display->display_options['header']['view_1']['id'] = 'view_1';
  $handler->display->display_options['header']['view_1']['table'] = 'views';
  $handler->display->display_options['header']['view_1']['field'] = 'view';
  $handler->display->display_options['header']['view_1']['view_to_insert'] = 'selfservice_frontpage:block_2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['block_description'] = 'Selfbetjening - forside';

  /* Display: Selvbetjeningsløsninger */
  $handler = $view->new_display('block', 'Selvbetjeningsløsninger', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'jump-left';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Find hjælp';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Kategorier */
  $handler = $view->new_display('block', 'Kategorier', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'jump-right';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nothing';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = 'Vælg et emne';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Indhold: Kategori (field_self_service_category) */
  $handler->display->display_options['relationships']['field_self_service_category_tid']['id'] = 'field_self_service_category_tid';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['table'] = 'field_data_field_self_service_category';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['field'] = 'field_self_service_category_tid';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['label'] = 'kategori';
  $handler->display->display_options['relationships']['field_self_service_category_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'selvbetjening#kategori-[tid]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_self_service_category_tid';
  $translatables['selfservice_frontpage'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<h2>Brug <strong>selvbetjening</strong> og spring køen over</h2>
<p>Betjen dig selv 24 timer i døgnet alle ugens syv dage, når det passer dig.</p>'),
    t('<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>'),
    t('selvbetjening#loesning-[nid]'),
    t('Forsideblok'),
    t('<p class="separator">- eller -</p>'),
    t('Selfbetjening - forside'),
    t('Selvbetjeningsløsninger'),
    t('Kategorier'),
    t('kategori'),
    t('.'),
    t('selvbetjening#kategori-[tid]'),
  );
  $export['selfservice_frontpage'] = $view;

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
  $handler->display->display_options['style_options']['row_class'] = 'loesning-[nid]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
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
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['id'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['table'] = 'field_data_field_main_selfservice';
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['field'] = 'field_main_selfservice_target_id';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<span class="loesning-[nid]">[title]</span>';
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
  /* Felt: Ord i ordforråd: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Felt: Ord i ordforråd: Navn */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<span class="kategori-[tid]">[name]</span>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Fil */
  $handler->display->display_options['fields']['field_self_service_pdf']['id'] = 'field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['table'] = 'field_data_field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['field'] = 'field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['text'] = '<a href="[field_self_service_pdf]" target="_new">Download fil</a>';
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['path'] = '[field_self_service_pdf]';
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_self_service_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_self_service_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_self_service_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_self_service_pdf']['settings'] = array(
    'file_view_mode' => 'default',
  );
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_self_service_category_tid';
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
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Emner */
  $handler = $view->new_display('page', 'Emner', 'emner');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_self_service_category_tid';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['path'] = 'views/selvbetjening/liste';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'embedded');
  $handler->display->display_options['defaults']['title'] = FALSE;
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
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="title">Selvbetjening:</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Forbindelse: Entity Reference: Refereret entity */
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['id'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['table'] = 'field_data_field_main_selfservice';
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['field'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['relationships']['field_main_selfservice_target_id']['label'] = 'Selvbetjening';
  /* Forbindelse: Indhold: Type (field_self_service_type) */
  $handler->display->display_options['relationships']['field_self_service_type_tid']['id'] = 'field_self_service_type_tid';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['table'] = 'field_data_field_self_service_type';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['field'] = 'field_self_service_type_tid';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['relationship'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['relationships']['field_self_service_type_tid']['label'] = 'type';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_main_selfservice_target_id';
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
  $handler->display->display_options['fields']['field_main_body']['relationship'] = 'field_main_selfservice_target_id';
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
  $handler->display->display_options['fields']['field_self_service_link']['relationship'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['fields']['field_self_service_link']['label'] = '';
  $handler->display->display_options['fields']['field_self_service_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_self_service_link']['click_sort_column'] = 'url';
  /* Felt: Indhold: Fil */
  $handler->display->display_options['fields']['field_self_service_pdf']['id'] = 'field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['table'] = 'field_data_field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['field'] = 'field_self_service_pdf';
  $handler->display->display_options['fields']['field_self_service_pdf']['relationship'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['fields']['field_self_service_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_self_service_pdf']['alter']['text'] = '<a href="[field_self_service_pdf]" target="_new">Download fil</a>';
  $handler->display->display_options['fields']['field_self_service_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_self_service_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_self_service_pdf']['type'] = 'file_url_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sorteringskriterie: Ord i ordforråd: Navn */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'field_self_service_category_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Selvbetjeningløsninger (field_main_selfservice) */
  $handler->display->display_options['filters']['field_main_selfservice_target_id']['id'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['filters']['field_main_selfservice_target_id']['table'] = 'field_data_field_main_selfservice';
  $handler->display->display_options['filters']['field_main_selfservice_target_id']['field'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['filters']['field_main_selfservice_target_id']['operator'] = 'not empty';
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_main_selfservice_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'page',
  );
  $handler->display->display_options['show_title'] = 0;
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
    t('Indhold entity refereret fra field_main_selfservice'),
    t('<span class="loesning-[nid]">[title]</span>'),
    t('.'),
    t('<span class="kategori-[tid]">[name]</span>'),
    t('<a href="[field_self_service_pdf]" target="_new">Download fil</a>'),
    t('Emner'),
    t('Alfabetisk'),
    t('EVA Field'),
    t('<h2 class="title">Selvbetjening:</h2>'),
    t('Selvbetjening'),
    t('Alle'),
  );
  $export['selfservice_items'] = $view;

  $view = new view();
  $view->name = 'selfservice_landing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Selvbetjeningsblok - landinsside';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Selvbetjening';
  $handler->display->display_options['css_class'] = 'selvbetjening-sidebar';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['path'] = 'nid';
  $handler->display->display_options['style_options']['text'] = 'Skift';
  $handler->display->display_options['style_options']['choose'] = '- Vælg -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/selvbetjening">Mere selvbetjening</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Felt: Sektion (field_main_section) */
  $handler->display->display_options['arguments']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['arguments']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['arguments']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['arguments']['field_main_section_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_main_section_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_main_section_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_main_section_tid']['default_argument_options']['code'] = 'return current_path();';
  $handler->display->display_options['arguments']['field_main_section_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_main_section_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_main_section_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_main_section_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_main_section_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_main_section_tid']['validate_options']['vocabularies'] = array(
    'rebild_sections' => 'rebild_sections',
  );
  $handler->display->display_options['arguments']['field_main_section_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_main_section_tid']['validate_options']['transform'] = TRUE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'self_service' => 'self_service',
  );
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Sidebar */
  $handler = $view->new_display('block', 'Sidebar', 'block_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Sidefod: Global: Tekstområde */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Sidefod: Global: View-område */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'selfservice_landing:block_2';
  $handler->display->display_options['block_description'] = 'Selvbetjening - landing';

  /* Display: Sidebar bottom */
  $handler = $view->new_display('block', 'Sidebar bottom', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'selvbetjening#loesning-[nid]';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $translatables['selfservice_landing'] = array(
    t('Master'),
    t('Selvbetjening'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="/selvbetjening">Mere selvbetjening</a>'),
    t('selvbetjening#loesning-[nid]'),
    t('Alle'),
    t('Sidebar'),
    t('<p class="arrow-link"><a href="/selvbetjening">Mere selvbetjening</a></p>'),
    t('Selvbetjening - landing'),
    t('Sidebar bottom'),
  );
  $export['selfservice_landing'] = $view;

  return $export;
}
