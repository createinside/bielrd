<?php 
/**
* Fjerner de advancerede indstillinger ved metatags, og gør felter obligatoriske.
**/

// hook_metatag_info_alter
function misc_modifications_metatag_info_alter(&$info) {
	
		unset($info['tags']['abstract']);
		unset($info['tags']['keywords']);
		unset($info['groups']['advanced']);
		unset($info['tags']['robots']);
		unset($info['tags']['news_keywords']);
		unset($info['tags']['generator']);
		unset($info['tags']['copyright']);
		unset($info['tags']['image_src']);
		unset($info['tags']['canonical']);
		unset($info['tags']['shortlink']);
		unset($info['tags']['publisher']);
		unset($info['tags']['author']);
		unset($info['tags']['original-source']);
		$info['tags']['description']['form']['#required'] = TRUE;
		$info['tags']['title']['form']['#required'] = TRUE;

}

?>