<?php
/**
 * @file
 * rebild_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_articles';
  $view->description = 'Adds a block with the latest news articles.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Nyheder';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '[field_main_image]';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'news-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_class'] = 'news-image';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'picture_group' => 'nyhed',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
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
    'news_article' => 'news_article',
  );

  /* Display: Forside */
  $handler = $view->new_display('block', 'Forside', 'block');
  $handler->display->display_options['block_description'] = 'Nyheder - forside';

  /* Display: Nyhedsside */
  $handler = $view->new_display('page', 'Nyhedsside', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'news-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_main_image']['id'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['table'] = 'field_data_field_main_image';
  $handler->display->display_options['fields']['field_main_image']['field'] = 'field_main_image';
  $handler->display->display_options['fields']['field_main_image']['label'] = '';
  $handler->display->display_options['fields']['field_main_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['element_wrapper_class'] = 'news-image';
  $handler->display->display_options['fields']['field_main_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_main_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_main_image']['settings'] = array(
    'picture_group' => 'nyhed_oversigt',
    'fallback_image_style' => '',
    'image_link' => 'content',
  );
  /* Felt: Indhold: Oprettelsesdato */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Dato';
  $handler->display->display_options['fields']['created']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['created']['element_wrapper_class'] = 'news-date';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd. F Y';
  /* Felt: Indhold: Resumé */
  $handler->display->display_options['fields']['field_main_summary']['id'] = 'field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['table'] = 'field_data_field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['field'] = 'field_main_summary';
  $handler->display->display_options['fields']['field_main_summary']['label'] = '';
  $handler->display->display_options['fields']['field_main_summary']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_main_summary']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_main_summary']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_main_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_summary']['element_wrapper_class'] = 'news-summary';
  $handler->display->display_options['path'] = 'view/nyheder';

  /* Display: Borger landing */
  $handler = $view->new_display('block', 'Borger landing', 'block_1');
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
    'news_article' => 'news_article',
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
  $handler->display->display_options['block_description'] = 'Nyheder - borger';

  /* Display: Erhverv landing */
  $handler = $view->new_display('block', 'Erhverv landing', 'block_2');
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
    'news_article' => 'news_article',
  );
  /* Filterkriterie: Felt: Sektion (field_main_section) */
  $handler->display->display_options['filters']['field_main_section_tid']['id'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['table'] = 'field_data_field_main_section';
  $handler->display->display_options['filters']['field_main_section_tid']['field'] = 'field_main_section_tid';
  $handler->display->display_options['filters']['field_main_section_tid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_main_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_main_section_tid']['vocabulary'] = 'rebild_sections';
  $handler->display->display_options['block_description'] = 'Nyheder - erhverv';

  /* Display: Politik landing */
  $handler = $view->new_display('block', 'Politik landing', 'block_3');
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
    'news_article' => 'news_article',
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
  $handler->display->display_options['block_description'] = 'Nyheder - politik';

  /* Display: Bo i rebild landing */
  $handler = $view->new_display('block', 'Bo i rebild landing', 'block_4');
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
    'news_article' => 'news_article',
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
  $handler->display->display_options['block_description'] = 'Nyheder - bo i rebild';
  $translatables['news_articles'] = array(
    t('Master'),
    t('Nyheder'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[field_main_image]'),
    t('Forside'),
    t('Nyheder - forside'),
    t('Nyhedsside'),
    t('Antal elementer'),
    t('- Alle -'),
    t('Forskydning'),
    t('« første'),
    t('‹ forrige'),
    t('næste ›'),
    t('sidste »'),
    t('Dato'),
    t('Borger landing'),
    t('Nyheder - borger'),
    t('Erhverv landing'),
    t('Nyheder - erhverv'),
    t('Politik landing'),
    t('Nyheder - politik'),
    t('Bo i rebild landing'),
    t('Nyheder - bo i rebild'),
  );
  $export['news_articles'] = $view;

  return $export;
}
