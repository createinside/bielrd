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
  $items['rules_redirect_til_brugeroversigt_efter_login'] = entity_import('rules_config', '{ "rules_redirect_til_brugeroversigt_efter_login" : {
      "LABEL" : "Redirect til brugeroversigt efter login",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "6" : "6" } } } },
        { "NOT user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "1" : "1", "2" : "2", "4" : "4", "5" : "5", "3" : "3" } }
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\u002Fpeople" } } ]
    }
  }');
  return $items;
}
