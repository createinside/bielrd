<?php
/**
 * @file
 * rebild_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rebild_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accordion|node|page|form';
  $field_group->group_name = 'group_accordion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'Accordion',
    'weight' => '17',
    'children' => array(
      0 => 'field_main_accordion',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Accordion',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_accordion|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_billedegalleri|node|page|form';
  $field_group->group_name = 'group_billedegalleri';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'Billedegalleri',
    'weight' => '18',
    'children' => array(
      0 => 'field_main_image_gallery',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Billedegalleri',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_billedegalleri|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blocks|node|page|form';
  $field_group->group_name = 'group_blocks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '16',
    'children' => array(
      0 => 'field_main_links_external',
      1 => 'field_main_links_internal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_blocks|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|page|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kategorisering',
    'weight' => '4',
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
  $export['group_categories|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faktaboks|node|page|form';
  $field_group->group_name = 'group_faktaboks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'Faktaboks',
    'weight' => '15',
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
  $export['group_faktaboks|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_foraeldelsesdato|node|page|form';
  $field_group->group_name = 'group_foraeldelsesdato';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'Forældelsesdato',
    'weight' => '19',
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
  $export['group_foraeldelsesdato|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gis_kort|node|page|form';
  $field_group->group_name = 'group_gis_kort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ho_tabs';
  $field_group->data = array(
    'label' => 'GIS-kort',
    'weight' => '20',
    'children' => array(
      0 => 'field_main_gis_map',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'GIS-kort',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_gis_kort|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ho_tabs|node|page|form';
  $field_group->group_name = 'group_ho_tabs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ikke obligatoriske felter',
    'weight' => '5',
    'children' => array(
      0 => 'group_accordion',
      1 => 'group_billedegalleri',
      2 => 'group_blocks',
      3 => 'group_faktaboks',
      4 => 'group_foraeldelsesdato',
      5 => 'group_gis_kort',
      6 => 'group_oversigt',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_ho_tabs|node|page|form'] = $field_group;

  return $export;
}
