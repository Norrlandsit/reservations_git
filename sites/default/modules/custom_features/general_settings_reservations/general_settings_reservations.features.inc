<?php
/**
 * @file
 * general_settings_reservations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function general_settings_reservations_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
