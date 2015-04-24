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
    'weight' => '10',
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
      'formatter' => 'collapsed',
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
  $field_group->parent_name = 'group_main_sidebar';
  $field_group->data = array(
    'label' => 'Læs mere',
    'weight' => '10',
    'children' => array(
      0 => 'field_main_links_external',
      1 => 'field_main_links_internal',
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
  $export['group_main_links|node|page_extended|form'] = $field_group;

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
  $field_group->identifier = 'group_sec_acc|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_acc';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accordion',
    'weight' => '4',
    'children' => array(
      0 => 'field_main_accordion',
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
  $export['group_sec_acc|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_gal|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_gal';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Billedgalleri',
    'weight' => '6',
    'children' => array(
      0 => 'field_main_image_gallery',
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
  $export['group_sec_gal|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_gis|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_gis';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'GIS-kort',
    'weight' => '7',
    'children' => array(
      0 => 'field_main_gis_map',
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
  $export['group_sec_gis|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_nav|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_nav';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Navigationsliste',
    'weight' => '9',
    'children' => array(
      0 => 'field_sec_nav_image',
      1 => 'field_sec_nav_body',
      2 => 'field_sec_nav_title',
      3 => 'field_sec_nav_elment',
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
  $export['group_sec_nav|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_pdf|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_pdf';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'PDF-liste',
    'weight' => '8',
    'children' => array(
      0 => 'field_sec_pdf_file',
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
  $export['group_sec_pdf|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_ses|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_ses';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Selvbetjening',
    'weight' => '5',
    'children' => array(
      0 => 'field_main_selfservice',
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
  $export['group_sec_ses|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_txt_img|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_txt_img';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tekst og billede',
    'weight' => '3',
    'children' => array(
      0 => 'field_sec_txt_img_body',
      1 => 'field_sec_txt_img_image',
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
  $export['group_sec_txt_img|field_collection_item|field_main_sections|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sec_txt|field_collection_item|field_main_sections|form';
  $field_group->group_name = 'group_sec_txt';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_main_sections';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '2',
    'children' => array(
      0 => 'field_sec_txt_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tekst',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_sec_txt|field_collection_item|field_main_sections|form'] = $field_group;

  return $export;
}
