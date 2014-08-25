<?php
/**
 * @file
 * rebild_bean.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_bean_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'frontpage_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Frontpage Blocks';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Forbindelse: Blok: Blok (field_front_block) */
  $handler->display->display_options['relationships']['field_front_block_value']['id'] = 'field_front_block_value';
  $handler->display->display_options['relationships']['field_front_block_value']['table'] = 'field_data_field_front_block';
  $handler->display->display_options['relationships']['field_front_block_value']['field'] = 'field_front_block_value';
  $handler->display->display_options['relationships']['field_front_block_value']['label'] = 'Field Collection';
  $handler->display->display_options['relationships']['field_front_block_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_front_block_value']['delta'] = '-1';
  /* Felt: Field collection item: Link */
  $handler->display->display_options['fields']['field_front_block_link']['id'] = 'field_front_block_link';
  $handler->display->display_options['fields']['field_front_block_link']['table'] = 'field_data_field_front_block_link';
  $handler->display->display_options['fields']['field_front_block_link']['field'] = 'field_front_block_link';
  $handler->display->display_options['fields']['field_front_block_link']['relationship'] = 'field_front_block_value';
  $handler->display->display_options['fields']['field_front_block_link']['label'] = '';
  $handler->display->display_options['fields']['field_front_block_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_block_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_block_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_front_block_link']['type'] = 'link_plain';
  /* Felt: Field collection item: Billede */
  $handler->display->display_options['fields']['field_front_block_image']['id'] = 'field_front_block_image';
  $handler->display->display_options['fields']['field_front_block_image']['table'] = 'field_data_field_front_block_image';
  $handler->display->display_options['fields']['field_front_block_image']['field'] = 'field_front_block_image';
  $handler->display->display_options['fields']['field_front_block_image']['relationship'] = 'field_front_block_value';
  $handler->display->display_options['fields']['field_front_block_image']['label'] = '';
  $handler->display->display_options['fields']['field_front_block_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_block_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_front_block_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_front_block_image']['settings'] = array(
    'image_style' => 'front_block',
    'image_link' => '',
  );
  /* Felt: Field collection item: Titel */
  $handler->display->display_options['fields']['field_front_block_title']['id'] = 'field_front_block_title';
  $handler->display->display_options['fields']['field_front_block_title']['table'] = 'field_data_field_front_block_title';
  $handler->display->display_options['fields']['field_front_block_title']['field'] = 'field_front_block_title';
  $handler->display->display_options['fields']['field_front_block_title']['relationship'] = 'field_front_block_value';
  $handler->display->display_options['fields']['field_front_block_title']['label'] = '';
  $handler->display->display_options['fields']['field_front_block_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_block_title']['element_label_colon'] = FALSE;
  /* Felt: Field collection item: Undertitel */
  $handler->display->display_options['fields']['field_front_block_text']['id'] = 'field_front_block_text';
  $handler->display->display_options['fields']['field_front_block_text']['table'] = 'field_data_field_front_block_text';
  $handler->display->display_options['fields']['field_front_block_text']['field'] = 'field_front_block_text';
  $handler->display->display_options['fields']['field_front_block_text']['relationship'] = 'field_front_block_value';
  $handler->display->display_options['fields']['field_front_block_text']['label'] = '';
  $handler->display->display_options['fields']['field_front_block_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_front_block_text']['element_label_colon'] = FALSE;
  /* Felt: Global: Tilpasset tekst */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_front_block_link]">
<span class="title">[field_front_block_title]</span>
<span class="subtitle">[field_front_block_text]</span>
[field_front_block_image]
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filterkriterie: Blok: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forsideblokke' => 'forsideblokke',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'Forsideblokke';
  $translatables['frontpage_blocks'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Field Collection'),
    t('<a href="[field_front_block_link]">
<span class="title">[field_front_block_title]</span>
<span class="subtitle">[field_front_block_text]</span>
[field_front_block_image]
</a>'),
    t('Block'),
    t('Forsideblokke'),
  );
  $export['frontpage_blocks'] = $view;

  return $export;
}
