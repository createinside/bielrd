<?php
/**
 * @file
 * rebild_cloned_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_cloned_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_sidebar_relevant_content_cloned_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content sidebar - relevant content - cloned pages';
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
  /* Forbindelse: Entity Reference: Refererende entity */
  $handler->display->display_options['relationships']['reverse_field_cloned_page_node']['id'] = 'reverse_field_cloned_page_node';
  $handler->display->display_options['relationships']['reverse_field_cloned_page_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_cloned_page_node']['field'] = 'reverse_field_cloned_page_node';
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
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_cloned_page_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
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
  $translatables['content_sidebar_relevant_content_cloned_pages'] = array(
    t('Master'),
    t('Relevant indhold'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Indhold refererer til Indhold fra field_cloned_page'),
    t('<div>[field_main_links_external]</div>
<div>[field_main_links_internal]</div>'),
    t('Alle'),
    t('Block'),
  );
  $export['content_sidebar_relevant_content_cloned_pages'] = $view;

  $view = new view();
  $view->name = 'entity_reference_cloned_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Entity reference: cloned_page';
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
  $handler->display->display_options['pager']['type'] = 'full';
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $translatables['entity_reference_cloned_pages'] = array(
    t('Master'),
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
    t('Entity Reference'),
  );
  $export['entity_reference_cloned_pages'] = $view;

  return $export;
}
