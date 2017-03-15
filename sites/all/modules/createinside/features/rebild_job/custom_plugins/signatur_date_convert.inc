<?php

$plugin = array(
	'form' => 'rebild_job_signatur_date_convert_form',
	'callback' => 'rebild_job_signatur_date_convert_callback',
	'name' => 'Signatur: Date Converter',
	'multi' => 'loop'
);

function rebild_job_signatur_date_convert_form($importer, $element_key, $settings) {
	$form = array();
	$form['help'] = array(
	 '#value' => 'Converts date into the right format.',
	);
	return $form;
}

function rebild_job_signatur_date_convert_callback($result, $item_key, $element_key, &$field, $settings) {
  $str_date = $field;
  $obj_date = DateTime::createFromFormat('d.m.y', $str_date);
  $field = $obj_date->getTimestamp();
}
