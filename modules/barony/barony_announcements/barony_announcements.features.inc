<?php
/**
 * @file
 * barony_announcements.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_announcements_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function barony_announcements_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function barony_announcements_node_info() {
  $items = array(
    'barony_announcement' => array(
      'name' => t('General Announcement'),
      'base' => 'node_content',
      'description' => t('General announcements, especially posted to the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
