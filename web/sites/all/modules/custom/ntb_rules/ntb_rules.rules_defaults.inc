<?php

/**
 * @file
 * ntb_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ntb_rules_default_rules_configuration() {
  $items = array();
  $items['rules_activate_user_whith_snils'] = entity_import('rules_config', '{ "rules_activate_user_whith_snils" : {
      "LABEL" : "\\u0410\\u043a\\u0442\\u0438\\u0432\\u0430\\u0446\\u0438\\u044f \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u0435\\u0439 \\u0441\\u043e \\u0421\\u041d\\u0418\\u041b\\u0421 (\\u043a\\u043b\\u043e\\u043d\\u0438\\u0440\\u043e\\u0432\\u0430\\u043d\\u043e)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "snils" : { "label" : "Snils", "type" : "node" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "user:field-fio" ], "value" : [ "snils:title" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "user:status" ], "value" : "1" } },
        { "drupal_message" : { "message" : "\\u0412\\u0430\\u0448\\u0430 \\u0443\\u0447\\u0435\\u0442\\u043d\\u0430\\u044f \\u0437\\u0430\\u043f\\u0438\\u0441\\u044c \\u0430\\u043a\\u0442\\u0438\\u0432\\u0438\\u0440\\u043e\\u0432\\u0430\\u043d\\u0430." } }
      ]
    }
  }');
  $items['rules_activate_users_with_snils'] = entity_import('rules_config', '{ "rules_activate_users_with_snils" : {
      "LABEL" : "\\u0410\\u043a\\u0442\\u0438\\u0432\\u0430\\u0446\\u0438\\u044f \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u0435\\u0439 \\u0441\\u043e \\u0421\\u041d\\u0418\\u041b\\u0421",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "user" : { "label" : "User", "type" : "user" },
        "snils" : { "label" : "\\u0421\\u041d\\u0418\\u041b\\u0421", "type" : "node" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "user:field-fio" ], "value" : [ "snils:title" ] } }
      ],
      "DO" : [ { "user_unblock" : { "account" : [ "user" ] } } ]
    }
  }');
  $items['rules_delete_user_with_nonexistent_name'] = entity_import('rules_config', '{ "rules_delete_user_with_nonexistent_name" : {
      "LABEL" : "\\u0423\\u0434\\u0430\\u043b\\u0438\\u0442\\u044c \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044f \\u0431\\u0435\\u0437 \\u0441\\u0443\\u0449\\u0435\\u0441\\u0442\\u0432\\u0443\\u044e\\u0449\\u0435\\u0433\\u043e \\u0424\\u0418\\u041e",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "node" : { "label" : "Node", "type" : "node" },
        "account" : {
          "label" : "\\u041f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044c",
          "type" : "user"
        }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:title" ], "value" : [ "account:field-fio" ] } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "account:name" ], "value" : "[account:uid]-delete" } },
        { "redirect" : { "url" : "user\\/register" } },
        { "drupal_message" : {
            "message" : "\\u0423\\u043a\\u0430\\u0437\\u0430\\u043d\\u043d\\u043e\\u0435 \\u0438\\u043c\\u044f \\u043e\\u0442\\u0441\\u0443\\u0442\\u0441\\u0442\\u0432\\u0443\\u0435\\u0442 \\u0432 \\u043d\\u0430\\u0448\\u0435\\u0439 \\u0431\\u0430\\u0437\\u0435.",
            "type" : "error"
          }
        }
      ]
    }
  }');
  $items['rules_delete_user_with_nonexistent_snils'] = entity_import('rules_config', '{ "rules_delete_user_with_nonexistent_snils" : {
      "LABEL" : "\\u0423\\u0434\\u0430\\u043b\\u0438\\u0442\\u044c \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044f \\u0431\\u0435\\u0437 \\u0441\\u0443\\u0449\\u0435\\u0441\\u0442\\u0432\\u0443\\u044e\\u0449\\u0435\\u0433\\u043e \\u0421\\u041d\\u0418\\u041b\\u0421",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "snils_node_id" : {
          "label" : "ID \\u041d\\u043e\\u0434\\u044b (\\u0421\\u041d\\u0418\\u041b\\u0421)",
          "type" : "integer"
        },
        "account" : {
          "label" : "\\u041f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044c",
          "type" : "user"
        }
      },
      "IF" : [ { "data_is" : { "data" : [ "snils-node-id" ], "value" : "0" } } ],
      "DO" : [
        { "data_set" : { "data" : [ "account:name" ], "value" : "[account:uid]-delete" } },
        { "redirect" : { "url" : "user\\/register" } },
        { "drupal_message" : {
            "message" : "\\u0423\\u043a\\u0430\\u0437\\u0430\\u043d\\u043d\\u044b\\u0439 \\u0421\\u041d\\u0418\\u041b\\u0421 \\u043e\\u0442\\u0441\\u0443\\u0442\\u0441\\u0442\\u0432\\u0443\\u0435\\u0442 \\u0432 \\u043d\\u0430\\u0448\\u0435\\u0439 \\u0431\\u0430\\u0437\\u0435.",
            "type" : "error"
          }
        }
      ]
    }
  }');
  $items['rules_download_counter'] = entity_import('rules_config', '{ "rules_download_counter" : {
      "LABEL" : "\\u0421\\u0447\\u0435\\u0442\\u0447\\u0438\\u043a \\u0441\\u043a\\u0430\\u0447\\u0438\\u0432\\u0430\\u043d\\u0438\\u0439",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "download_count" ],
      "ON" : { "download_count_file_download" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_download_counter" } },
        { "NOT user_has_role" : {
            "account" : [ "user" ],
            "roles" : { "value" : { "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "node:field-download-counter" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : { "data" : [ "node:field-download-counter" ], "value" : [ "result" ] } }
      ]
    }
  }');
  $items['rules_name_check'] = entity_import('rules_config', '{ "rules_name_check" : {
      "LABEL" : "\\u041f\\u0440\\u043e\\u0432\\u0435\\u0440\\u043a\\u0430 \\u0438\\u043c\\u0435\\u043d\\u0438",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_snils",
              "value" : [ "account:name" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "snils_snils_list" : "\\u0421\\u041d\\u0418\\u041b\\u0421: \\u0421\\u041d\\u0418\\u041b\\u0421 (\\u0441\\u043f\\u0438\\u0441\\u043e\\u043a)" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "integer", "value" : "0" },
            "PROVIDE" : { "variable_added" : { "snils_node_id" : "ID \\u041d\\u043e\\u0434\\u044b (\\u0421\\u041d\\u0418\\u041b\\u0421)" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "snils-snils-list" ] },
            "ITEM" : { "list_item" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u044d\\u043b\\u0435\\u043c\\u0435\\u043d\\u0442 \\u0441\\u043f\\u0438\\u0441\\u043a\\u0430" },
            "DO" : [
              { "component_rules_activate_users_with_snils" : { "user" : [ "account" ], "snils" : [ "list-item" ] } },
              { "component_rules_delete_user_with_nonexistent_name" : { "node" : [ "list-item" ], "account" : [ "account" ] } },
              { "data_set" : { "data" : [ "snils-node-id" ], "value" : [ "list-item:nid" ] } }
            ]
          }
        },
        { "component_rules_delete_user_with_nonexistent_snils" : { "snils_node_id" : [ "snils_node_id" ], "account" : [ "account" ] } }
      ]
    }
  }');
  $items['rules_snils_check'] = entity_import('rules_config', '{ "rules_snils_check" : {
      "LABEL" : "\\u041f\\u0440\\u043e\\u0432\\u0435\\u0440\\u043a\\u0430 \\u0421\\u041d\\u0418\\u041b\\u0421",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_snils",
              "value" : [ "account:field-snils" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "snils" : "SNILS" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "snils" ] },
            "ITEM" : { "list_item" : "\\u0422\\u0435\\u043a\\u0443\\u0449\\u0438\\u0439 \\u044d\\u043b\\u0435\\u043c\\u0435\\u043d\\u0442 \\u0441\\u043f\\u0438\\u0441\\u043a\\u0430" },
            "DO" : [
              { "component_rules_activate_user_whith_snils" : { "user" : [ "account" ], "snils" : [ "list-item" ] } }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_user_delete'] = entity_import('rules_config', '{ "rules_user_delete" : {
      "LABEL" : "\\u0423\\u0434\\u0430\\u043b\\u0435\\u043d\\u0438\\u0435 \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u044f",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "account:name" ], "value" : "[account:uid]-delete" } }
      ],
      "DO" : [
        { "drupal_message" : {
            "message" : "\\u0423\\u043a\\u0430\\u0437\\u0430\\u043d\\u043d\\u044b\\u0439 \\u0421\\u041d\\u0418\\u041b\\u0421 \\u043e\\u0442\\u0441\\u0443\\u0442\\u0441\\u0442\\u0432\\u0443\\u0435\\u0442 \\u0432 \\u043d\\u0430\\u0448\\u0435\\u0439 \\u0431\\u0430\\u0437\\u0435.",
            "type" : "error"
          }
        },
        { "user_block" : { "account" : [ "account" ] } }
      ]
    }
  }');
  return $items;
}
