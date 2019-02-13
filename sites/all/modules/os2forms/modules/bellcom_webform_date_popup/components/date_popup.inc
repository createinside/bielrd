<?php

function _webform_defaults_date_popup() {
  return array(
    'name' => '',
    'form_key' => NULL,
    'pid' => 0,
    'weight' => 0,
    'value' => '',
    'required' => 0,
    'extra' => array(),
  );
}

function _webform_theme_date_popup() {
  return array(
    'webform_display_date_popup' => array(
      'render element' => 'element',
    ),
  );
}

function _webform_render_date_popup($component, $value = NULL, $filter = TRUE) {
  if ($component['required'])
    $prefix = '<div class = "datepicker-wrap"><div class="row"><div class="col-sm-6"><div class="form-group form-item"><label for="select-test">' . $component['name'] . '<span class="form-required" title="Dette felt er obligatorisk.">*</span></label><div class="input-group date">';
  else
    $prefix = '<div class = "datepicker-wrap"><div class="row"><div class="col-sm-6"><div class="form-group form-item"><label for="select-test">' . $component['name'] . '</label><div class="input-group date">';

  $element = array(
    '#type' => 'textfield',
    '#prefix' => $prefix,
    '#suffix' => '<span class="input-group-addon"><i class="icon__calendar"></i></span></div><div class = "description">'.$component['extra']['description'].'</div></div></div></div></div>',
    '#required' => $component['required'],
    '#weight' => $component['weight'],
    '#default_value' => empty($component['value']) ? '' : date('d/m/Y', strtotime($component['value'])),
    '#attributes' => array(
      'placeholder' => 'dd/mm/yyyy',
    )
  );
  if ($component['required']) {
    $element['#attributes']['required'] = 'required';
  }
  return $element;
}

function _webform_display_date_popup($component, $value, $format = 'html') {
  return array(
    '#title' => $component['name'],
    '#weight' => $component['weight'],
    '#theme' => 'webform_display_date_popup',
    '#theme_wrappers' => $format == 'html' ? array('webform_element') : array('webform_element_text'),
    '#format' => $format,
    '#description' => $component['extra']['description'],
    '#required' => $component['required'],
    '#value' => $value[0],
    '#translatable' => array('title', 'field_prefix', 'field_suffix'),
  );
}

function theme_webform_display_date_popup($variables) {
  $element = $variables['element'];
  $value = $element['#value'];
  return trim($value) !== '' ? $value : ' ';
}

function _webform_table_date_popup($component, $value) {
  return check_plain(empty($value[0]) ? '' : $value[0]);
}

/**
 * Implements _webform_edit_component().
 */
function _webform_edit_date_popup($component) {
  $form = array();
  $form['value'] = array(
    '#type' => 'textfield',
    '#title' => t('Default value'),
    '#default_value' => $component['value'],
    '#description' => t('The default value of the field.') . '<br />' . t('Accepts any date in any <a href="http://www.gnu.org/software/tar/manual/html_chapter/Date-input-formats.html">GNU Date Input Format</a>. Strings such as today, +2 months, and Dec 9 2004 are all valid.'),
    '#size' => 60,
    '#maxlength' => 127,
    '#weight' => 0,
  );
  $form['required'] = array(
    '#type' => 'checkbox',
    '#title' => t('Required'),
    '#default_value' => $component['required'],
    '#description' => t('Marker hvis feltet skal udfyldes med en værdi.'),
    '#weight' => 1,
  );

  return $form;
}