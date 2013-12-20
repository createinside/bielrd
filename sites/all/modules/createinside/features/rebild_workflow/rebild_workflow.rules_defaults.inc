<?php
/**
 * @file
 * rebild_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function rebild_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_new_revision_on_published_needs_review_state'] = entity_import('rules_config', '{ "rules_new_revision_on_published_needs_review_state" : {
      "LABEL" : "New revision on published needs review state",
      "PLUGIN" : "rule",
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "DO" : [
        { "data_set" : { "data" : [ "node:revision" ], "value" : 1 } },
        { "workbench_moderation_set_state_during_save" : { "node" : [ "node" ], "moderation_state" : "published_needs_review" } },
        { "entity_save" : { "data" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_opdater_for_ldelsesdato'] = entity_import('rules_config', '{ "rules_opdater_for_ldelsesdato" : {
      "LABEL" : "Opdater for\\u00e6ldelsesdato",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "node_update" ],
      "IF" : [
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_main_outdated" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-main-outdated" ], "value" : "+3 months" } }
      ]
    }
  }');
  $items['rules_outdated_content_checker'] = entity_import('rules_config', '{ "rules_outdated_content_checker" : {
      "LABEL" : "Outdated content checker",
      "PLUGIN" : "rule",
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "views_bulk_operations", "rules", "rules_scheduler" ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "outdated_content|default" },
            "PROVIDE" : { "entity_list" : { "nodes" : "Nodes" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "nodes" ] },
            "ITEM" : { "node" : "Node" },
            "DO" : [
              { "component_rules_outdated_content_processor" : { "node" : [ "node" ] } }
            ]
          }
        },
        { "schedule" : {
            "component" : "rules_outdated_content_checker",
            "date" : "+1 day",
            "identifier" : "outdated-content-checker"
          }
        }
      ]
    }
  }');
  $items['rules_outdated_content_processor'] = entity_import('rules_config', '{ "rules_outdated_content_processor" : {
      "LABEL" : "Outdated content processor",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "php" ],
      "USES VARIABLES" : { "node" : { "label" : "Node", "type" : "node" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_main_outdated" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "kasper@createinside.com",
            "subject" : "Gennemse indhold p\\u00e5 [site:name]",
            "message" : "Dette er en automatisk p\\u00e5mindelse om at gennemse og om n\\u00f8dvendigt opdatere f\\u00f8lgende indhold:\\r\\n\\r\\nTitel:\\r\\n[node:title]\\r\\nLink:\\r\\n[node:url]\\r\\n\\r\\nDu f\\u00e5r denne email, fordi du er angivet som forfatter af ovenst\\u00e5ende indhold. ",
            "language" : [ "" ]
          }
        },
        { "data_set" : { "data" : [ "node:field-main-outdated" ], "value" : "+3 months" } },
        { "php_eval" : { "code" : "$node-\\u003Eworkbench_moderation[\\u0027updating_live_revision\\u0027] = 1;\\r\\n\\r\\n" } }
      ]
    }
  }');
  $items['rules_redirect_til_workbench_efter_login'] = entity_import('rules_config', '{ "rules_redirect_til_workbench_efter_login" : {
      "LABEL" : "Redirect til workbench efter login",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "user_login" ],
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4", "5" : "5", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "admin\\/workbench" } } ]
    }
  }');
  $items['rules_workbench_moderation_published_needs_review'] = entity_import('rules_config', '{ "rules_workbench_moderation_published_needs_review" : {
      "LABEL" : "Workbench moderation: Published needs review",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published_needs_review" } },
        { "NOT contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "published" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published_needs_review" } }
      ],
      "DO" : [
        { "workbench_moderation_set_state" : {
            "node" : [ "node" ],
            "moderation_state" : "published",
            "force_transition" : 1
          }
        },
        { "component_rules_new_revision_on_published_needs_review_state" : { "node" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_workflow_email_draft_needs_review'] = entity_import('rules_config', '{ "rules_workflow_email_draft_needs_review" : {
      "LABEL" : "Workflow email: Draft =\\u003E Needs review",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "draft" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "Indhold klar til godkendelse",
            "message" : "F\\u00f8lgende indhold er netop sendt til godkendelse:\\r\\n\\r\\nTitel: [node:title]\\r\\nForfatter: [node:author]\\r\\nLink:[node:edit-url]\\r\\n\\r\\nSe indholdet igennem og revid\\u00e9r eller public\\u00e9r."
          }
        }
      ]
    }
  }');
  $items['rules_workflow_email_needs_review_published'] = entity_import('rules_config', '{ "rules_workflow_email_needs_review_published" : {
      "LABEL" : "Workflow email: Needs review =\\u003E Published",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "published" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Indhold er blevet udgivet",
            "message" : "F\\u00f8lgende indhold er netop blevet godkendt og udgivet:\\r\\n\\r\\nTitel: [node:title]\\r\\nLink: [node:url]\\r\\n\\r\\nDu f\\u00e5r denne email, da du er angivet som forfatter af dette indhold.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_workflow_email_needs_review_revised'] = entity_import('rules_config', '{ "rules_workflow_email_needs_review_revised" : {
      "LABEL" : "Workflow email: Needs review =\\u003E Revised",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "revised" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [ "node:author:mail" ],
            "subject" : "Dit indhold er blevet revideret",
            "message" : "F\\u00f8lgende indhold er netop blevet revideret og skal gennemses af dig:\\r\\n\\r\\nTitel: [node:title]\\r\\nForfatter: [node:author]\\r\\nLink: [node:edit-url]\\r\\n\\r\\nSe \\u00e6ndringerne igennem og send til godkendelse igen, hvis du ikke har yderligere at tilf\\u00f8je.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_workflow_email_revised_needs_review'] = entity_import('rules_config', '{ "rules_workflow_email_revised_needs_review" : {
      "LABEL" : "Workflow email: Revised =\\u003E Needs review",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "TAGS" : [ "workflow" ],
      "REQUIRES" : [ "workbench_moderation", "rules" ],
      "ON" : [ "workbench_moderation_after_moderation_transition" ],
      "IF" : [
        { "content_is_using_workbench_moderation" : { "node" : [ "node" ] } },
        { "contents_previous_state" : { "node" : [ "node" ], "moderation_state" : "revised" } },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "needs_review" } }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "5" : "5" } },
            "subject" : "Indhold klar til godkendelse",
            "message" : "F\\u00f8lgende indhold er netop sendt til godkendelse:\\r\\n\\r\\nTitel: [node:title]\\r\\nForfatter: [node:author]\\r\\nLink:[node:edit-url]\\r\\n\\r\\nSe indholdet igennem og revid\\u00e9r eller public\\u00e9r."
          }
        }
      ]
    }
  }');
  return $items;
}
