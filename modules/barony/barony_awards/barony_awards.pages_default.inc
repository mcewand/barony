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
