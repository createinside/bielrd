<?php 

/**
* Sætter en class og indstiller rækkefølgen på udtræk (views). 
**/

// hook_workbench_content_alter
function misc_modifications_workbench_content_alter(&$output) {
	// definere en class til de forskellige views
	$output['workbench_current_user']['#attributes']['class'][0] = 'right';
	$output['workbench_edited']['#attributes']['class'][0] = 'left';
	$output['workbench_recent_content']['#attributes']['class'][0] = 'needs_attention';
	$output['workbench_recent_content2']['#attributes']['class'][0] = 'all_recent_content';
	
	$output['workbench_current_user']['#view'] = 'workbench_rebild_current_user';
	
	// Vi opretter et array med et block view for "kræver opmærksomhed" 
	$output['workbench_recent_content']['#view'] = 'workbench_moderation';
	$output['workbench_recent_content']['#view_display'] = 'needs_review';

	// Vi opretter et nyt array med views som vi outputter efter de ovenstående views.
	$output['workbench_recent_content2']['#view'] = 'workbench_recent_content';
	$output['workbench_recent_content2']['#view_display'] = 'block_1';
	$output['workbench_recent_content2']['#theme'] = 'workbench_element';
	dpm($output);
}

// hook_menu_alter - ændrer titel og tilføjer nyt link til workbench tab menu.
function misc_modifications_menu_alter(&$items) {
	
	$items['admin/workbench']['title'] = 'Min profilside';
	$items['admin/workbench/create']['title'] = '+ Opret indhold';

}
?>