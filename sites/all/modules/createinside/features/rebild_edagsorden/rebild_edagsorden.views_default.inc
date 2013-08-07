<?php
/**
 * @file
 * rebild_edagsorden.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_edagsorden_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agenda_accordion';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Agenda accordion';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['style_options']['autoheight'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Field collection item: Nummer */
  $handler->display->display_options['fields']['field_agenda_item_number']['id'] = 'field_agenda_item_number';
  $handler->display->display_options['fields']['field_agenda_item_number']['table'] = 'field_data_field_agenda_item_number';
  $handler->display->display_options['fields']['field_agenda_item_number']['field'] = 'field_agenda_item_number';
  $handler->display->display_options['fields']['field_agenda_item_number']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_number']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_number']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 0,
  );
  /* Felt: Field collection item: Titel */
  $handler->display->display_options['fields']['field_agenda_item_caption']['id'] = 'field_agenda_item_caption';
  $handler->display->display_options['fields']['field_agenda_item_caption']['table'] = 'field_data_field_agenda_item_caption';
  $handler->display->display_options['fields']['field_agenda_item_caption']['field'] = 'field_agenda_item_caption';
  $handler->display->display_options['fields']['field_agenda_item_caption']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_caption']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_caption']['alter']['text'] = '[field_agenda_item_number]. [field_agenda_item_caption] ';
  $handler->display->display_options['fields']['field_agenda_item_caption']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Brødtekst */
  $handler->display->display_options['fields']['field_agenda_item_content']['id'] = 'field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['table'] = 'field_data_field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['field'] = 'field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_content']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Bilag */
  $handler->display->display_options['fields']['field_agenda_item_docs']['id'] = 'field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['table'] = 'field_data_field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['field'] = 'field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_agenda_item_docs']['delta_offset'] = '0';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'agenda',
  );
  $translatables['agenda_accordion'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('[field_agenda_item_number]. [field_agenda_item_caption] '),
    t('Bilag'),
    t('EVA Field'),
  );
  $export['agenda_accordion'] = $view;

  return $export;
}
