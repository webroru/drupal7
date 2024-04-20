<?php

/**
 * @file
 * ntb_search_api_autocomplete_search.features.inc
 */

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function ntb_search_api_autocomplete_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_page_solr_search_page'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_page_solr_search_page",
    "name" : "Solr Search Page",
    "index_id" : "solr_node_index",
    "suggester_id" : "server",
    "type" : "search_api_page",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [] },
      "min_length" : "3",
      "results" : 1,
      "submit_button_selector" : ":submit",
      "autosubmit" : 1,
      "custom" : { "page_id" : "solr_search_page" }
    }
  }');
  $items['search_api_views_solr_search'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_solr_search",
    "name" : "Solr Search",
    "index_id" : "solr_node_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [] },
      "min_length" : "3",
      "results" : 1,
      "custom" : { "display" : "default" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    }
  }');
  return $items;
}
