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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = '[field_agenda_item_closed_1]';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p class=\'field\'><a href="#" class="toggle-expand-all"><span class=\'icon-double-angle-down\'></span> Udvid alle punkter</a></p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Forbindelse: Field collection item: Entity with the Mødepunkter (field_agenda_items) */
  $handler->display->display_options['relationships']['field_agenda_items_node']['id'] = 'field_agenda_items_node';
  $handler->display->display_options['relationships']['field_agenda_items_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_agenda_items_node']['field'] = 'field_agenda_items_node';
  $handler->display->display_options['relationships']['field_agenda_items_node']['label'] = 'indholdselement';
  /* Felt: Field collection item: Lukket punkt */
  $handler->display->display_options['fields']['field_agenda_item_closed']['id'] = 'field_agenda_item_closed';
  $handler->display->display_options['fields']['field_agenda_item_closed']['table'] = 'field_data_field_agenda_item_closed';
  $handler->display->display_options['fields']['field_agenda_item_closed']['field'] = 'field_agenda_item_closed';
  $handler->display->display_options['fields']['field_agenda_item_closed']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_closed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed']['alter']['text'] = 'Lukket punkt:';
  $handler->display->display_options['fields']['field_agenda_item_closed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_closed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed']['type'] = 'list_key';
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
  $handler->display->display_options['fields']['field_agenda_item_caption']['alter']['text'] = '<strong class="field-item">[field_agenda_item_number]. [field_agenda_item_closed] [field_agenda_item_caption]</strong>';
  $handler->display->display_options['fields']['field_agenda_item_caption']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Brødtekst */
  $handler->display->display_options['fields']['field_agenda_item_content']['id'] = 'field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['table'] = 'field_data_field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['field'] = 'field_agenda_item_content';
  $handler->display->display_options['fields']['field_agenda_item_content']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_content']['alter']['text'] = '[field_agenda_item_content]
[field_agenda_item_docs]';
  $handler->display->display_options['fields']['field_agenda_item_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_content']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agenda_item_content']['separator'] = '';
  /* Felt: Indhold: Rod Id */
  $handler->display->display_options['fields']['field_agenda_root_id']['id'] = 'field_agenda_root_id';
  $handler->display->display_options['fields']['field_agenda_root_id']['table'] = 'field_data_field_agenda_root_id';
  $handler->display->display_options['fields']['field_agenda_root_id']['field'] = 'field_agenda_root_id';
  $handler->display->display_options['fields']['field_agenda_root_id']['relationship'] = 'field_agenda_items_node';
  $handler->display->display_options['fields']['field_agenda_root_id']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_root_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_root_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_root_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_root_id']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_root_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  /* Felt: Field collection item: Sagsnummer */
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['id'] = 'field_agenda_item_case_nr';
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['table'] = 'field_data_field_agenda_item_case_nr';
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['field'] = 'field_agenda_item_case_nr';
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['alter']['text'] = '<label>Sagsnr:</label> [field_agenda_item_case_nr]<br />';
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_case_nr']['empty_zero'] = TRUE;
  /* Felt: Field collection item: Udvalg */
  $handler->display->display_options['fields']['field_agenda_item_com']['id'] = 'field_agenda_item_com';
  $handler->display->display_options['fields']['field_agenda_item_com']['table'] = 'field_data_field_agenda_item_com';
  $handler->display->display_options['fields']['field_agenda_item_com']['field'] = 'field_agenda_item_com';
  $handler->display->display_options['fields']['field_agenda_item_com']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_com']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com']['alter']['text'] = '<label>Udvalg:</label> [field_agenda_item_com]<br />';
  $handler->display->display_options['fields']['field_agenda_item_com']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_com']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com']['empty_zero'] = TRUE;
  /* Felt: Field collection item: Besluttende udvalg */
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['id'] = 'field_agenda_item_com_dec';
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['table'] = 'field_data_field_agenda_item_com_dec';
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['field'] = 'field_agenda_item_com_dec';
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['alter']['text'] = '<label>Sagen afgøres i:</label> [field_agenda_item_com_dec]';
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_com_dec']['empty_zero'] = TRUE;
  /* Felt: Field collection item: Bilag */
  $handler->display->display_options['fields']['field_agenda_item_docs']['id'] = 'field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['table'] = 'field_data_field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['field'] = 'field_agenda_item_docs';
  $handler->display->display_options['fields']['field_agenda_item_docs']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_docs']['alter']['text'] = '[field_agenda_item_docs] ';
  $handler->display->display_options['fields']['field_agenda_item_docs']['element_label_type'] = 'h3';
  $handler->display->display_options['fields']['field_agenda_item_docs']['empty'] = '<p><em>Ingen bilag.</p></em>';
  $handler->display->display_options['fields']['field_agenda_item_docs']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_docs']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_docs']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_agenda_item_docs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_agenda_item_docs']['multi_type'] = 'ul';
  /* Felt: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '$static = 1;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php  
$options = array(
	\'target_id\' => \'views-row-\'.$static,
	\'button_id\' => \'print-row-\'.$static,
	\'value\' =>	\'Print\',
	\'type\' => \'button\',
	\'custom_css\' => drupal_get_path(\'theme\',\'rebild\').\'/css/print-agenda.css\'
);
print area_print_form($options);

$static++;
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="item-intro">
[php]
[field_agenda_item_case_nr]
[field_agenda_item_com]
</p>
[field_agenda_item_content]
<div class="bilag">
<h3>Bilag:</h3>
[field_agenda_item_docs]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Lukket punkt */
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['id'] = 'field_agenda_item_closed_1';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['table'] = 'field_data_field_agenda_item_closed';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['field'] = 'field_agenda_item_closed';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['alter']['text'] = 'closed-item';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['empty'] = 'open-item';
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_item_closed_1']['type'] = 'list_key';
  /* Sorteringskriterie: Field collection item: Nummer (field_agenda_item_number) */
  $handler->display->display_options['sorts']['field_agenda_item_number_value']['id'] = 'field_agenda_item_number_value';
  $handler->display->display_options['sorts']['field_agenda_item_number_value']['table'] = 'field_data_field_agenda_item_number';
  $handler->display->display_options['sorts']['field_agenda_item_number_value']['field'] = 'field_agenda_item_number_value';
  /* Kontekstuelt filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_agenda_items_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'agenda' => 'agenda',
  );

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
    t('<p class=\'field\'><a href="#" class="toggle-expand-all"><span class=\'icon-double-angle-down\'></span> Udvid alle punkter</a></p>'),
    t('indholdselement'),
    t('Lukket punkt:'),
    t('<strong class="field-item">[field_agenda_item_number]. [field_agenda_item_closed] [field_agenda_item_caption]</strong>'),
    t('[field_agenda_item_content]
[field_agenda_item_docs]'),
    t('<label>Sagsnr:</label> [field_agenda_item_case_nr]<br />'),
    t('<label>Udvalg:</label> [field_agenda_item_com]<br />'),
    t('<label>Sagen afgøres i:</label> [field_agenda_item_com_dec]'),
    t('Bilag'),
    t('[field_agenda_item_docs] '),
    t('<p><em>Ingen bilag.</p></em>'),
    t('<p class="item-intro">
[php]
[field_agenda_item_case_nr]
[field_agenda_item_com]
</p>
[field_agenda_item_content]
<div class="bilag">
<h3>Bilag:</h3>
[field_agenda_item_docs]
</div>'),
    t('closed-item'),
    t('open-item'),
    t('Alle'),
    t('EVA Field'),
  );
  $export['agenda_accordion'] = $view;

  $view = new view();
  $view->name = 'agenda_overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agenda overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dagsordener';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Søg';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_agenda_date_1',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Overskrift: Global: Tekstområde */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Mødedatoer, dagsordener og referater fra %1</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Ingen dagsordener.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'span';
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_agenda_date']['id'] = 'field_agenda_date';
  $handler->display->display_options['fields']['field_agenda_date']['table'] = 'field_data_field_agenda_date';
  $handler->display->display_options['fields']['field_agenda_date']['field'] = 'field_agenda_date';
  $handler->display->display_options['fields']['field_agenda_date']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_date']['alter']['text'] = ' - [field_agenda_date]';
  $handler->display->display_options['fields']['field_agenda_date']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_agenda_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_date']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['field_agenda_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_agenda_date_1']['id'] = 'field_agenda_date_1';
  $handler->display->display_options['fields']['field_agenda_date_1']['table'] = 'field_data_field_agenda_date';
  $handler->display->display_options['fields']['field_agenda_date_1']['field'] = 'field_agenda_date';
  $handler->display->display_options['fields']['field_agenda_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_agenda_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_agenda_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_agenda_date_1']['settings'] = array(
    'format_type' => 'maaned',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_agenda_date) */
  $handler->display->display_options['sorts']['field_agenda_date_value']['id'] = 'field_agenda_date_value';
  $handler->display->display_options['sorts']['field_agenda_date_value']['table'] = 'field_data_field_agenda_date';
  $handler->display->display_options['sorts']['field_agenda_date_value']['field'] = 'field_agenda_date_value';
  $handler->display->display_options['sorts']['field_agenda_date_value']['order'] = 'DESC';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Kontekstuelt filter: Indhold: Udvalg (field_agenda_committee) */
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['id'] = 'field_agenda_committee_tid';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['table'] = 'field_data_field_agenda_committee';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['field'] = 'field_agenda_committee_tid';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['title'] = '%1';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['validate_options']['vocabularies'] = array(
    'edagsorden_committees' => 'edagsorden_committees',
  );
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_agenda_committee_tid']['validate']['fail'] = 'empty';
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
    'agenda' => 'agenda',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_agenda_date) */
  $handler->display->display_options['filters']['field_agenda_date_value']['id'] = 'field_agenda_date_value';
  $handler->display->display_options['filters']['field_agenda_date_value']['table'] = 'field_data_field_agenda_date';
  $handler->display->display_options['filters']['field_agenda_date_value']['field'] = 'field_agenda_date_value';
  $handler->display->display_options['filters']['field_agenda_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['operator_id'] = 'field_agenda_date_value_op';
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['label'] = 'Vælg år:';
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['operator'] = 'field_agenda_date_value_op';
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['identifier'] = 'aar';
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['field_agenda_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_agenda_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_agenda_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_agenda_date_value']['year_range'] = '-2:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'politik/dagsordener-og-referater/%';
  $handler->display->display_options['menu']['title'] = 'Dagsordener';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Embedded Page */
  $handler = $view->new_display('block', 'Embedded Page', 'embedded_page');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['block_description'] = 'Embedded Agendas';
  $translatables['agenda_overview'] = array(
    t('Master'),
    t('Dagsordener'),
    t('mere'),
    t('Søg'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('<h2>Mødedatoer, dagsordener og referater fra %1</h2>'),
    t('<p>Ingen dagsordener.</p>'),
    t(' - [field_agenda_date]'),
    t('Alle'),
    t('%1'),
    t('Vælg år:'),
    t('Page'),
    t('Embedded Page'),
    t('Embedded Agendas'),
  );
  $export['agenda_overview'] = $view;

  return $export;
}
