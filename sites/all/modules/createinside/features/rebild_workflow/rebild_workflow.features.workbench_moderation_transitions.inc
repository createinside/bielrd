<?php
/**
 * @file
 * rebild_workflow.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function rebild_workflow_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
    ),
    'needs_review:published_needs_review' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published_needs_review',
    ),
    'needs_review:revised' => array(
      'from_name' => 'needs_review',
      'to_name' => 'revised',
    ),
    'published:draft' => array(
      'from_name' => 'published',
      'to_name' => 'draft',
    ),
    'published_needs_review:needs_review' => array(
      'from_name' => 'published_needs_review',
      'to_name' => 'needs_review',
    ),
    'revised:needs_review' => array(
      'from_name' => 'revised',
      'to_name' => 'needs_review',
    ),
  );
  return $items;
}
