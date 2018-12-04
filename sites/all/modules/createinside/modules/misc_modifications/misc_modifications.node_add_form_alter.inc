<?php

/* hook_form_alter - tilføjer class til alle fields, således vi kan påføre en generel styling backend. */
function misc_modifications_form_alter(&$form, &$form_state, $form_id) {
	$indholdstyper = node_type_get_types();
		
	/* Vi kører en løkke der finder frem til alle machine names på indholdstyperne, og herefter laver vi en form alter. */
	foreach(element_children($indholdstyper) as $key) {
		if ($form_id == ($indholdstyper[$key]->type . '_node_form')) {			

			if (isset($form['#fieldgroups']['group_advanced'])) {
				$form['#fieldgroups']['group_advanced']->weight = 200;
			}
			if (isset($form['#fieldgroups']['group_adv'])) {
				$form['#fieldgroups']['group_adv']->weight = 200;
			}
				
			if(isset($form['field_main_allow_publishing'])) {
				if ($form['field_main_allow_publishing']['und']['#default_value'] == 1) {
					drupal_set_message('OBS! Denne side kan udgives af fagredaktører. Så snart du trykker ’Gem’ er alle ændringer udgivet.', 'warning');
				}
			}
			/* Tilføjer description til titel feltet */					
			$form['title']["#description"] = "Indholdets overskrift.";
			foreach(element_children($form) as $key) {
				$form[$key]['#attributes']['class'][] = 'general_field_styling';
			}
		}
	}
	
	/* Ændring af class på profil siden, samt tvinger metatag fieldset til at være åbent. */
	if ($form_id == 'user_profile_form') {
		foreach(element_children($form) as $key) {
				$form[$key]['#attributes']['class'][] = 'general_field_styling';
			}			
		$form['metatags']['#collapsible'] = FALSE;

	}
	
	/* Ved fil edit fjerner vi replace upload og redirect feltet. Fordi felterne virker overflødige */
	if ($form_id == 'file_entity_edit') {
		// unset($form['replace_upload']);
		unset($form['redirect']);
	}
	
	/* Ændringer ved bean oprettelse/edit */
	if ($form_id == 'bean_form') {
		$form['label']['#description'] = "Etiketten vises kun i den administrative brugergrænseflade.";
		$form['title']['#required'] = FALSE;
		$form['title']['#description'] = 'Blokkens overskrift.';
		unset($form['redirect']);
		$form['field_billede']['#weight'] = 2;
		$form['field_bean_short_text']['#weight'] = 2;
		$form['field_bean_link']['#weight'] = 3;
		$form['field_bean_intern_link']['#weight'] = 3;
	}
		
	/* Page Extended Node Form*/
	if($form_id=='page_extended_node_form') {
		
		// Alter submit string
		$form['field_main_sections']['und']['add_more']['#value'] = 'Tilføj sektion';	
	}

	// Allow publishing node.
  if (!empty($form['field_main_allow_publishing'])) {
    $form['#submit'][] = 'misc_modifications_allow_publishing_submit_action';
  }
}

/**
 * Submit action to auto publish if value set.
 */
function misc_modifications_allow_publishing_submit_action($form, &$form_state) {

  if (!empty($form_state['values']['field_main_allow_publishing']['und'][0]['value'])) {
    // If user has role "fagredaktør".
    if (user_has_role(4)) {
      global $user;
      $logged_name = (user_is_anonymous() ? variable_get('anonymous', t('Anonymous')) : format_username($user));

      $form_state['values']['workbench_moderation_state_new'] = workbench_moderation_state_published();
      $form_state['values']['revision'] = 1;
      $form_state['values']['log'] = t('Edited by !user.', array('!user' => $logged_name));
      $form_state['values']['status'] = 1;
    }
  }
}
