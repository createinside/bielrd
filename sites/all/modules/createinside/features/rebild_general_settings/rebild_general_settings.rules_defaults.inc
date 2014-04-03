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
      "LABEL" : "Redirect byraadspolitikere",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } },
        { "php_eval" : { "code" : "$test = drupal_get_destination();\\r\\nreturn $test;" } }
      ],
      "DO" : [
        { "redirect" : { "url" : "http:\\/\\/rebild.dk\\/politik\\/haandbog-politikere" } }
      ]
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
