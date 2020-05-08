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
  $names = array(
    '. jan ', '. febr ', '. marts ', '. april ', '. maj ', '. juni ',
    '. juli ', '. aug ', '. sept ', '. okt ', '. nov ', '. dec '
  );
  $numbers = array(
    '-01-', '-02-', '-03-', '-04', '-05-', '-06-',
    '-07-', '-08-', '-09-', '-10-', '-11-', '-12-'
  );
  // convert danish time-format to something parsable
  //[xpathparser:6] => 16. maj 2020
  $str_date = str_replace($names, $numbers, $str_date);
  $obj_date = DateTime::createFromFormat('d-m-Y', $str_date);
  $field = $obj_date->getTimestamp();
}
