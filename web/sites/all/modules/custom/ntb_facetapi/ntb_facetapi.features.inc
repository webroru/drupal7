<?php

/**
 * @file
 * ntb_facetapi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntb_facetapi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
