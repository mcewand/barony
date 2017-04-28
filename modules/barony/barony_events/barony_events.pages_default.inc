<?php
/**
 * @file
 * barony_events.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function barony_events_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_activites';
  $page->task = 'page';
  $page->admin_title = 'Barony Activites';
  $page->admin_description = 'Landing Page for Activities';
  $page->path = 'activities';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_barony_activites__panel_context_8f71d76c-df28-4b31-94d3-05436ebfeb56';
  $handler->task = 'page';
  $handler->subtask = 'barony_activites';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Activities',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Regular Activities';
  $display->uuid = 'e6652de8-1582-4a93-acaf-e32c97b7acbe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_activites__panel_context_8f71d76c-df28-4b31-94d3-05436ebfeb56';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-34c4b042-5ca0-4baf-852c-11465670e206';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-a3416f1733f0e094ec05c98e8034405c';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '34c4b042-5ca0-4baf-852c-11465670e206';
  $display->content['new-34c4b042-5ca0-4baf-852c-11465670e206'] = $pane;
  $display->panels['left'][0] = 'new-34c4b042-5ca0-4baf-852c-11465670e206';
  $pane = new stdClass();
  $pane->pid = 'new-e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-5e4f038bd338e089eddab6ddf8ffdcff';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $display->content['new-e5b7d347-ab50-44a3-9b9b-d3656954da63'] = $pane;
  $display->panels['right'][0] = 'new-e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $pane = new stdClass();
  $pane->pid = 'new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-3a2d22b18925f65e79f66192c1412207';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $display->content['new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63'] = $pane;
  $display->panels['right'][1] = 'new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_activites'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_events';
  $page->task = 'page';
  $page->admin_title = 'Barony Events';
  $page->admin_description = 'Landing Page for Events and Activities';
  $page->path = 'events';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_barony_events__panel';
  $handler->task = 'page';
  $handler->subtask = 'barony_events';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Events',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Events';
  $display->uuid = 'e6652de8-1582-4a93-acaf-e32c97b7acbe';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_events__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-5e4f038bd338e089eddab6ddf8ffdcff';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $display->content['new-e5b7d347-ab50-44a3-9b9b-d3656954da63'] = $pane;
  $display->panels['left'][0] = 'new-e5b7d347-ab50-44a3-9b9b-d3656954da63';
  $pane = new stdClass();
  $pane->pid = 'new-9dd8023a-bd44-4bee-9693-839f50a2b37e';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'barony_events_calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'upcoming_events_block',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9dd8023a-bd44-4bee-9693-839f50a2b37e';
  $display->content['new-9dd8023a-bd44-4bee-9693-839f50a2b37e'] = $pane;
  $display->panels['left'][1] = 'new-9dd8023a-bd44-4bee-9693-839f50a2b37e';
  $pane = new stdClass();
  $pane->pid = 'new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-3a2d22b18925f65e79f66192c1412207';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $display->content['new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63'] = $pane;
  $display->panels['right'][0] = 'new-5bf0481a-26e0-4c21-ad4b-a789b1de5b63';
  $pane = new stdClass();
  $pane->pid = 'new-9ac6572a-2ce3-4cf7-ab15-cf0ef17acd11';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-events-other-calendars';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Other Useful Calendars',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9ac6572a-2ce3-4cf7-ab15-cf0ef17acd11';
  $display->content['new-9ac6572a-2ce3-4cf7-ab15-cf0ef17acd11'] = $pane;
  $display->panels['right'][1] = 'new-9ac6572a-2ce3-4cf7-ab15-cf0ef17acd11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_events'] = $page;

  $page = new stdClass();
  $page->disabled = TRUE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_upcoming';
  $page->task = 'page';
  $page->admin_title = 'Upcoming Events';
  $page->admin_description = '';
  $page->path = 'upcoming';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_barony_upcoming__panel';
  $handler->task = 'page';
  $handler->subtask = 'barony_upcoming';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7787a5c6-75c1-4363-af18-f98bdf7655c5';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_upcoming__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-62acd6d5-3200-4513-bfb3-ca9c79cb3025';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'calendar_block-calendar';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '62acd6d5-3200-4513-bfb3-ca9c79cb3025';
  $display->content['new-62acd6d5-3200-4513-bfb3-ca9c79cb3025'] = $pane;
  $display->panels['center'][0] = 'new-62acd6d5-3200-4513-bfb3-ca9c79cb3025';
  $pane = new stdClass();
  $pane->pid = 'new-b2492ce6-5f83-4fdf-9592-fb8568dd001d';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'calendar-calendar_legend';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'b2492ce6-5f83-4fdf-9592-fb8568dd001d';
  $display->content['new-b2492ce6-5f83-4fdf-9592-fb8568dd001d'] = $pane;
  $display->panels['center'][1] = 'new-b2492ce6-5f83-4fdf-9592-fb8568dd001d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-62acd6d5-3200-4513-bfb3-ca9c79cb3025';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_upcoming'] = $page;

  return $pages;

}
