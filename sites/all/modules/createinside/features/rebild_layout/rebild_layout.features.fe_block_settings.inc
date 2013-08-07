<?php
/**
 * @file
 * rebild_layout.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function rebild_layout_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['accordion_menu-1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 1,
    'module' => 'accordion_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['block-mobile_header'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'mobile_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-politik_menublock'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_block_container',
    'custom' => 0,
    'machine_name' => 'politik_menublock',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => 'Hvad søger du efter?',
    'visibility' => 0,
  );

  $export['block-rebild_bottom'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_bottom',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_contact_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_contact_front',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => 'Kontakt Rebild Kommune',
    'visibility' => 1,
  );

  $export['block-rebild_footer_contact'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_footer_contact_2'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_contact_2',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_footer_logo'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_footer_logo',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-rebild_search_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_search_front',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-rebild_shortcuts_front'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'machine_name' => 'rebild_shortcuts_front',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '5 genveje',
    'visibility' => 1,
  );

  $export['menu-menu-secondary-menu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-13'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 13,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-7'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 7,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-8'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 8,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ultimenu-main-menu'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'ultimenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-786babaac62385638de52f7a93ace3f0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '786babaac62385638de52f7a93ace3f0',
    'module' => 'views',
    'node_types' => array(
      0 => 'os2web_borger_dk_article',
      1 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-content_sidebar_most_read-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'content_sidebar_most_read-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'os2web_borger_dk_article',
      1 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-content_sidebar_read_also-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'content_sidebar_read_also-block',
    'module' => 'views',
    'node_types' => array(
      0 => 'cloned_page',
      1 => 'os2web_borger_dk_article',
      2 => 'page',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'alpha' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'alpha',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
