<?php

/**
 * @file
 * Module¡s pages file.
 */

/**
 * Page callback: submission draft confirmation page.
 * @param type $webform
 * @return string
 */
function webform_draft_authlink_webform_draft_confirmation_page($webform) {

  module_load_include('inc', 'webform', 'includes/webform.submissions');
  module_load_include('inc', 'webform_draft_authlink', 'includes/webform_draft_authlink.forms');

  $qp = drupal_get_query_parameters();

  $content = '<p>' . t('Please copy & save this link to continue with your form later:') . '</p>';

  $sid = $qp['sid'];
  $draft_authlink = !empty($qp['webform_draft_authlink']) ? trim($qp['webform_draft_authlink']) : NULL;
  $submission = webform_get_submission($webform->nid, $sid);

  $path = 'node/' . $webform->nid;
  $options = array(
    'query' => array(
      'webform_draft_authlink' => $draft_authlink,
    ),
    'absolute' => TRUE,
  );
  $link = url($path, $options);
  $content .= '<p class="link">' . l($link, $path, $options) . '</p>';

  // Form:
  $form = drupal_get_form('webform_draft_authlink_webform_draft_confirmation_form', $webform, $submission);
  $content .= render($form);

  return $content;
}
