<?php
/**
 * @file
 * barony_courts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_courts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function barony_courts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function barony_courts_node_info() {
  $items = array(
    'barony_champion' => array(
      'name' => t('Champion'),
      'base' => 'node_content',
      'description' => t('Create baronial champions and associate them with specific courts.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'barony_court' => array(
      'name' => t('Court'),
      'base' => 'node_content',
      'description' => t('Add the current Baron and Baroness, their retinue, and their champions.'),
      'has_title' => '1',
      'title_label' => t('Page title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
