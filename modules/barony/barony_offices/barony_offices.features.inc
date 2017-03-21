<?php
/**
 * @file
 * barony_offices.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_offices_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function barony_offices_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function barony_offices_node_info() {
  $items = array(
    'barony_office' => array(
      'name' => t('Office'),
      'base' => 'node_content',
      'description' => t('Create baronial office and add contact information, current office holder, etc'),
      'has_title' => '1',
      'title_label' => t('Office Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
