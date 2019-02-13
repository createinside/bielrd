<?php

/**
 * @file
 * Forms file
 */

/**
 * Form: draft confirmation.
 */
function webform_draft_authlink_webform_draft_confirmation_form($form, &$form_state, $webform, $submission) {
  global $user;

  $form['info'] = array(
    '#markup' => "<p>" . t('Do you want to receive this link by email?') . "</p>",
  );

  $form['mail'] = array(
    '#type' => 'textfield',
    '#title' => t('E-mail address'),
    '#default_value' => !empty($user->mail) ? $user->mail : NULL,
    '#required' => TRUE,
  );

  $form['actions'] = array(
    '#type' => 'container',
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Send email'),
  );

  return $form;
}

/**
 * Form validate callback: webform_draft_authlink_webform_draft_confirmation_form.
 */
function webform_draft_authlink_webform_draft_confirmation_form_validate(&$form, &$form_state) {

  // Validate the e-mail address, and check if it is taken by an existing user.
  if ($error = user_validate_mail($form_state['values']['mail'])) {
    form_set_error('mail', $error);
  }
}

/**
 * Form submit callback: webform_draft_authlink_webform_draft_confirmation_form.
 */
function webform_draft_authlink_webform_draft_confirmation_form_submit(&$form, &$form_state) {
  $webform = $form_state['build_info']['args'][0];
  $submission = $form_state['build_info']['args'][1];

  $mail = trim($form_state['values']['mail']);
  $success = webform_draft_authlink_webform_draft_user_mail_notify($webform, $submission, $mail);

  if ($success) {
    $message = t('The link has been sent to e-mail address %mail.', array('%mail' => $mail));
    drupal_set_message($message);
  }
}

