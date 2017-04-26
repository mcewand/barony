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

  // Exported menu: menu-events-other-calendars.
  $menus['menu-events-other-calendars'] = array(
    'menu_name' => 'menu-events-other-calendars',
    'title' => 'Events - Other Calendars',
    'description' => 'Other group calendars (e.g. kingdom, neighboring baronies, sub-groups)',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events - Other Calendars');
  t('Other group calendars (e.g. kingdom, neighboring baronies, sub-groups)');

  return $menus;
}
