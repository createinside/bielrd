<?php

/**
 * Custom form submit that stores the form custom PDF filename
 *
 * @param $form
 * @param $form_state
 */
function bellcom_webform_custom_pdf_name_form_submit($form, $form_state) {
  $nid = $form_state['values']['nid'];
  $fields['nid'] = $nid;
  $fields['name'] = $form_state['values']['bellcom_webform_custom_pdf_name'];

   $query = db_select('bellcom_webform_custom_pdf_name');
  $query->condition('nid', $nid);
  $query->addExpression('COUNT(*)');
  $rows = $query->execute()->fetchField();

  if ($rows > 0) {
    $rows = db_update('bellcom_webform_custom_pdf_name')
    ->fields($fields)
    ->condition('nid', $nid)
    ->execute();
  }
  else {
    db_insert('bellcom_webform_custom_pdf_name')
      ->fields($fields)
      ->execute();
  }
}

/**
 * Theme function that returns the custom PDF name for the form. If no name is specified, a default one from theme_webform2pdf_filename is returned.
 *
 * @param $vars
 * @return string
 */
function bellcom_webform_webform2pdf_filename($vars) {
  $name = db_select('bellcom_webform_custom_pdf_name', 'b')
    ->fields('b', array('name'))
    ->condition('nid', $vars['node']->nid)
    ->execute()
    ->fetchField();

  if (!empty($name)) {
    $sid = is_object($vars['submission']) ? $vars['submission']->sid : $vars['submission'];

    $name = str_replace(array('@nid', '@sid'), array($vars['node']->nid, $sid) ,$name);
    return $name;
  } else {
    // call to a default function
    module_load_include('inc', 'webform2pdf.theme', 'includes/webform2pdf.theme');

    return theme_webform2pdf_filename($vars);
  }
}