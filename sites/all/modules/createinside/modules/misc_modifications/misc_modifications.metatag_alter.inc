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

/**
 * Removes meta tag configurations from the listed entities
 *
 * implements hook_entity_info_alter.
 */
function misc_modifications_entity_info_alter(&$info) {

	// This array holds all the entitiy machince names where meta tags should be disabled
	$entities = array("user", "file", "taxonomy_term");
	$content_types = array("featured_article", "self_service", "simplenews");
	
	foreach($entities as $entity) {
	  $info[$entity]['metatags'] = FALSE;
	}
	
	foreach($content_types as $content_type) {
		$info["node"]["bundles"][$content_type]["metatags"] = FALSE;
	}
}

?>