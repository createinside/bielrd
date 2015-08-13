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

	$element = filter_process_format($element);

	// Hide help text and guidelines from text fields with filters activated
	$element['format']['guidelines'] = FALSE;
	$element['format']['help'] = FALSE;

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