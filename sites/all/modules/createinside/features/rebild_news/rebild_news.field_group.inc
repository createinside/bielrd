<?php
/**
 * @file
 * rebild_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|news_article|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avancerede indstillinger',
    'weight' => '33',
    'children' => array(
      0 => 'field_main_allow_publishing',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Avancerede indstillinger',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_advanced|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|news_article|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisering',
    'weight' => '6',
    'children' => array(
      0 => 'field_main_section',
      1 => 'field_main_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kategorisering',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Her kategoriseres dette indhold. OBS - ved tvivlsspørgsmål kontakt 
kommunikationsafdelingen.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_categories|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nyhed_bilgal|node|news_article|form';
  $field_group->group_name = 'group_nyhed_bilgal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nyhed_iof';
  $field_group->data = array(
    'label' => 'Billedgalleri',
    'weight' => '16',
    'children' => array(
      0 => 'field_main_image_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Billedgalleri',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_nyhed_bilgal|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nyhed_fakta|node|news_article|form';
  $field_group->group_name = 'group_nyhed_fakta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nyhed_iof';
  $field_group->data = array(
    'label' => 'Faktaboks',
    'weight' => '14',
    'children' => array(
      0 => 'field_main_factbox',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Faktaboks',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_nyhed_fakta|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nyhed_fodato|node|news_article|form';
  $field_group->group_name = 'group_nyhed_fodato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_nyhed_iof';
  $field_group->data = array(
    'label' => 'Forældelsesdato',
    'weight' => '15',
    'children' => array(
      0 => 'field_main_outdated',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Forældelsesdato',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_nyhed_fodato|node|news_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nyhed_iof|node|news_article|form';
  $field_group->group_name = 'group_nyhed_iof';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ikke obligatoriske felter',
    'weight' => '13',
    'children' => array(
      0 => 'group_nyhed_bilgal',
      1 => 'group_nyhed_fakta',
      2 => 'group_nyhed_fodato',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_nyhed_iof|node|news_article|form'] = $field_group;

  return $export;
}
