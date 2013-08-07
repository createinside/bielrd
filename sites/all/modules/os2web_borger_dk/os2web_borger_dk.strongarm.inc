<?php
/**
 * @file
 * os2web_borger_dk.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function os2web_borger_dk_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_os2web_borger_dk_article';
  $strongarm->value = 0;
  $export['comment_anonymous_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_os2web_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_default_mode_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_os2web_borger_dk_article';
  $strongarm->value = '50';
  $export['comment_default_per_page_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_os2web_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_form_location_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_os2web_borger_dk_article';
  $strongarm->value = '0';
  $export['comment_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_os2web_borger_dk_article';
  $strongarm->value = '1';
  $export['comment_preview_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_os2web_borger_dk_article';
  $strongarm->value = 1;
  $export['comment_subject_field_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__os2web_borger_dk_article';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'related_block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'meeting_detail_view' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'metatags' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '16',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_os2web_borger_dk_article';
  $strongarm->value = '0';
  $export['language_content_type_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_os2web_borger_dk_article';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_os2web_borger_dk_article';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_os2web_borger_dk_article';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_os2web_borger_dk_article';
  $strongarm->value = '1';
  $export['node_preview_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_os2web_borger_dk_article';
  $strongarm->value = 0;
  $export['node_submitted_os2web_borger_dk_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_display';
  $strongarm->value = array(
    'title' => 'title',
    'body' => 'body',
    'field_billede' => 'field_billede',
    'field_os2web_borger_dk_borgerurl' => 'field_os2web_borger_dk_borgerurl',
    'field_os2web_borger_dk_byline' => 'field_os2web_borger_dk_byline',
    'field_os2web_borger_dk_header' => 'field_os2web_borger_dk_header',
    'field_os2web_borger_dk_legislati' => 'field_os2web_borger_dk_legislati',
    'field_os2web_borger_dk_pagetitle' => 'field_os2web_borger_dk_pagetitle',
    'field_os2web_borger_dk_post_text' => 'field_os2web_borger_dk_post_text',
    'field_os2web_borger_dk_pre_text' => 'field_os2web_borger_dk_pre_text',
    'field_os2web_borger_dk_recommend' => 'field_os2web_borger_dk_recommend',
    'field_os2web_borger_dk_selfservi' => 'field_os2web_borger_dk_selfservi',
    'field_os2web_borger_dk_shortlist' => 'field_os2web_borger_dk_shortlist',
    'field_main_section' => 'field_main_section',
    'field_main_tags' => 'field_main_tags',
  );
  $export['os2web_borger_dk_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_editable';
  $strongarm->value = array(
    'field_billede' => 'field_billede',
    'field_os2web_borger_dk_post_text' => 'field_os2web_borger_dk_post_text',
    'field_os2web_borger_dk_pre_text' => 'field_os2web_borger_dk_pre_text',
    'field_main_section' => 'field_main_section',
    'field_main_tags' => 'field_main_tags',
    'title' => 0,
    'body' => 0,
    'field_os2web_borger_dk_byline' => 0,
    'field_os2web_borger_dk_header' => 0,
    'field_os2web_borger_dk_legislati' => 0,
    'field_os2web_borger_dk_pagetitle' => 0,
    'field_os2web_borger_dk_recommend' => 0,
    'field_os2web_borger_dk_selfservi' => 0,
    'field_os2web_borger_dk_shortlist' => 0,
  );
  $export['os2web_borger_dk_editable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_municipality_active';
  $strongarm->value = '840';
  $export['os2web_borger_dk_municipality_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_municipality_list';
  $strongarm->value = array(
    0 => '--Not selected--',
    165 => 'Albertslund',
    201 => 'Allerød',
    420 => 'Assens',
    151 => 'Ballerup',
    530 => 'Billund',
    400 => 'Bornholm',
    153 => 'Brøndby',
    810 => 'Brønderslev',
    155 => 'Dragør',
    240 => 'Egedal',
    561 => 'Esbjerg',
    563 => 'Fanø',
    710 => 'Favrskov',
    320 => 'Faxe',
    210 => 'Fredensborg',
    607 => 'Fredericia',
    147 => 'Frederiksberg',
    813 => 'Frederikshavn',
    250 => 'Frederikssund',
    190 => 'Furesø',
    430 => 'Faaborg-Midtfyn',
    157 => 'Gentofte',
    159 => 'Gladsaxe',
    161 => 'Glostrup',
    253 => 'Greve',
    270 => 'Gribskov',
    376 => 'Guldborgsund',
    510 => 'Haderslev',
    260 => 'Halsnæs',
    766 => 'Hedensted',
    217 => 'Helsingør',
    163 => 'Herlev',
    657 => 'Herning',
    219 => 'Hillerød',
    860 => 'Hjørring',
    316 => 'Holbæk',
    661 => 'Holstebro',
    615 => 'Horsens',
    167 => 'Hvidovre',
    169 => 'Høje-Taastrup',
    223 => 'Hørsholm',
    756 => 'Ikast-Brande',
    183 => 'Ishøj',
    849 => 'Jammerbugt',
    326 => 'Kalundborg',
    440 => 'Kerteminde',
    621 => 'Kolding',
    101 => 'København',
    259 => 'Køge',
    482 => 'Langeland',
    350 => 'Lejre',
    665 => 'Lemvig',
    360 => 'Lolland',
    173 => 'Lyngby-Taarbæk',
    825 => 'Læsø',
    846 => 'Mariagerfjord',
    410 => 'Middelfart',
    773 => 'Morsø',
    707 => 'Norddjurs',
    480 => 'Nordfyns',
    450 => 'Nyborg',
    370 => 'Næstved',
    727 => 'Odder',
    461 => 'Odense',
    306 => 'Odsherred',
    730 => 'Randers',
    840 => 'Rebild',
    760 => 'Ringkøbing-Skjern',
    329 => 'Ringsted',
    265 => 'Roskilde',
    230 => 'Rudersdal',
    175 => 'Rødovre',
    741 => 'Samsø',
    740 => 'Silkeborg',
    746 => 'Skanderborg',
    779 => 'Skive',
    330 => 'Slagelse',
    269 => 'Solrød',
    340 => 'Sorø',
    336 => 'Stevns',
    671 => 'Struer',
    479 => 'Svendborg',
    706 => 'Syddjurs',
    540 => 'Sønderborg',
    787 => 'Thisted',
    550 => 'Tønder',
    185 => 'Tårnby',
    187 => 'Vallensbæk',
    573 => 'Varde',
    575 => 'Vejen',
    630 => 'Vejle',
    820 => 'Vesthimmerland',
    791 => 'Viborg',
    390 => 'Vordingborg',
    492 => 'Ærø',
    580 => 'Aabenraa',
    851 => 'Aalborg',
    751 => 'Aarhus',
  );
  $export['os2web_borger_dk_municipality_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_nightly_article_sync';
  $strongarm->value = '3';
  $export['os2web_borger_dk_nightly_article_sync'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'os2web_borger_dk_titles_search_auto_submit';
  $strongarm->value = 0;
  $export['os2web_borger_dk_titles_search_auto_submit'] = $strongarm;

  return $export;
}
