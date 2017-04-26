<?php
/**
 * @file
 * barony_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function barony_core_ctools_plugin_api($module = NULL, $api = NULL) {
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
function barony_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function barony_core_image_default_styles() {
  $styles = array();

  // Exported image style: 640x400.
  $styles['640x400'] = array(
    'label' => '640x400',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function barony_core_node_info() {
  $items = array(
    'barony_carousel_item' => array(
      'name' => t('Carousel Item'),
      'base' => 'node_content',
      'description' => t('Create items to display in carousels on various pages on the site, especially the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'barony_page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Basic informational pages'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'barony_resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Useful for files, handouts, images, etc. Can be linked to an office, project, or event.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
