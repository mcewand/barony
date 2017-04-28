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

  // Exported menu link: main-menu_events--activities:events.
  $menu_links['main-menu_events--activities:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events & Activities',
    'options' => array(
      'identifier' => 'main-menu_events--activities:events',
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_activities:events',
  );
  // Exported menu link: menu-footer-menu_activities:events.
  $menu_links['menu-footer-menu_activities:events'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Activities',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_activities:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
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
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_activities:events',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Events & Activities');

  return $menu_links;
}
