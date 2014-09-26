<?php
/**
 * @file
 * rebild_general_settings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rebild_general_settings_default_rules_configuration() {
  $items = array();
  $items['rules_redirect_byraadspolitikere'] = entity_import('rules_config', '{ "rules_redirect_byraadspolitikere" : {
      "LABEL" : "Redirect byraadspolitikere efter login",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } },
        { "OR" : [
            { "text_matches" : {
                "text" : [ "site:current-page:path" ],
                "match" : "user",
                "operation" : "ends"
              }
            },
            { "text_matches" : {
                "text" : [ "site:current-page:url" ],
                "match" : "politik\\/haandbog-politikere"
              }
            }
          ]
        }
      ],
      "DO" : [
        { "redirect" : { "url" : "http:\\/\\/rebild.dk\\/politik\\/haandbog-politikere" } }
      ]
    }
  }');
  $items['rules_redirect_politiker_efter_opdatering_af_profil'] = entity_import('rules_config', '{ "rules_redirect_politiker_efter_opdatering_af_profil" : {
      "LABEL" : "Redirect politiker efter opdatering af profil",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_update" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "7" : "7" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "politik\\/haandbog-politikere" } } ]
    }
  }');
  $items['rules_redirect_til_brugeroversigt_efter_login'] = entity_import('rules_config', '{ "rules_redirect_til_brugeroversigt_efter_login" : {
      "LABEL" : "Redirect til brugeroversigt efter login",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } },
        { "text_matches" : {
            "text" : [ "site:current-page:path" ],
            "match" : "user",
            "operation" : "ends"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\/people" } } ]
    }
  }');
  return $items;
}
