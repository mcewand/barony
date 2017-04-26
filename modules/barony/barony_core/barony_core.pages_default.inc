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
  $handler->name = 'page_barony_homepage__homepage-boots';
  $handler->task = 'page';
  $handler->subtask = 'barony_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Homepage',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'homepage-boots',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100.0,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 'main-row',
          2 => 4,
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
        'title' => 'Center Menus',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_left',
          1 => 'main_right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_left' => array(
        'type' => 'region',
        'title' => 'Main Left',
        'width' => '39.98801041546996',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main_right' => array(
        'type' => 'region',
        'title' => 'Main Right',
        'width' => '60.01198958453004',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'lower_left',
          1 => 'lower_mid',
          2 => 'lower_right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'lower_left' => array(
        'type' => 'region',
        'title' => 'Lower Left',
        'width' => '32.943469785575054',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'lower_mid' => array(
        'type' => 'region',
        'title' => 'Lower Mid',
        'width' => '34.20190677896574',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'lower_right' => array(
        'type' => 'region',
        'title' => 'Lower Right',
        'width' => '32.8546234354592',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'calendar' => NULL,
      'lower_left' => NULL,
      'lower_mid' => NULL,
      'lower_right' => NULL,
      'main_left' => NULL,
      'main_right' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
    'main_right' => array(
      'style' => '-1',
    ),
    'main_left' => array(
      'style' => '-1',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'naked',
    ),
    'right' => array(
      'style' => 'naked',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9db76fde-2095-4f6e-a1a9-04c4af1819ed';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_homepage__homepage-boots';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8a23e90e-5237-474b-a830-9fd2e5b9d814';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'barony_hompage_bottom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '8a23e90e-5237-474b-a830-9fd2e5b9d814';
  $display->content['new-8a23e90e-5237-474b-a830-9fd2e5b9d814'] = $pane;
  $display->panels['bottom'][0] = 'new-8a23e90e-5237-474b-a830-9fd2e5b9d814';
  $pane = new stdClass();
  $pane->pid = 'new-666722c9-b2a3-48cb-b528-536fd6f44d62';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'barony_hompage_top';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = '666722c9-b2a3-48cb-b528-536fd6f44d62';
  $display->content['new-666722c9-b2a3-48cb-b528-536fd6f44d62'] = $pane;
  $display->panels['top'][0] = 'new-666722c9-b2a3-48cb-b528-536fd6f44d62';
  $pane = new stdClass();
  $pane->pid = 'new-f3e0dfe4-ef2b-461e-be8e-a5ac56ff1783';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'barony_hompage_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<none>',
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
  $pane->uuid = 'f3e0dfe4-ef2b-461e-be8e-a5ac56ff1783';
  $display->content['new-f3e0dfe4-ef2b-461e-be8e-a5ac56ff1783'] = $pane;
  $display->panels['top'][1] = 'new-f3e0dfe4-ef2b-461e-be8e-a5ac56ff1783';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_resources';
  $page->task = 'page';
  $page->admin_title = 'Resources';
  $page->admin_description = '';
  $page->path = 'resources';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Resources',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_barony_resources__panel';
  $handler->task = 'page';
  $handler->subtask = 'barony_resources';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Resources Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Taxonomy term: Newsletter',
        'keyword' => 'term_newsletter',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '56',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Taxonomy term: Event Planning',
        'keyword' => 'term_event_planning',
        'name' => 'entity:taxonomy_term',
        'entity_id' => '55',
        'id' => 2,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
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
  $display->title = 'Resources';
  $display->uuid = '946267ec-6ffa-48f6-b2ed-daa373922894';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_resources__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f60d2e12-8491-4d45-b902-f1ba27bc7058';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'barony_resources';
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
    'display' => 'resources_block',
    'context' => array(
      0 => 'context_entity:taxonomy_term_2.name',
    ),
    'override_title' => 1,
    'override_title_text' => 'Event Planning',
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
  $pane->uuid = 'f60d2e12-8491-4d45-b902-f1ba27bc7058';
  $display->content['new-f60d2e12-8491-4d45-b902-f1ba27bc7058'] = $pane;
  $display->panels['left'][0] = 'new-f60d2e12-8491-4d45-b902-f1ba27bc7058';
  $pane = new stdClass();
  $pane->pid = 'new-311f9749-770d-436c-a2fc-2496b69b4bab';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'barony_resources';
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
    'display' => 'resources_block',
    'context' => array(
      0 => 'context_entity:taxonomy_term_1.name',
    ),
    'override_title' => 1,
    'override_title_text' => 'Newsletter',
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
  $pane->uuid = '311f9749-770d-436c-a2fc-2496b69b4bab';
  $display->content['new-311f9749-770d-436c-a2fc-2496b69b4bab'] = $pane;
  $display->panels['right'][0] = 'new-311f9749-770d-436c-a2fc-2496b69b4bab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_resources'] = $page;

  return $pages;

}
