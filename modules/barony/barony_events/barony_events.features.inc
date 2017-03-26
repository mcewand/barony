<?php
/**
 * @file
 * barony_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function barony_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function barony_events_node_info() {
  $items = array(
    'barony_event_announce' => array(
      'name' => t('Event announcement'),
      'base' => 'node_content',
      'description' => t('Event descriptions, for the calendar.  Use "Event" for full event sections.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}