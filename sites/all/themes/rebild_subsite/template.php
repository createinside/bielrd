<?php

/**
 * Implements hook_preprocess_html.
 */
function rebild_subsite_preprocess_html(&$variables) {

  // Add jQuery UI.
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.accordion');

  // Remove sidebar class from frontpage
  if($variables['is_front']) {
    foreach($variables['classes_array'] as $key => $value) {
      if($value == 'one-sidebar sidebar-first') {
        unset($variables['classes_array'][$key]);
      }
    }
  }
}

/**
 * Implements hook_css_alter().
 */
function rebild_subsite_css_alter(&$css) {

  // Disable CSS files.
  $disabled_drupal_css = array(
    'misc/ui/jquery.ui.core.css',
    'misc/ui/jquery.ui.theme.css',
    'sites/all/modules/field_collection/field_collection.theme.css'
  );

  // Remove drupal default css files.
  foreach ($css as $key => $item) {
    if (in_array($key, $disabled_drupal_css)) {
      // Remove css and its altered version that can be added by jquety_update.
      unset($css[$css[$key]['data']]);
      unset($css[$key]);
    }
  }

}

/**
 * Implements theme_breadcrumb().
 */
function rebild_subsite_breadcrumb(&$variables) {

  if (count($variables['breadcrumb']) > 0) {

    $variables['breadcrumb'][0] = l(rebild_subsite_icon_display('home'), '<front>', array('html' => TRUE));

    $crumbs = '<div class="breadcrumb">';
    foreach($variables['breadcrumb'] as $value) {
      $crumbs .= '<div class="breadcrumb-item">'. $value . '</div>';
      $crumbs .= '<div class="breadcrumb-sep">' . rebild_subsite_icon_display('chevron-thin-right') . '</div>';
    }
    $crumbs .= '<div class="breadcrumb-item current-item">'. drupal_get_title() . '</div>';
    $crumbs .= '</div>';
    return $crumbs;
  }
}

/**
 * Implements theme_preprocess_menu_link().
 */
function rebild_subsite_menu_link(&$variables) {

  $element = $variables['element'];
  $sub_menu = '';
  $icon = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if ($element['#original_link']['menu_name'] == 'main-menu' && $element['#original_link']['depth'] == 2) {

    if($element['#original_link']['in_active_trail'] && $element['#below']) {
      $icon = rebild_subsite_icon_display('chevron-thin-down');
    }
    else {
      $icon = rebild_subsite_icon_display('chevron-thin-right');
    }
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . $icon . "</li>\n";
}

/**
 * Display SVG icon.
 */
function rebild_subsite_icon_display($id) {
  $markup = "";
  $markup .= "<svg class='icon icon-$id'>";
  $markup .= "<use xlink:href='/" . drupal_get_path('theme', 'rebild_subsite') . "/assets/dist/svg/symbols.min.svg#$id' />";
  $markup .= "</svg>";

  return $markup;
}

/**
 * Implements theme_preprocess_region().
 */
function rebild_subsite_preprocess_region(&$variables, $hook) {

  if ($variables['region'] == 'footer') {
    // Get the count of blocks
    $count = count(element_children($variables['elements']));

    // Add the class if necessary
    if ($count == 1) {
      $variables['classes_array'][] = 'contains-one';
    }
    if ($count == 2) {
      $variables['classes_array'][] = 'contains-two';
    }
    if ($count == 3) {
      $variables['classes_array'][] = 'contains-three';
    }
  }
}

function rebild_subsite_form_alter(&$form, &$form_state, $form_id) {

  switch($form_id) {

    case "search_block_form":
      // Add icon
      $form['icon'] = array(
        '#markup' => '<a href="#" class="search-toggle">' . rebild_subsite_icon_display('search') . '</a>'
      );
      // Placeholder
      $form['search_block_form']['#attributes']['placeholder'] = t('Search here...');
    break;
  }
}
