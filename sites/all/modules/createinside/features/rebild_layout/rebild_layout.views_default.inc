<?php
/**
 * @file
 * rebild_layout.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_layout_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_sidebar_most_read';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content sidebar - most read';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mest læste:';
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[view_node]">>> [title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sorteringskriterie: Indholdsstatistik: Totale visninger */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'node_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
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
    'os2web_borger_dk_article' => 'os2web_borger_dk_article',
    'page' => 'page',
  );
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not';
  $handler->display->display_options['filters']['title']['value'] = '404 - siden findes ikke';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['content_sidebar_most_read'] = array(
    t('Master'),
    t('Mest læste:'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<a href="[view_node]">>> [title]</a>'),
    t('[title]'),
    t('Block'),
  );
  $export['content_sidebar_most_read'] = $view;

  $view = new view();
  $view->name = 'content_sidebar_read_also';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content sidebar - read also';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Læs også';
  $handler->display->display_options['css_class'] = 'read_also';
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
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sorteringskriterie: Global: Tilfældig */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filterkriterie: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_borger_dk_article' => 'os2web_borger_dk_article',
    'cloned_page' => 'cloned_page',
    'page' => 'page',
  );
  /* Filterkriterie: Indhold: Overskrift */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'not';
  $handler->display->display_options['filters']['title']['value'] = '404 - siden findes ikke';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['content_sidebar_read_also'] = array(
    t('Master'),
    t('Læs også'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
  );
  $export['content_sidebar_read_also'] = $view;

  $view = new view();
  $view->name = 'content_sidebar_relevant_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content sidebar - relevant content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Relevant indhold';
  $handler->display->display_options['css_class'] = 'related-content-links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Felt: Indhold: Eksterne links */
  $handler->display->display_options['fields']['field_main_links_external']['id'] = 'field_main_links_external';
  $handler->display->display_options['fields']['field_main_links_external']['table'] = 'field_data_field_main_links_external';
  $handler->display->display_options['fields']['field_main_links_external']['field'] = 'field_main_links_external';
  $handler->display->display_options['fields']['field_main_links_external']['label'] = '';
  $handler->display->display_options['fields']['field_main_links_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_links_external']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_links_external']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_main_links_external']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_main_links_external']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_main_links_external']['separator'] = '';
  /* Felt: Indhold: Interne links */
  $handler->display->display_options['fields']['field_main_links_internal']['id'] = 'field_main_links_internal';
  $handler->display->display_options['fields']['field_main_links_internal']['table'] = 'field_data_field_main_links_internal';
  $handler->display->display_options['fields']['field_main_links_internal']['field'] = 'field_main_links_internal';
  $handler->display->display_options['fields']['field_main_links_internal']['label'] = '';
  $handler->display->display_options['fields']['field_main_links_internal']['alter']['text'] = '<div>[field_main_links_external]</div>
<div>[field_main_links_internal]</div>';
  $handler->display->display_options['fields']['field_main_links_internal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_links_internal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_main_links_internal']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_main_links_internal']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_main_links_internal']['multi_type'] = 'ul';
  $handler->display->display_options['fields']['field_main_links_internal']['separator'] = '';
  /* Sorteringskriterie: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
  );
  /* Filterkriterie: Indhold: Eksterne links (field_main_links_external:url) */
  $handler->display->display_options['filters']['field_main_links_external_url']['id'] = 'field_main_links_external_url';
  $handler->display->display_options['filters']['field_main_links_external_url']['table'] = 'field_data_field_main_links_external';
  $handler->display->display_options['filters']['field_main_links_external_url']['field'] = 'field_main_links_external_url';
  $handler->display->display_options['filters']['field_main_links_external_url']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_main_links_external_url']['group'] = 1;
  /* Filterkriterie: Indhold: Interne links (field_main_links_internal) */
  $handler->display->display_options['filters']['field_main_links_internal_target_id']['id'] = 'field_main_links_internal_target_id';
  $handler->display->display_options['filters']['field_main_links_internal_target_id']['table'] = 'field_data_field_main_links_internal';
  $handler->display->display_options['filters']['field_main_links_internal_target_id']['field'] = 'field_main_links_internal_target_id';
  $handler->display->display_options['filters']['field_main_links_internal_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_main_links_internal_target_id']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['content_sidebar_relevant_content'] = array(
    t('Master'),
    t('Relevant indhold'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<div>[field_main_links_external]</div>
<div>[field_main_links_internal]</div>'),
    t('Alle'),
    t('Block'),
  );
  $export['content_sidebar_relevant_content'] = $view;

  return $export;
}
