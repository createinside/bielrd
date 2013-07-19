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
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Field collection item: Entity with the Accordion (field_main_accordion) */
  $handler->display->display_options['relationships']['field_main_accordion_node']['id'] = 'field_main_accordion_node';
  $handler->display->display_options['relationships']['field_main_accordion_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_main_accordion_node']['field'] = 'field_main_accordion_node';
  $handler->display->display_options['relationships']['field_main_accordion_node']['label'] = 'node';
  $handler->display->display_options['relationships']['field_main_accordion_node']['required'] = TRUE;
  /* Field: Field collection item: Overskrift */
  $handler->display->display_options['fields']['field_accordion_title']['id'] = 'field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['table'] = 'field_data_field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['field'] = 'field_accordion_title';
  $handler->display->display_options['fields']['field_accordion_title']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_title']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Tekst */
  $handler->display->display_options['fields']['field_accordion_text']['id'] = 'field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['table'] = 'field_data_field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['field'] = 'field_accordion_text';
  $handler->display->display_options['fields']['field_accordion_text']['label'] = '';
  $handler->display->display_options['fields']['field_accordion_text']['element_label_colon'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_main_accordion_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
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
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('node'),
    t('All'),
    t('EVA Field'),
  );
  $export['content_accordion'] = $view;

  return $export;
}
