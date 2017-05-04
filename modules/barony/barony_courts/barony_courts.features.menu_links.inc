<?php
/**
 * @file
 * barony_courts.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function barony_courts_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_court:court.
  $menu_links['main-menu_court:court'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'court',
    'router_path' => 'court',
    'link_title' => 'Court',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_court:court',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_barony:<front>',
  );
  // Exported menu link: menu-footer-menu_court:court.
  $menu_links['menu-footer-menu_court:court'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'court',
    'router_path' => 'court',
    'link_title' => 'Court',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_court:court',
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
  t('Court');

  return $menu_links;
}
