<?php
/**
 * @file
 * rebild_general_settings.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function rebild_general_settings_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'rebild_frontpage';
  $context->description = 'Adjusts the grid for the frontpage layout';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'rebild_frontpage',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adjusts the grid for the frontpage layout');
  $export['rebild_frontpage'] = $context;

  return $export;
}
