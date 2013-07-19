<?php
/**
 * @file
 * rebild_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rebild_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rebild_subpage';
  $context->description = 'Places the title block in the title region';
  $context->tag = 'theme';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'delta_blocks-page-title' => array(
          'module' => 'delta_blocks',
          'delta' => 'page-title',
          'region' => 'title',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places the title block in the title region');
  t('theme');
  $export['rebild_subpage'] = $context;

  return $export;
}
