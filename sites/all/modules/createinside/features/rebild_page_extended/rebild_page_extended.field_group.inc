<?php
/**
 * @file
 * rebild_page_extended.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_page_extended_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_categories|node|page_extended|form';
  $field_group->group_name = 'group_main_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_extended';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisering',
    'weight' => '11',
    'children' => array(
      0 => 'field_main_section',
      1 => 'field_main_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kategorisering',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_main_categories|node|page_extended|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_links|node|page_extended|form';
  $field_group->group_name = 'group_main_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_extended';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Læs mere',
    'weight' => '9',
    'children' => array(
      0 => 'field_main_links_external',
      1 => 'field_main_links_internal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Læs mere',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_main_links|node|page_extended|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_other_elems|node|page_extended|form';
  $field_group->group_name = 'group_main_other_elems';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_extended';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sekundære elementer',
    'weight' => '10',
    'children' => array(
      0 => 'field_main_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sekundære elementer',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_main_other_elems|node|page_extended|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_main_sidebar|node|page_extended|form';
  $field_group->group_name = 'group_main_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page_extended';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '9',
    'children' => array(
      0 => 'field_main_factbox',
      1 => 'group_main_links',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_main_sidebar|node|page_extended|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_txt_misc|paragraphs_item|text|form';
  $field_group->group_name = 'group_sec_txt_misc';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'text';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Faktaboks',
    'weight' => '1',
    'children' => array(
      0 => 'field_main_factbox',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Faktaboks',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_sec_txt_misc|paragraphs_item|text|form'] = $field_group;

  return $export;
}
