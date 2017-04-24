<?php
/**
 * @file
 * barony_offices.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function barony_offices_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_officers:officers.
  $menu_links['main-menu_officers:officers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'officers',
    'router_path' => 'officers',
    'link_title' => 'Officers',
    'options' => array(
      'identifier' => 'main-menu_officers:officers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_barony:<front>',
  );
  // Exported menu link: menu-footer-menu_officers:officers.
  $menu_links['menu-footer-menu_officers:officers'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'officers',
    'router_path' => 'officers',
    'link_title' => 'Officers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_officers:officers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_barony:<front>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Officers');

  return $menu_links;
}
