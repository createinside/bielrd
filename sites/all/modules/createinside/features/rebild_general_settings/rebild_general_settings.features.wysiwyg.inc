<?php
/**
 * @file
 * rebild_general_settings.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function rebild_general_settings_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 0,
      'theme' => 'advanced',
      'language' => 'da',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'formatselect' => 1,
          'paste' => 1,
          'removeformat' => 1,
        ),
        'paste' => array(
          'pasteword' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'none',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4',
      'css_setting' => 'self',
      'css_path' => 'sites/all/themes/rebild/css/wysiwyg.css',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'da',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'justifyleft' => 1,
          'justifycenter' => 1,
          'justifyright' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'anchor' => 1,
          'image' => 1,
          'cleanup' => 1,
          'formatselect' => 1,
          'styleselect' => 1,
          'visualaid' => 1,
          'removeformat' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 0,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 0,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3,h4,h5,h6,div',
      'css_setting' => 'self',
      'css_path' => 'sites/all/themes/rebild/css/wysiwyg.css',
      'css_classes' => '',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
