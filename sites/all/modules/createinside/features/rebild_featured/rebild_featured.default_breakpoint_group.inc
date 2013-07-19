<?php
/**
 * @file
 * rebild_featured.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function rebild_featured_default_breakpoint_group() {
  $export = array();

  // Breakpoints.
  $breakpoints = array();
  $breakpoints[] = 'custom.user.mobile';
  $breakpoints[] = 'custom.user.narrow';
  $breakpoints[] = 'custom.user.normal';

  // Breakpoint group.
  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'blok';
  $breakpoint_group->name = 'blok';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['blok'] = $breakpoint_group;

  return $export;
}
