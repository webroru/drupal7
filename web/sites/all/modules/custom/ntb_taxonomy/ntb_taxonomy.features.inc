<?php

/**
 * @file
 * ntb_taxonomy.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntb_taxonomy_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}
