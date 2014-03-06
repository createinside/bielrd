<?php
/**
 * @file
 * rebild_mail_subscription.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rebild_mail_subscription_default_rules_configuration() {
  $items = array();
  $items['rules_service_subscriber_add_double_opt_in'] = entity_import('rules_config', '{ "rules_service_subscriber_add_double_opt_in" : {
      "LABEL" : "Service subscriber add: double opt-in",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "service_subscription" ],
      "REQUIRES" : [ "rules", "mimemail", "mail_subscription" ],
      "ON" : [ "service_subscriber_add" ],
      "DO" : [
        { "mimemail" : {
            "to" : "[subscriber:field-sub-email]",
            "subject" : "Bekr\\u00e6ft tilmelding",
            "body" : "Klik p\\u00e5 nedenst\\u00e5ende link for at bekr\\u00e6fte din tilmelding:\\r\\n\\r\\n[subscriber:subscribe-url]"
          }
        }
      ]
    }
  }');
  $items['rules_service_subscriber_remove_double_opt_in'] = entity_import('rules_config', '{ "rules_service_subscriber_remove_double_opt_in" : {
      "LABEL" : "Service subscriber remove: double opt-in",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "mimemail", "mail_subscription" ],
      "ON" : [ "service_subscriber_remove" ],
      "DO" : [
        { "mimemail" : {
            "to" : "[subscriber:field-sub-email]",
            "subject" : "Bekr\\u00e6ft afmelding",
            "body" : "Klik p\\u00e5 nedenst\\u00e5ende link for at bekr\\u00e6fte din afmelding:\\r\\n\\r\\n[subscriber:unsubscribe-url]"
          }
        }
      ]
    }
  }');
  $items['rules_service_subscription_mail_news'] = entity_import('rules_config', '{ "rules_service_subscription_mail_news" : {
      "LABEL" : "Service subscription mail: News",
      "PLUGIN" : "rule set",
      "REQUIRES" : [
        "views_bulk_operations",
        "rules",
        "php",
        "mail_subscription",
        "rules_scheduler"
      ],
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "subscription_email" : "Subscription Email" } },
            "IF" : [
              { "views_bulk_operations_condition_result_count" : { "view" : "subscription_news|block_2", "minimum" : "1" } }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "subscription_email",
                    "param_title" : "Seneste nyheder",
                    "param_author" : [ "site:current-user" ]
                  },
                  "PROVIDE" : { "entity_created" : { "subscription_email" : "Subscription Email" } }
                }
              },
              { "data_set" : {
                  "data" : [ "subscription-email:field-subscription-list" ],
                  "value" : "105"
                }
              },
              { "php_eval" : { "code" : "$subscription_email-\\u003Efield_subscription_attach_view[LANGUAGE_NONE][0][\\u0022view_id\\u0022] = \\u0022subscription_news:nyheder\\u0022;" } },
              { "entity_save" : { "data" : [ "subscription-email" ], "immediate" : 1 } }
            ],
            "LABEL" : "Create entity"
          }
        },
        { "RULE" : {
            "IF" : [
              { "views_bulk_operations_condition_result_count" : { "view" : "subscription_news|block_2", "minimum" : "1" } }
            ],
            "DO" : [ { "mail_subscription_send" : { "node" : [ "subscription-email" ] } } ],
            "LABEL" : "Send email"
          }
        },
        { "RULE" : {
            "DO" : [
              { "schedule" : {
                  "component" : "rules_service_subscription_mail_news",
                  "date" : "tomorrow 12:00:00",
                  "identifier" : "subscription-mail-news"
                }
              }
            ],
            "LABEL" : "Reschedule"
          }
        }
      ]
    }
  }');
  $items['rules_service_subscription_mail_offerings'] = entity_import('rules_config', '{ "rules_service_subscription_mail_offerings" : {
      "LABEL" : "Service subscription mail: Offerings",
      "PLUGIN" : "rule set",
      "REQUIRES" : [
        "views_bulk_operations",
        "rules",
        "php",
        "mail_subscription",
        "rules_scheduler"
      ],
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : { "entity_created" : { "subscription_email" : "Subscription Email" } },
            "IF" : [
              { "views_bulk_operations_condition_result_count" : { "view" : "subscription_offerings|block_2", "minimum" : "1" } }
            ],
            "DO" : [
              { "entity_create" : {
                  "USING" : {
                    "type" : "node",
                    "param_type" : "subscription_email",
                    "param_title" : "Seneste udbud",
                    "param_author" : [ "site:current-user" ]
                  },
                  "PROVIDE" : { "entity_created" : { "subscription_email" : "Subscription Email" } }
                }
              },
              { "data_set" : {
                  "data" : [ "subscription-email:field-subscription-list" ],
                  "value" : "106"
                }
              },
              { "php_eval" : { "code" : "$subscription_email-\\u003Efield_subscription_attach_view[LANGUAGE_NONE][0][\\u0022view_id\\u0022] = \\u0022subscription_offerings:nyheder\\u0022;" } },
              { "entity_save" : { "data" : [ "subscription-email" ], "immediate" : 1 } }
            ],
            "LABEL" : "Create entity"
          }
        },
        { "RULE" : {
            "IF" : [
              { "views_bulk_operations_condition_result_count" : { "view" : "subscription_offerings|block_2", "minimum" : "1" } }
            ],
            "DO" : [ { "mail_subscription_send" : { "node" : [ "subscription-email" ] } } ],
            "LABEL" : "Send email"
          }
        },
        { "RULE" : {
            "DO" : [
              { "schedule" : {
                  "component" : "rules_service_subscription_mail_offerings",
                  "date" : "tomorrow 12:00:00",
                  "identifier" : "subscription-mail-offerings"
                }
              }
            ],
            "LABEL" : "Reschedule"
          }
        }
      ]
    }
  }');
  return $items;
}
