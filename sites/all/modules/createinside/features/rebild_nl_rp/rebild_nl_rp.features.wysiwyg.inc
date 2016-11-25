<?php
/**
 * @file
 * rebild_nl_rp.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function rebild_nl_rp_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: newsletter
  $profiles['newsletter'] = array(
    'format' => 'newsletter',
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
          'bullist' => 1,
          'numlist' => 1,
          'sup' => 1,
          'sub' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,h2,h3',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
      'buttonorder' => 'bold,italic,bullist,numlist,sup,sub',
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
