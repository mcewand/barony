<?php
/**
 * @file
 * barony_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function barony_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_events--activities:events.
  $menu_links['menu-footer-menu_events--activities:events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events & Activities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_events--activities:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('Events & Activities');

  return $menu_links;
}
