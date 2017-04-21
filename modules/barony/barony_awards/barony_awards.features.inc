<?php
/**
 * @file
 * barony_awards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_awards_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function barony_awards_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function barony_awards_node_info() {
  $items = array(
    'barony_award' => array(
      'name' => t('Award'),
      'base' => 'node_content',
      'description' => t('Create award descriptions, add a badge, charter, member lists'),
      'has_title' => '1',
      'title_label' => t('Award Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
