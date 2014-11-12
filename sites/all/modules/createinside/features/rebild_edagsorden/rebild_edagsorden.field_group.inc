<?php
/**
 * @file
 * rebild_edagsorden.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_edagsorden_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_agenda_metadata|node|agenda|form';
  $field_group->group_name = 'group_agenda_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'agenda';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '6',
    'children' => array(
      0 => 'field_agenda_id',
      1 => 'field_agenda_root_id',
      2 => 'field_agenda_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_agenda_metadata|node|agenda|form'] = $field_group;

  return $export;
}
