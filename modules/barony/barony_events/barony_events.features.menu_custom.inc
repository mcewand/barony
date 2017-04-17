<?php
/**
 * @file
 * barony_events.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function barony_events_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-barony-calendars.
  $menus['menu-barony-calendars'] = array(
    'menu_name' => 'menu-barony-calendars',
    'title' => 'Calendars',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Calendars');

  return $menus;
}
