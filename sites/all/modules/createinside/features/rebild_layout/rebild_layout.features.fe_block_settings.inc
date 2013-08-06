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
      'rebild' => array(
        'region' => 'mobile_menu',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Menu',
    'visibility' => 0,
  );

  $export['block-boirebild_menublok'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_block_container',
    'custom' => 0,
    'machine_name' => 'boirebild_menublok',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_bo_i_rebild',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Hvad søger du efter?',
    'visibility' => 0,
  );

  $export['block-borger_menublock'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_block_container',
    'custom' => 0,
    'machine_name' => 'borger_menublock',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_borger',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Hvad søger du efter?',
    'visibility' => 0,
  );

  $export['block-erhverv_menublock'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_block_container',
    'custom' => 0,
    'machine_name' => 'erhverv_menublock',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_erhverv',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Hvad søger du efter?',
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
      'rebild' => array(
        'region' => 'user_second',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => 'ultimenu_main_politik',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => 'bottom',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -25,
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
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -26,
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
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -25,
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
      'rebild' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -27,
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
      'rebild' => array(
        'region' => 'header_second',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => 'postscript_first',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-10'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 10,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_third',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Erhverv',
    'visibility' => 0,
  );

  $export['menu_block-11'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 11,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_fourth',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Politik',
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
      'rebild' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'rebild',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-3'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_container',
    'custom' => 0,
    'delta' => 3,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_borger',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -22,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-4'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_container',
    'custom' => 0,
    'delta' => 4,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_erhverv',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -20,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-5'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_container',
    'custom' => 0,
    'delta' => 5,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_politik',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-6'] = array(
    'cache' => -1,
    'css_class' => 'rebild_menu_container',
    'custom' => 0,
    'delta' => 6,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'ultimenu_main_bo_i_rebild',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -27,
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
      'rebild' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -22,
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
      'rebild' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-9'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 9,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'rebild' => array(
        'region' => 'footer_second',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => 0,
      ),
    ),
    'title' => 'Borger',
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
      'rebild' => array(
        'region' => 'menu',
        'status' => 1,
        'theme' => 'rebild',
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
      'rebild' => array(
        'region' => 'content_sidebar',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -36,
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
      'rebild' => array(
        'region' => 'content_sidebar',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -37,
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
      'rebild' => array(
        'region' => 'content_sidebar',
        'status' => 1,
        'theme' => 'rebild',
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
