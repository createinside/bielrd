<?php

function misc_modifications_rules_action_info() {
  $actions = array(
    'misc_modifications_action_1' => array(
      'group' => t('MISC'),
      'label' => t('node->workbench_moderation[updating_live_revision] = 1'),
      'parameter' => array(
        'node' => array(
          'type' => 'node',
          'label' => 'Node',
        ),
      ),
    ),
  );
  return $actions;
}

function misc_modifications_action_1($node) {
  $node->workbench_moderation['updating_live_revision'] = 1;
  node_save($update_node);
}

function misc_modifications_form_subscription_email_node_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'subscription_email_node_form') { // for nothing
    $form['metatags'][LANGUAGE_NONE]['basic']['description']['value']['#required'] = 0;
    $form['metatags']['en']['basic']['description']['value']['#required'] = 0;
    $form['metatags']['da']['basic']['description']['value']['#required'] = 0;
  }
}

// Mimic behaviour of (removed) php code in rules.
function misc_modifications_node_presave($node) {
  if ($node->type == 'subscription_email') {

    // Rule set "Service subscription mail: News".
    // https://stage.rebild.dk/admin/config/workflow/rules/components/manage/121
    // $subscription_email->field_subscription_attach_view[LANGUAGE_NONE][0]['view_id']
    //    = 'subscription_news:nyheder';
    // term:Nyheder, tid:127
    if ($node->field_subscription_list[LANGUAGE_NONE][0]['tid'] == 127) {
      $node->field_subscription_attach_view[LANGUAGE_NONE][0]['view_id'] = 'subscription_news:nyheder';
    }

    // Rule set "Service subscription mail: Offerings".
    // https://stage.rebild.dk/admin/config/workflow/rules/components/manage/125
    // $subscription_email->field_subscription_attach_view[LANGUAGE_NONE][0]['view_id']
    //    = 'subscription_offerings:nyheder';
    // term:Udbud, tid:128
    if ($node->field_subscription_list[LANGUAGE_NONE][0]['tid'] == 128) {
      $node->field_subscription_attach_view[LANGUAGE_NONE][0]['view_id'] = 'subscription_offerings:nyheder';
    }

  }
}
