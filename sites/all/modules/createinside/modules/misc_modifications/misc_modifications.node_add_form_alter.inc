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
		$form['title']['#required'] = TRUE;
		$form['title']['#description'] = 'Blokkens overskrift.';
		unset($form['redirect']);
		$form['field_billede']['#weight'] = 2;
		$form['field_bean_short_text']['#weight'] = 2;
		$form['field_bean_link']['#weight'] = 3;
		$form['field_bean_intern_link']['#weight'] = 3;
	}
		
	/* Page Extended Node Form*/
	if($form_id=='page_extended_node_form') {
		
		// Remove all field groups in sections
		//unset($form['field_main_sections']['und'][0]['#fieldgroups']);
		
		// Alter submit string
		$form['field_main_sections']['und']['add_more']['#value'] = 'Tilføj sektion';	
	}	
}

function misc_modifications_field_group_build_pre_render_alter(&$element) {
	
	if($element['#bundle']=='field_main_sections') {
		/*
		// Group: Text
		$element['group_sec_txt']['#states'] = array(
		  'visible' => array(
		    '#edit-field-main-sections-und-'.$element['#delta'].'-field-sec-type-und' => array('value' => 'sec_txt'),
		  ),
		);
		$element['group_sec_txt']['#id'] = 'sec-txt-'.$element['#delta'];
		
		// Group: Text and Image
		$element['group_sec_txt_img']['#states'] = array(
		  'visible' => array(
		    '#edit-field-main-sections-und-'.$element['#delta'].'-field-sec-type-und' => array('value' => 'sec_txt_img'),
		  ),
		);
		$element['group_sec_txt_img']['#id'] = 'sec-txt-img-'.$element['#delta'];
		
		// Group: Accordion
		$element['group_sec_acc']['#states'] = array(
		  'visible' => array(
		    '#edit-field-main-sections-und-'.$element['#delta'].'-field-sec-type-und' => array('value' => 'sec_acc'),
		  ),
		);
		$element['group_sec_acc']['#id'] = 'sec-acc-'.$element['#delta'];
		
		// Group: Selfservice
		$element['group_sec_ses']['#states'] = array(
		  'visible' => array(
		    '#edit-field-main-sections-und-'.$element['#delta'].'-field-sec-type-und' => array('value' => 'sec_ses'),
		  ),
		);
		$element['group_sec_ses']['#id'] = 'sec-ses-'.$element['#delta'];
		*/
	}
}

function misc_modifications_field_widget_form_alter(&$element, &$form_state, $context) {

	if($element['#bundle'] == 'field_main_sections' && $element['#field_name'] == 'field_sec_type') {
		if($element['#default_value'][0]!='') {
			$element['#disabled'] = TRUE;
		}
	}
	
	if($element['#bundle'] == 'field_main_sections' && !empty($element['#fieldgroups'])) {
		unset($element['#fieldgroups']);
	}
}

?>