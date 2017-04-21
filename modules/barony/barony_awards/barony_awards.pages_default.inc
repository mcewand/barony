<?php
/**
 * @file
 * barony_awards.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function barony_awards_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__award-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Award Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'award-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'barony_award' => 'barony_award',
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
  $display->storage_id = 'node_view__award-page';
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
  $pane->uuid = '110f7f00-dcc7-45a1-823f-87bceaddb122';
  $display->content['new-110f7f00-dcc7-45a1-823f-87bceaddb122'] = $pane;
  $display->panels['left'][0] = 'new-110f7f00-dcc7-45a1-823f-87bceaddb122';
  $pane = new stdClass();
  $pane->pid = 'new-5c006a2a-db9a-44c7-a023-349df80d0a01';
  $pane->panel = 'middle';
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
    'override_title' => 1,
    'override_title_text' => 'Who is this for?',
    'override_title_heading' => 'h3',
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
  $display->panels['middle'][0] = 'new-5c006a2a-db9a-44c7-a023-349df80d0a01';
  $pane = new stdClass();
  $pane->pid = 'new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $pane->panel = 'middle';
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
  $pane->uuid = '8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $display->content['new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2'] = $pane;
  $display->panels['middle'][1] = 'new-8bc368ce-82fd-48b0-bd0f-b3f492ee79d2';
  $pane = new stdClass();
  $pane->pid = 'new-b8f2e92c-6691-4e57-8935-00a60f2e48cd';
  $pane->panel = 'top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'h1',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'b8f2e92c-6691-4e57-8935-00a60f2e48cd';
  $display->content['new-b8f2e92c-6691-4e57-8935-00a60f2e48cd'] = $pane;
  $display->panels['top'][0] = 'new-b8f2e92c-6691-4e57-8935-00a60f2e48cd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-110f7f00-dcc7-45a1-823f-87bceaddb122';
  $handler->conf['display'] = $display;
  $export['node_view__award-page'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function barony_awards_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_awards';
  $page->task = 'page';
  $page->admin_title = 'Barony Awards';
  $page->admin_description = 'Landing Page for Events and Activities';
  $page->path = 'awards';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
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
  $handler->name = 'page_barony_awards__panel_context_0b849e65-05de-4517-82a0-226cc8e57a66';
  $handler->task = 'page';
  $handler->subtask = 'barony_awards';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Awards Overview',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Baronial Awards';
  $display->uuid = '049ad808-6942-4c23-b8b2-f30d50c9784b';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_awards__panel_context_0b849e65-05de-4517-82a0-226cc8e57a66';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-37e611ea-1d7c-431c-9396-f7ef2fb27d73';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Awards Intro',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<p>Awards are a way that the barony can recognize those individuals who contribute to the barony through skills, service, and teaching. &nbsp;There are awards for demonstrating skill at arms in martial activities, like fighting and archery, for skill in the arts, and for serving the barony and its populace by running events, being an officer, and just generally being helpful. &nbsp;To receive an award, members of the populace make recommendations to the Baron and Baroness, then, often in consultation with other recipients of the same award, the B&amp;B may decide to recognize the person with an award and&nbsp;a scroll (produced by our artisans).</p>',
    'format' => 'barony_wysiwyg',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '37e611ea-1d7c-431c-9396-f7ef2fb27d73';
  $display->content['new-37e611ea-1d7c-431c-9396-f7ef2fb27d73'] = $pane;
  $display->panels['middle'][0] = 'new-37e611ea-1d7c-431c-9396-f7ef2fb27d73';
  $pane = new stdClass();
  $pane->pid = 'new-e8c8a1d3-22e3-490a-b846-093e72fe19cb';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-barony_awards-block_1';
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
  $pane->uuid = 'e8c8a1d3-22e3-490a-b846-093e72fe19cb';
  $display->content['new-e8c8a1d3-22e3-490a-b846-093e72fe19cb'] = $pane;
  $display->panels['middle'][1] = 'new-e8c8a1d3-22e3-490a-b846-093e72fe19cb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_awards'] = $page;

  return $pages;

}
