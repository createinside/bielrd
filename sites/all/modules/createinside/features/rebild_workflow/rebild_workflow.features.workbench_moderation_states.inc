<?php
/**
 * @file
 * rebild_workflow.features.workbench_moderation_states.inc
 */

/**
 * Implements hook_workbench_moderation_export_states().
 */
function rebild_workflow_workbench_moderation_export_states() {
  $items = array(
    'draft' => array(
      'name' => 'draft',
      'label' => 'Udkast',
      'description' => 'Igangværende arbejde',
      'weight' => -10,
    ),
    'needs_review' => array(
      'name' => 'needs_review',
      'label' => 'Sendt til godkendelse',
      'description' => 'Klar til at blive gennemset',
      'weight' => -8,
    ),
    'published' => array(
      'name' => 'published',
      'label' => 'Udgivet',
      'description' => 'Udgiv dette indhold',
      'weight' => -6,
    ),
    'revised' => array(
      'name' => 'revised',
      'label' => 'Revideret',
      'description' => 'Gennemset og revideret',
      'weight' => -9,
    ),
  );
  return $items;
}
