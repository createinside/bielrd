<?php
/**
 * @file
 * rebild_announcement.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rebild_announcement_default_rules_configuration() {
  $items = array();
  $items['rules_delete_expired_announcements_action'] = entity_import('rules_config', '{ "rules_delete_expired_announcements_action" : {
      "LABEL" : "Delete expired announcements",
      "PLUGIN" : "action set",
      "REQUIRES" : [ "views_bulk_operations", "rules", "rules_scheduler" ],
      "ACTION SET" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "expired_announcements|default" },
            "PROVIDE" : { "entity_list" : { "announcements" : "Announcements" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "announcements" ] },
            "ITEM" : { "announcement" : "Announcement" },
            "DO" : [
              { "entity_delete" : { "data" : [ "announcement" ] } },
              { "drupal_message" : { "message" : "Expired announcement [announcement:title] has been deleted." } }
            ]
          }
        },
        { "schedule" : {
            "component" : "rules_delete_expired_announcements_action",
            "date" : "+1 week",
            "identifier" : "Delete expired announcements."
          }
        }
      ]
    }
  }');
  return $items;
}
