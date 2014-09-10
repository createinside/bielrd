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
  $field_group->identifier = 'group_advanced|node|calendar_post|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calendar_post';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avancerede indstillinger',
    'weight' => '20',
    'children' => array(
      0 => 'field_main_allow_publishing',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Avancerede indstillinger',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|calendar_post|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_calendar_contact|node|calendar_post|default';
  $field_group->group_name = 'group_calendar_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calendar_post';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_calendar_info';
  $field_group->data = array(
    'label' => 'Kontaktoplysninger',
    'weight' => '6',
    'children' => array(
      0 => 'field_calender_email',
      1 => 'field_calender_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontaktoplysninger',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_calendar_contact|node|calendar_post|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_calendar_info|node|calendar_post|default';
  $field_group->group_name = 'group_calendar_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'calendar_post';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Praktisk info om arrangementet',
    'weight' => '2',
    'children' => array(
      0 => 'field_calendar_address',
      1 => 'field_calendar_date',
      2 => 'field_calendar_deadline',
      3 => 'field_calendar_organizer',
      4 => 'field_calendar_ticket_link',
      5 => 'group_calendar_contact',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Praktisk info om arrangementet',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_calendar_info|node|calendar_post|default'] = $field_group;

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
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_categories|node|calendar_post|form'] = $field_group;

  return $export;
}
