<?php
/**
 * @file
 * rebild_page.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function rebild_page_default_breakpoint_group() {
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
  $breakpoint_group->machine_name = 'indhold_top';
  $breakpoint_group->name = 'indhold_top';
  $breakpoint_group->breakpoints = $breakpoints;
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['indhold_top'] = $breakpoint_group;

  return $export;
}
