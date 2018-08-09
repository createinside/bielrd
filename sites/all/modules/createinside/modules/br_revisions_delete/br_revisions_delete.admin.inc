<?php

/**
 * @file
 * File containing administration content.
 */

/**
 * Configuration settings form.
 */
function br_revisions_delete_settings_form($form, &$form_state) {
  $form = array();

  $form['br_revisions_delete_batch'] = array(
    '#type' => 'fieldset',
    '#title' => t('Delete old revisions manually'),
  );

  $form['br_revisions_delete_batch']['run'] = array(
    '#type' => 'submit',
    '#value' => t('Run batch'),
    '#submit' => array('br_revisions_delete_run_batch'),
  );

  $form['br_revisions_delete_cron_active'] = array(
    '#type' => 'checkbox',
    '#title' => t('Delete revisions automatically'),
    '#description' => t('Delete revisions when cron runs.'),
    '#default_value' => variable_get('br_revisions_delete_cron_active'),
  );

  $types = node_type_get_types();

  if (!empty($types)) {
    foreach ($types as $type) {
      $form['br_revisions_delete_node_type-' . $type->type] = array(
        '#type' => 'fieldset',
        '#title' => $type->name,
        '#tree' => TRUE,
        '#collapsible' => TRUE,
      );

      $values = variable_get('br_revisions_delete_node_type-' . $type->type);

      $form['br_revisions_delete_node_type-' . $type->type]['active'] = array(
        '#type' => 'checkbox',
        '#title' => t('Delete revisions'),
        '#description' => t('If activated old revisions for this type will be permanantly deleted.'),
        '#default_value' => $values['active'],
      );
      $form['br_revisions_delete_node_type-' . $type->type]['minimum_revisions_to_keep'] = array(
        '#type' => 'textfield',
        '#title' => t('Number of revisions to keep'),
        '#description' => t('The minimum amount of revisions to keep.'),
        '#default_value' => ($values['minimum_revisions_to_keep']) ? $values['minimum_revisions_to_keep'] : 10,
        '#element_validate' => array('element_validate_integer_positive'),
        '#required' => TRUE,
      );
      $form['br_revisions_delete_node_type-' . $type->type]['older_than_days_back_limit'] = array(
        '#type' => 'textfield',
        '#title' => t('Delete revisions older than (days)'),
        '#description' => t('Revisions older than set number of days will be deleted.'),
        '#default_value' => ($values['older_than_days_back_limit']) ? $values['older_than_days_back_limit'] : 365,
        '#element_validate' => array('element_validate_integer_positive'),
        '#required' => TRUE,
      );
    }
  }
  return system_settings_form($form);
}
