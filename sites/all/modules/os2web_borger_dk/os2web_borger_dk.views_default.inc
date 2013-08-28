<?php
/**
 * @file
 * os2web_borger_dk.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function os2web_borger_dk_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_sidebar_borger_dk_read_also';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content sidebar borger_dk - read also';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Felt: Indhold: Recommended */
  $handler->display->display_options['fields']['field_os2web_borger_dk_recommend']['id'] = 'field_os2web_borger_dk_recommend';
  $handler->display->display_options['fields']['field_os2web_borger_dk_recommend']['table'] = 'field_data_field_os2web_borger_dk_recommend';
  $handler->display->display_options['fields']['field_os2web_borger_dk_recommend']['field'] = 'field_os2web_borger_dk_recommend';
  $handler->display->display_options['fields']['field_os2web_borger_dk_recommend']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_borger_dk_recommend']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Legislation */
  $handler->display->display_options['fields']['field_os2web_borger_dk_legislati']['id'] = 'field_os2web_borger_dk_legislati';
  $handler->display->display_options['fields']['field_os2web_borger_dk_legislati']['table'] = 'field_data_field_os2web_borger_dk_legislati';
  $handler->display->display_options['fields']['field_os2web_borger_dk_legislati']['field'] = 'field_os2web_borger_dk_legislati';
  $handler->display->display_options['fields']['field_os2web_borger_dk_legislati']['label'] = '';
  $handler->display->display_options['fields']['field_os2web_borger_dk_legislati']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Indhold: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Indhold: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'os2web_borger_dk_article' => 'os2web_borger_dk_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['content_sidebar_borger_dk_read_also'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Alle'),
    t('Block'),
    t('more'),
  );
  $export['content_sidebar_borger_dk_read_also'] = $view;

  return $export;
}
