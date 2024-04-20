<?php

/**
 * @file
 * ntb_captcha_points.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ntb_captcha_points_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
}
