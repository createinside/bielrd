<?php
/* Alter the node calendar display, adding "tlf:" and "email:" labels before the data.  */
function misc_modifications_node_view_alter(&$build) {
	if (isset($build['field_calender_phone'][0]['#markup']) || isset($build['field_calender_email'][0]['#markup'])) {
		$number = $build['field_calender_phone'][0]['#markup'];
		$number_label = 'tlf: ' . $number ;
		$email = $build['field_calender_email'][0]['#markup'];
		$email_label = 'email: ' . $email;
		$build['field_calender_phone'][0]['#markup'] = $number_label;
		$build['field_calender_email'][0]['#markup'] = $email_label;
	}
}