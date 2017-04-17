<?php
/**
 * @file
 * barony_offices.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function barony_offices_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_ec343422-cb1f-4da3-bbc3-df488d24978a';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Officer Page',
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
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'barony_office' => 'barony_office',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f4eed19a-95c0-460a-ba85-cde374f8af45';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_ec343422-cb1f-4da3-bbc3-df488d24978a';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-110f7f00-dcc7-45a1-823f-87bceaddb122';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'main_page_left',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => 'Current Officer',
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
  $pane->uuid = '110f7f00-dcc7-45a1-823f-87bceaddb122';
  $display->content['new-110f7f00-dcc7-45a1-823f-87bceaddb122'] = $pane;
  $display->panels['left'][0] = 'new-110f7f00-dcc7-45a1-823f-87bceaddb122';
  $pane = new stdClass();
  $pane->pid = 'new-171d61c8-af06-4a30-a462-d206f39b9951';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-b9912c4add2eecd2540100a8e9b2b669';
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
  $pane->uuid = '171d61c8-af06-4a30-a462-d206f39b9951';
  $display->content['new-171d61c8-af06-4a30-a462-d206f39b9951'] = $pane;
  $display->panels['middle'][0] = 'new-171d61c8-af06-4a30-a462-d206f39b9951';
  $pane = new stdClass();
  $pane->pid = 'new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'main_page_right',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => 'Resources',
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
  $pane->uuid = '8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $display->content['new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2'] = $pane;
  $display->panels['right'][0] = 'new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $pane = new stdClass();
  $pane->pid = 'new-5c006a2a-db9a-44c7-a023-349df80d0a01';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'summary',
    'link_node_title' => 1,
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
  $pane->uuid = '5c006a2a-db9a-44c7-a023-349df80d0a01';
  $display->content['new-5c006a2a-db9a-44c7-a023-349df80d0a01'] = $pane;
  $display->panels['top'][0] = 'new-5c006a2a-db9a-44c7-a023-349df80d0a01';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-110f7f00-dcc7-45a1-823f-87bceaddb122';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_ec343422-cb1f-4da3-bbc3-df488d24978a'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function barony_offices_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'officer';
  $page->task = 'page';
  $page->admin_title = 'Officer';
  $page->admin_description = '';
  $page->path = 'officers/%office';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_bundle:node',
        'settings' => array(
          'type' => array(
            'barony_office' => 'barony_office',
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array(
    'office' => array(
      'settings' => array(),
      'identifier' => 'No context',
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_officer__panel';
  $handler->task = 'page';
  $handler->subtask = 'officer';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Officer Page',
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
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e0f2aff8-c70c-44d7-a6d5-cd6f7cf10ea1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_officer__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-db7fda4c-09dc-4a66-ad8d-811fc83eaabc';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'main_page_left',
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
  $pane->uuid = 'db7fda4c-09dc-4a66-ad8d-811fc83eaabc';
  $display->content['new-db7fda4c-09dc-4a66-ad8d-811fc83eaabc'] = $pane;
  $display->panels['left'][0] = 'new-db7fda4c-09dc-4a66-ad8d-811fc83eaabc';
  $pane = new stdClass();
  $pane->pid = 'new-6e5798d1-0929-4b92-856b-fd96fcd86bf1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-b9912c4add2eecd2540100a8e9b2b669';
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
  $pane->uuid = '6e5798d1-0929-4b92-856b-fd96fcd86bf1';
  $display->content['new-6e5798d1-0929-4b92-856b-fd96fcd86bf1'] = $pane;
  $display->panels['middle'][0] = 'new-6e5798d1-0929-4b92-856b-fd96fcd86bf1';
  $pane = new stdClass();
  $pane->pid = 'new-2cb255cc-fb5b-4acd-887a-02215221f8fa';
  $pane->panel = 'right';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'main_page_right',
    'link_node_title' => 0,
    'override_title' => 1,
    'override_title_text' => 'Resources',
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
  $pane->uuid = '2cb255cc-fb5b-4acd-887a-02215221f8fa';
  $display->content['new-2cb255cc-fb5b-4acd-887a-02215221f8fa'] = $pane;
  $display->panels['right'][0] = 'new-2cb255cc-fb5b-4acd-887a-02215221f8fa';
  $pane = new stdClass();
  $pane->pid = 'new-ad5315b3-9816-483e-a3d6-14d214ea8ff5';
  $pane->panel = 'top';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '%1',
    'links' => 0,
    'leave_node_title' => 0,
    'identifier' => '',
    'build_mode' => 'summary',
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
  $pane->uuid = 'ad5315b3-9816-483e-a3d6-14d214ea8ff5';
  $display->content['new-ad5315b3-9816-483e-a3d6-14d214ea8ff5'] = $pane;
  $display->panels['top'][0] = 'new-ad5315b3-9816-483e-a3d6-14d214ea8ff5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6e5798d1-0929-4b92-856b-fd96fcd86bf1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['officer'] = $page;

  return $pages;

}
