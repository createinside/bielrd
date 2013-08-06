<?php
/**
 * @file
 * rebild_calendar.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_calendar_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|calendar_post|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calendar_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisering',
    'weight' => '13',
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
  $export['group_categories|node|calendar_post|form'] = $field_group;

  return $export;
}
