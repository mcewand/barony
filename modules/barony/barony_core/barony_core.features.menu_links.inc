<?php
/**
 * @file
 * barony_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function barony_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_barony:<front>.
  $menu_links['main-menu_barony:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Barony',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_barony:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
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
  // Exported menu link: main-menu_newcomers:node/25.
  $menu_links['main-menu_newcomers:node/25'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/25',
    'router_path' => 'node/%',
    'link_title' => 'Newcomers',
    'options' => array(
      'identifier' => 'main-menu_newcomers:node/25',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_nobility--retinue:node/23.
  $menu_links['main-menu_nobility--retinue:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Nobility & Retinue',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_nobility--retinue:node/23',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Barony');
  t('Events');
  t('Newcomers');
  t('Nobility & Retinue');
  t('Officers');

  return $menu_links;
}
