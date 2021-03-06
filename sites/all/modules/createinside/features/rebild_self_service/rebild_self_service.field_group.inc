<?php
/**
 * @file
 * rebild_self_service.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_self_service_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|self_service|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'self_service';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Avancerede indstillinger',
    'weight' => '14',
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
  $field_groups['group_advanced|node|self_service|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|self_service|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'self_service';
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
  $field_groups['group_categories|node|self_service|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Avancerede indstillinger');
  t('Kategorisering');

  return $field_groups;
}
