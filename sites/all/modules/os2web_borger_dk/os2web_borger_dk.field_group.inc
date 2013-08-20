<?php
/**
 * @file
 * os2web_borger_dk.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function os2web_borger_dk_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_article_text|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_article_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Article text',
    'weight' => '28',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Article text',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_article_text|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_byline|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_byline';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Byline',
    'weight' => '29',
    'children' => array(
      0 => 'field_os2web_borger_dk_byline',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_borger_dk_byline|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_diverse|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_diverse';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Diverse',
    'weight' => '22',
    'children' => array(
      0 => 'group_borger_dk_header',
      1 => 'group_borger_dk_article_text',
      2 => 'group_borger_dk_byline',
      3 => 'group_borger_dk_portalservice',
      4 => 'group_borger_dk_legislation',
      5 => 'group_borger_dk_recommended',
      6 => 'group_borger_dk_shortlist',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_borger_dk_diverse|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_header|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Header tekst',
    'weight' => '27',
    'children' => array(
      0 => 'field_os2web_borger_dk_header',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Header tekst',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_header|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_kategori|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_kategori';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisering',
    'weight' => '18',
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
  $export['group_borger_dk_kategori|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_legislation|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_legislation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Legislation',
    'weight' => '31',
    'children' => array(
      0 => 'field_os2web_borger_dk_legislati',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Legislation',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_legislation|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_portalservice|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_portalservice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Portalservice',
    'weight' => '30',
    'children' => array(
      0 => 'field_os2web_borger_dk_selfservi',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Portalservice',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_portalservice|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_recommended|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_recommended';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Recommended',
    'weight' => '32',
    'children' => array(
      0 => 'field_os2web_borger_dk_recommend',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Recommended',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_recommended|node|os2web_borger_dk_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_borger_dk_shortlist|node|os2web_borger_dk_article|form';
  $field_group->group_name = 'group_borger_dk_shortlist';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'os2web_borger_dk_article';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_borger_dk_diverse';
  $field_group->data = array(
    'label' => 'Shortlist',
    'weight' => '33',
    'children' => array(
      0 => 'field_os2web_borger_dk_shortlist',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Shortlist',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_borger_dk_shortlist|node|os2web_borger_dk_article|form'] = $field_group;

  return $export;
}
