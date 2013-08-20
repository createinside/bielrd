<?php
/**
 * @file
 * rebild_user_profile.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_user_profile_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medarb_opl|user|user|form';
  $field_group->group_name = 'group_medarb_opl';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Medarbejder oplysninger',
    'weight' => '1',
    'children' => array(
      0 => 'field_user_navn',
      1 => 'field_user_tlf',
      2 => 'field_user_jobtitel',
      3 => 'field_user_center',
      4 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Medarbejder oplysninger',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_medarb_opl|user|user|form'] = $field_group;

  return $export;
}
