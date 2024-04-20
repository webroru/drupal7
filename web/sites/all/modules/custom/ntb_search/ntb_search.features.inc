<?php

/**
 * @file
 * ntb_search.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function ntb_search_default_search_api_index() {
  $items = array();
  $items['index'] = entity_import('search_api_index', '{
    "name" : "index",
    "machine_name" : "index",
    "description" : null,
    "server" : "mysql",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "body:value" : { "type" : "text" },
        "field_author" : { "type" : "list\\u003Cstring\\u003E" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_category:name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_isbn" : { "type" : "text" },
        "field_publisher" : { "type" : "text" },
        "field_redaction" : { "type" : "text" },
        "field_sign" : { "type" : "text" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_udk" : { "type" : "text" },
        "field_year" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "catalog" : "catalog" } }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "field_category:parent" : "field_category:parent" } }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_tags" : true,
              "field_isbn" : true,
              "field_udk" : true,
              "field_sign" : true,
              "body:value" : true,
              "field_category:name" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "field_author" : true,
              "field_isbn" : true,
              "field_redaction" : true,
              "field_publisher" : true,
              "field_udk" : true,
              "field_sign" : true,
              "field_category:name" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : {
              "field_author" : true,
              "field_isbn" : true,
              "field_redaction" : true,
              "field_publisher" : true,
              "field_udk" : true,
              "field_sign" : true,
              "field_category:name" : true
            }
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "field_author" : true,
              "field_isbn" : true,
              "field_redaction" : true,
              "field_publisher" : true,
              "field_udk" : true,
              "field_sign" : true,
              "field_category:name" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "field_author" : true,
              "field_isbn" : true,
              "field_redaction" : true,
              "field_publisher" : true,
              "field_udk" : true,
              "field_sign" : true,
              "field_category:name" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['solr_node_index'] = entity_import('search_api_index', '{
    "name" : "Solr Node Index",
    "machine_name" : "solr_node_index",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "catalog" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "attachments_field_file" : { "type" : "text" },
        "field_author" : { "type" : "list\\u003Ctext\\u003E" },
        "field_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_isbn" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_status" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 1,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "pdf",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 0
          }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_author" : true,
              "field_isbn" : true,
              "field_file:file" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 0,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "field_author" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_author" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      },
      "additional fields" : { "field_file:file" : "field_file:file" }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  $items['user_search'] = entity_import('search_api_index', '{
    "name" : "\\u041f\\u043e\\u0438\\u0441\\u043a \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u0435\\u0439",
    "machine_name" : "user_search",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "created" : { "type" : "date" },
        "field_snils" : { "type" : "text" },
        "last_access" : { "type" : "date" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "roles" : [] }
        },
        "search_api_alter_user_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_attachments_alter_settings" : {
          "status" : 0,
          "weight" : "0",
          "settings" : {
            "excluded_extensions" : "aif art avi bmp gif ico mov oga ogv png psd ra ram rgb flv",
            "number_indexed" : "0",
            "max_file_size" : "0",
            "excluded_private" : 1
          }
        },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "name" : true, "mail" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function ntb_search_default_search_api_page() {
  $items = array();
  $items['solr_search_page'] = entity_import('search_api_page', '{
    "index_id" : "solr_node_index",
    "path" : "search",
    "name" : "\\u041f\\u043e\\u0438\\u0441\\u043a \\u043f\\u043e \\u0441\\u0430\\u0439\\u0442\\u0443",
    "machine_name" : "solr_search_page",
    "description" : "",
    "options" : {
      "mode" : "direct",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 0,
      "get_per_page" : 0,
      "view_mode" : "teaser",
      "language_filter" : [],
      "empty_behavior" : ""
    },
    "enabled" : "1"
  }');
  $items['user_search'] = entity_import('search_api_page', '{
    "index_id" : "user_search",
    "path" : "user\\/search",
    "name" : "\\u041f\\u043e\\u0438\\u0441\\u043a \\u043f\\u043e\\u043b\\u044c\\u0437\\u043e\\u0432\\u0430\\u0442\\u0435\\u043b\\u0435\\u0439",
    "machine_name" : "user_search",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "full",
      "language_filter" : [],
      "empty_behavior" : ""
    },
    "enabled" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ntb_search_default_search_api_server() {
  $items = array();
  $items['mysql'] = entity_import('search_api_server', '{
    "name" : "MySQL",
    "machine_name" : "mysql",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "indexes" : { "index" : {
          "type" : {
            "table" : "search_api_db_index",
            "column" : "type",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "status" : {
            "table" : "search_api_db_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_index_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_index_field_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_author" : {
            "table" : "search_api_db_index_field_author_1",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_isbn" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_redaction" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_publisher" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_udk" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_sign" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_year" : {
            "table" : "search_api_db_index",
            "column" : "field_year",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_index_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "body:value" : { "table" : "search_api_db_index_text", "type" : "text", "boost" : "1.0" },
          "field_category:name" : {
            "table" : "search_api_db_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  $items['solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr Server",
    "machine_name" : "solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/ntb",
      "http_user" : "\\u041d\\u0435\\u043c\\u044b\\u043a\\u0438\\u043d \\u0418\\u0433\\u043e\\u0440\\u044c \\u0415\\u0432\\u0433\\u0435\\u043d\\u044c\\u0435\\u0432\\u0438\\u0447",
      "http_pass" : "Bai1bag2",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function ntb_search_default_search_api_sort() {
  $items = array();
  $items['default_node_index__field_year'] = entity_import('search_api_sort', '{
    "index_id" : "default_node_index",
    "field" : "field_year",
    "name" : "\\u0413\\u043e\\u0434 \\u0438\\u0437\\u0434\\u0430\\u043d\\u0438\\u044f",
    "enabled" : "0",
    "weight" : "0",
    "identifier" : "default_node_index__field_year",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "field_year" }
  }');
  return $items;
}
