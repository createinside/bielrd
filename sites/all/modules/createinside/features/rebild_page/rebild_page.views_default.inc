<?php
/**
 * @file
 * rebild_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_accordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Content accordion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'none';
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
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row_class'] = 'rebild_accordion';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Field collection item: Entity with the Accordion (field_main_accordion) */
  $handler->display->display_options['relationships']['field_main_accordion_node']['id'] = 'field_main_accordion_node';
  $handler->display->display_options['relationships']['field_main_accordion_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_main_accordion_node']['field'] = 'field_main_accordion_node';
  $handler->display->display_options['relationships']['field_main_accordion_node']['label'] = 'indholdselement';
  $handler->display->display_options['relationships']['field_main_accordion_node']['required'] = TRUE;
  /* Felt: Field collection item: Overskrift */
  $handler->display->display_options['fields']['field_accordion_title']['id'] = 'field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['table'] = 'field_data_field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['field'] = 'field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_title']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Tekst */
  $handler->display->display_options['fields']['field_accordion_text']['id'] = 'field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['table'] = 'field_data_field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['field'] = 'field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_text']['element_label_colon'] = FALSE;
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_main_accordion_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'page',
  );
  $translatables['content_accordion'] = array(
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
    t('indholdselement'),
    t('Alle'),
    t('EVA Field'),
  );
  $export['content_accordion'] = $view;

  return $export;
}
