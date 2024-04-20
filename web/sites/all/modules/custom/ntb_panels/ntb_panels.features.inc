<?php

/**
 * @file
 * ntb_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntb_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
