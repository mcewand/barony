<?php
/**
 * @file
 * barony_offices.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_offices_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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

/**
 * Implements hook_paragraphs_info().
 */
function barony_offices_paragraphs_info() {
  $items = array(
    'officer_resources' => array(
      'name' => 'Officer Resources',
      'bundle' => 'officer_resources',
      'locked' => '1',
    ),
  );
  return $items;
}
