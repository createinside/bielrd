<?php
/**
 * @file
 * rebild_sub_formatting.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function rebild_sub_formatting_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'BulletedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'PasteFromWord' => 1,
          'RemoveFormat' => 1,
          'Format' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'theme' => '',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 1,
      'acf_mode' => 0,
      'acf_allowed_content' => '',
      'css_setting' => 'theme',
      'css_theme' => 'seven',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,h2,h3',
      'forcePasteAsPlainText' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 0,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 0,
      'version' => '4.9.2.95e5d83',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
