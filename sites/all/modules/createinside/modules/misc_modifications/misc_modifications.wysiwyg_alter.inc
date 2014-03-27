<?php
/**
* Opstilling af restriktioner på felter, hvorpå vi fjerne elementer (wysiwyg guidelines og yderligere hjælp).
**/ 	

// hook_element_info_alter 
function misc_modifications_element_info_alter(&$type) {
	if (isset($type['text_format']['#process'])) {
		foreach ($type['text_format']['#process'] as &$callback) {
			if ($callback === 'filter_process_format') {
				$callback = 'misc_modifications_process_format';
			}
		}
	}
	
}
// hook_process_format
function misc_modifications_process_format($element) {
	// array af de felter som skal have restriktioner
	$fields = array(
		'field_main_body',
		'body',
		'field_agenda_item_content',
		'field_consultation_disclaimer',
		'field_main_factbox',
		'field_accordion_text',

	);

	$element = filter_process_format($element);

	// Skjul de hjælpetekster fra wysiwyg editor, der hører til de ovenstående definerede felter. 
	if (isset($element['#field_name']) && in_array($element['#field_name'], $fields)){

		$element['format']['guidelines'] = FALSE;
		$element['format']['help'] = FALSE;
	}
	return $element;
}

/**
 * LinkIt
 */
function misc_modifications_linkit_attributes($profile) {
  $attributes['anchor'] = array(
    '#type' => 'textfield',
    '#title' => "Accordionpunkt",
    '#description' => "Indtast et tal for at linke direkte til et accordionpunkt. Eks. 2 for det andet punkt i listen.",
    '#maxlength' => 255,
    '#size' => 40,
    '#default_value' => '',
    '#weight' => isset($profile->data['attributes']['anchor']['weight']) ? $profile->data['attributes']['anchor']['weight'] : 0,
  );

  return $attributes;
}