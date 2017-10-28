<?php
/**
 * @file
 * barony_courts.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function barony_courts_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__court-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Court Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'court-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'barony_court' => 'barony_court',
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
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f4eed19a-95c0-460a-ba85-cde374f8af45';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__court-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d1e9e1ac-d158-4101-a805-e542d667d5b6';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => '',
    ),
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
  $pane->uuid = 'd1e9e1ac-d158-4101-a805-e542d667d5b6';
  $display->content['new-d1e9e1ac-d158-4101-a805-e542d667d5b6'] = $pane;
  $display->panels['left'][0] = 'new-d1e9e1ac-d158-4101-a805-e542d667d5b6';
  $pane = new stdClass();
  $pane->pid = 'new-c99ff417-1ff5-4a61-b3a0-e606e136d930';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_baron';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c99ff417-1ff5-4a61-b3a0-e606e136d930';
  $display->content['new-c99ff417-1ff5-4a61-b3a0-e606e136d930'] = $pane;
  $display->panels['left'][1] = 'new-c99ff417-1ff5-4a61-b3a0-e606e136d930';
  $pane = new stdClass();
  $pane->pid = 'new-55302abd-ca20-4449-acb4-df6fdb48aaef';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_dates';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
      'show_repeat_rule' => 'show',
    ),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '55302abd-ca20-4449-acb4-df6fdb48aaef';
  $display->content['new-55302abd-ca20-4449-acb4-df6fdb48aaef'] = $pane;
  $display->panels['left'][2] = 'new-55302abd-ca20-4449-acb4-df6fdb48aaef';
  $pane = new stdClass();
  $pane->pid = 'new-2caa50a0-d761-495f-98fe-22c17458c8bf';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_greeting';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2caa50a0-d761-495f-98fe-22c17458c8bf';
  $display->content['new-2caa50a0-d761-495f-98fe-22c17458c8bf'] = $pane;
  $display->panels['left'][3] = 'new-2caa50a0-d761-495f-98fe-22c17458c8bf';
  $pane = new stdClass();
  $pane->pid = 'new-d3aca88d-1810-47a0-8c8a-a5de43d34ee3';
  $pane->panel = 'right';
  $pane->type = 'token';
  $pane->subtype = 'node:field_retinue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Retinue',
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
  $pane->uuid = 'd3aca88d-1810-47a0-8c8a-a5de43d34ee3';
  $display->content['new-d3aca88d-1810-47a0-8c8a-a5de43d34ee3'] = $pane;
  $display->panels['right'][0] = 'new-d3aca88d-1810-47a0-8c8a-a5de43d34ee3';
  $pane = new stdClass();
  $pane->pid = 'new-2d00c981-4c45-455e-9f86-1e3375d8bc49';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'barony_courts';
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
    'display' => 'court_helper_block',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
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
  $pane->uuid = '2d00c981-4c45-455e-9f86-1e3375d8bc49';
  $display->content['new-2d00c981-4c45-455e-9f86-1e3375d8bc49'] = $pane;
  $display->panels['right'][1] = 'new-2d00c981-4c45-455e-9f86-1e3375d8bc49';
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
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__court-page'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function barony_courts_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'barony_court';
  $page->task = 'page';
  $page->admin_title = 'Barony Court';
  $page->admin_description = '';
  $page->path = 'court';
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
  $handler->name = 'page_barony_court__panel';
  $handler->task = 'page';
  $handler->subtask = 'barony_court';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Court',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Node',
        'keyword' => 'node',
        'name' => 'entity:node',
        'entity_id' => '45',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'court',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '10',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '1',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Our Landed Nobility and Their Retinue';
  $display->uuid = '70b461bd-82ce-4632-8acd-b4de387c6a36';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_barony_court__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c77e652c-788a-4362-8a93-18d02e4e5a35';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'barony_court_champions_retinue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'context_entity:node_1',
    ),
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
  $pane->uuid = 'c77e652c-788a-4362-8a93-18d02e4e5a35';
  $display->content['new-c77e652c-788a-4362-8a93-18d02e4e5a35'] = $pane;
  $display->panels['bottom'][0] = 'new-c77e652c-788a-4362-8a93-18d02e4e5a35';
  $pane = new stdClass();
  $pane->pid = 'new-b35600b5-ead3-42ab-8e8c-adbd4796b849';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_greeting';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
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
  $pane->uuid = 'b35600b5-ead3-42ab-8e8c-adbd4796b849';
  $display->content['new-b35600b5-ead3-42ab-8e8c-adbd4796b849'] = $pane;
  $display->panels['left'][0] = 'new-b35600b5-ead3-42ab-8e8c-adbd4796b849';
  $pane = new stdClass();
  $pane->pid = 'new-cd305ef1-f055-44dc-9196-1fecea0e71f2';
  $pane->panel = 'left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'barony_court_highlights';
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
  $pane->uuid = 'cd305ef1-f055-44dc-9196-1fecea0e71f2';
  $display->content['new-cd305ef1-f055-44dc-9196-1fecea0e71f2'] = $pane;
  $display->panels['left'][1] = 'new-cd305ef1-f055-44dc-9196-1fecea0e71f2';
  $pane = new stdClass();
  $pane->pid = 'new-8aa49743-2e3c-4802-a343-6ba5e23fe34f';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => '',
    ),
    'context' => 'context_entity:node_1',
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
  $pane->uuid = '8aa49743-2e3c-4802-a343-6ba5e23fe34f';
  $display->content['new-8aa49743-2e3c-4802-a343-6ba5e23fe34f'] = $pane;
  $display->panels['right'][0] = 'new-8aa49743-2e3c-4802-a343-6ba5e23fe34f';
  $pane = new stdClass();
  $pane->pid = 'new-42e49bbd-943d-4539-b05e-94efd8be8c39';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_baron';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
    'override_title' => 0,
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
  $pane->uuid = '42e49bbd-943d-4539-b05e-94efd8be8c39';
  $display->content['new-42e49bbd-943d-4539-b05e-94efd8be8c39'] = $pane;
  $display->panels['right'][1] = 'new-42e49bbd-943d-4539-b05e-94efd8be8c39';
  $pane = new stdClass();
  $pane->pid = 'new-28a6649c-f1e5-4332-a5d8-d2596a044347';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_email';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'email_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '28a6649c-f1e5-4332-a5d8-d2596a044347';
  $display->content['new-28a6649c-f1e5-4332-a5d8-d2596a044347'] = $pane;
  $display->panels['right'][2] = 'new-28a6649c-f1e5-4332-a5d8-d2596a044347';
  $pane = new stdClass();
  $pane->pid = 'new-7743161c-5e29-43d0-b828-63b45299d082';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_court_phone';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'phone',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7743161c-5e29-43d0-b828-63b45299d082';
  $display->content['new-7743161c-5e29-43d0-b828-63b45299d082'] = $pane;
  $display->panels['right'][3] = 'new-7743161c-5e29-43d0-b828-63b45299d082';
  $pane = new stdClass();
  $pane->pid = 'new-efafebed-df84-4796-909c-886cda4466c9';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_barony_preferences';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'context_entity:node_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'efafebed-df84-4796-909c-886cda4466c9';
  $display->content['new-efafebed-df84-4796-909c-886cda4466c9'] = $pane;
  $display->panels['right'][4] = 'new-efafebed-df84-4796-909c-886cda4466c9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['barony_court'] = $page;

  return $pages;

}
