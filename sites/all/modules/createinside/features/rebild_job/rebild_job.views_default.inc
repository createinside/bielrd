<?php
/**
 * @file
 * rebild_job.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rebild_job_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rebild_job_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Jobs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Jobs';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_job_category',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Overskrift */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Ansøgningsfrist */
  $handler->display->display_options['fields']['field_job_deadline']['id'] = 'field_job_deadline';
  $handler->display->display_options['fields']['field_job_deadline']['table'] = 'field_data_field_job_deadline';
  $handler->display->display_options['fields']['field_job_deadline']['field'] = 'field_job_deadline';
  $handler->display->display_options['fields']['field_job_deadline']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_job_deadline']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_job_deadline']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Felt: Indhold: Kategori */
  $handler->display->display_options['fields']['field_job_category']['id'] = 'field_job_category';
  $handler->display->display_options['fields']['field_job_category']['table'] = 'field_data_field_job_category';
  $handler->display->display_options['fields']['field_job_category']['field'] = 'field_job_category';
  $handler->display->display_options['fields']['field_job_category']['label'] = '';
  $handler->display->display_options['fields']['field_job_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_job_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_job_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_job_category']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_job_category']['delta_offset'] = '0';
  /* Sorteringskriterie: Indhold: Ansøgningsfrist (field_job_deadline) */
  $handler->display->display_options['sorts']['field_job_deadline_value']['id'] = 'field_job_deadline_value';
  $handler->display->display_options['sorts']['field_job_deadline_value']['table'] = 'field_data_field_job_deadline';
  $handler->display->display_options['sorts']['field_job_deadline_value']['field'] = 'field_job_deadline_value';
  /* Sorteringskriterie: Indhold: Overskrift */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'job' => 'job',
  );

  /* Display: Blok */
  $handler = $view->new_display('block', 'Blok', 'block_1');
  $handler->display->display_options['block_description'] = 'Job list';
  $translatables['rebild_job_list'] = array(
    t('Master'),
    t('Jobs'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Ansøgningsfrist'),
    t('Blok'),
    t('Job list'),
  );
  $export['rebild_job_list'] = $view;

  return $export;
}
