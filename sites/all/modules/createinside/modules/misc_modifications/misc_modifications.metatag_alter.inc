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
  unset($info['tags']['standout']);
  unset($info['tags']['rating']);
  unset($info['tags']['referrer']);
  unset($info['tags']['rights']);
  unset($info['tags']['set_cookie']);
  unset($info['tags']['prev']);
  unset($info['tags']['next']);
  unset($info['tags']['content-language']);
  unset($info['tags']['geo.position']);
  unset($info['tags']['geo.placename']);
  unset($info['tags']['geo.region']);
  unset($info['tags']['icbm']);
  unset($info['tags']['refresh']);
  unset($info['tags']['revisit-after']);
  unset($info['tags']['pragma']);
  unset($info['tags']['cache-control']);
  unset($info['tags']['expires']);
  $info['tags']['description']['form']['#required'] = TRUE;
  $info['tags']['title']['form']['#required'] = TRUE;
}
