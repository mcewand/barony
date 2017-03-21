<?php
/**
 * @file
 * barony_core.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function barony_core_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_homepage';
  $page->task = 'page';
  $page->admin_title = 'Homepage';
  $page->admin_description = '';
  $page->path = 'welcome';
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
  $handler->name = 'page_barony_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'barony_homepage';
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '70.0492639055966',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '29.950736094403396',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'calendar',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'calendar' => array(
        'type' => 'region',
        'title' => 'rhs',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'rhs',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'calendar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9db76fde-2095-4f6e-a1a9-04c4af1819ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_homepage__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-88366a13-a8e5-4b98-8dc9-dff59a9f259d';
  $pane->panel = 'calendar';
  $pane->type = 'block';
  $pane->subtype = 'views-barony_events_calendar-block_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '88366a13-a8e5-4b98-8dc9-dff59a9f259d';
  $display->content['new-88366a13-a8e5-4b98-8dc9-dff59a9f259d'] = $pane;
  $display->panels['calendar'][0] = 'new-88366a13-a8e5-4b98-8dc9-dff59a9f259d';
  $pane = new stdClass();
  $pane->pid = 'new-b273da2b-a296-4eee-bf77-d24f38e28178';
  $pane->panel = 'calendar';
  $pane->type = 'block';
  $pane->subtype = 'views-1aa2c03c3f3620c996dd903e1ee827ee';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '%title',
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
  $pane->uuid = 'b273da2b-a296-4eee-bf77-d24f38e28178';
  $display->content['new-b273da2b-a296-4eee-bf77-d24f38e28178'] = $pane;
  $display->panels['calendar'][1] = 'new-b273da2b-a296-4eee-bf77-d24f38e28178';
  $pane = new stdClass();
  $pane->pid = 'new-54051e2e-f586-484a-8e3a-8dfa29248ac0';
  $pane->panel = 'center';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '1',
    'links' => 1,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'full',
    'link_node_title' => 0,
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
  $pane->uuid = '54051e2e-f586-484a-8e3a-8dfa29248ac0';
  $display->content['new-54051e2e-f586-484a-8e3a-8dfa29248ac0'] = $pane;
  $display->panels['center'][0] = 'new-54051e2e-f586-484a-8e3a-8dfa29248ac0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-54051e2e-f586-484a-8e3a-8dfa29248ac0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_homepage'] = $page;

  return $pages;

}
