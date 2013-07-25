<?php 
function misc_modifications_workbench_content_alter(&$output) {
	//dpm($output);
}
function misc_modifications_menu_alter(&$items) {
	
	$items['admin/workbench']['title'] = 'Min profilside';

}
?>