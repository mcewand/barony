<?php
/**
 * @file
 * barony_awards.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function barony_awards_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_awards:awards.
  $menu_links['main-menu_awards:awards'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'awards',
    'router_path' => 'awards',
    'link_title' => 'Awards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_awards:awards',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_barony:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Awards');

  return $menu_links;
}
