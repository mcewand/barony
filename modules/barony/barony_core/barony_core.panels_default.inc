<?php
/**
 * @file
 * barony_core.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function barony_core_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'barony_hompage_bottom';
  $mini->category = 'Barony';
  $mini->admin_title = 'MP: Hompage Bottom';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'default' => NULL,
      'top' => NULL,
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => NULL,
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'naked',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '834078b0-cc1a-4ee4-9135-9b3b2516d8a6';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'barony_hompage_bottom';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-54cd1855-0d8d-4a5f-9e12-0405c8b42832';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'views-1aa2c03c3f3620c996dd903e1ee827ee';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Announcements',
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
  $pane->uuid = '54cd1855-0d8d-4a5f-9e12-0405c8b42832';
  $display->content['new-54cd1855-0d8d-4a5f-9e12-0405c8b42832'] = $pane;
  $display->panels['left'][0] = 'new-54cd1855-0d8d-4a5f-9e12-0405c8b42832';
  $pane = new stdClass();
  $pane->pid = 'new-ef7e9cc6-98a7-4590-9399-24816bdbc100';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'views-3a2d22b18925f65e79f66192c1412207';
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
  $pane->uuid = 'ef7e9cc6-98a7-4590-9399-24816bdbc100';
  $display->content['new-ef7e9cc6-98a7-4590-9399-24816bdbc100'] = $pane;
  $display->panels['middle'][0] = 'new-ef7e9cc6-98a7-4590-9399-24816bdbc100';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-54cd1855-0d8d-4a5f-9e12-0405c8b42832';
  $mini->display = $display;
  $export['barony_hompage_bottom'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'barony_hompage_highlights';
  $mini->category = 'Barony';
  $mini->admin_title = 'MP: Hompage Highlights';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
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
  $display->uuid = '31acaf3d-8516-4a43-9e0f-9a9af50fce04';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'barony_hompage_highlights';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b4089d72-0456-4dc9-b416-12700e91bdf2';
  $pane->panel = 'top';
  $pane->type = 'homepage_highlight';
  $pane->subtype = 'homepage_highlight';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'barony_homepage_highlight_image' => '58',
    'barony_homepage_highlight_links' => array(
      'value' => 'What is this?|/newcomers',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-dIiZqpl8uIETYxBzECdnswxATnOKnR_-YVc_rePduTw',
    'form_token' => 'LgdxYVMYtN8cpvhrI6iQGpew2RSFfC9CK0L2nBjj90I',
    'form_id' => 'barony_core_homepage_highlight_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b4089d72-0456-4dc9-b416-12700e91bdf2';
  $display->content['new-b4089d72-0456-4dc9-b416-12700e91bdf2'] = $pane;
  $display->panels['top'][0] = 'new-b4089d72-0456-4dc9-b416-12700e91bdf2';
  $pane = new stdClass();
  $pane->pid = 'new-006d2037-4393-4efe-93f5-605ff456d09b';
  $pane->panel = 'top';
  $pane->type = 'homepage_highlight';
  $pane->subtype = 'homepage_highlight';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'barony_homepage_highlight_image' => '56',
    'barony_homepage_highlight_links' => array(
      'value' => 'What we do|/events',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-cimVaMlq_tXaiwQVGOj8MUASk2xcF5AYG1K9nSERsMM',
    'form_token' => 'LgdxYVMYtN8cpvhrI6iQGpew2RSFfC9CK0L2nBjj90I',
    'form_id' => 'barony_core_homepage_highlight_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '006d2037-4393-4efe-93f5-605ff456d09b';
  $display->content['new-006d2037-4393-4efe-93f5-605ff456d09b'] = $pane;
  $display->panels['top'][1] = 'new-006d2037-4393-4efe-93f5-605ff456d09b';
  $pane = new stdClass();
  $pane->pid = 'new-39c96dd7-7d25-430a-b1a0-e1dcbdbaff88';
  $pane->panel = 'top';
  $pane->type = 'homepage_highlight';
  $pane->subtype = 'homepage_highlight';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'buttons' => NULL,
    'aligner_start' => NULL,
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
    'aligner_stop' => NULL,
    'override_title_markup' => NULL,
    'barony_homepage_highlight_image' => '57',
    'barony_homepage_highlight_links' => array(
      'value' => 'Why we do this|/history',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-3RofNQKESvci2OCAUKGi2tP_ZJ7kLcyzEWIVssXXN3I',
    'form_token' => 'LgdxYVMYtN8cpvhrI6iQGpew2RSFfC9CK0L2nBjj90I',
    'form_id' => 'barony_core_homepage_highlight_content_type_edit_form',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '39c96dd7-7d25-430a-b1a0-e1dcbdbaff88';
  $display->content['new-39c96dd7-7d25-430a-b1a0-e1dcbdbaff88'] = $pane;
  $display->panels['top'][2] = 'new-39c96dd7-7d25-430a-b1a0-e1dcbdbaff88';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-b4089d72-0456-4dc9-b416-12700e91bdf2';
  $mini->display = $display;
  $export['barony_hompage_highlights'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'barony_hompage_top';
  $mini->category = 'Barony';
  $mini->admin_title = 'MP: Hompage Top';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'right' => array(
        'column_type' => 'col-lg',
        'column_size' => '6',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '1',
      ),
      'default' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'naked',
    ),
    'bottom' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a743c711-ac6a-4b10-9b81-8d703cbbc996';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'barony_hompage_top';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-20e70022-f156-40a7-9a9b-da546e87e2dd';
  $pane->panel = 'left';
  $pane->type = 'node';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'nid' => '1',
    'links' => 0,
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
  $pane->uuid = '20e70022-f156-40a7-9a9b-da546e87e2dd';
  $display->content['new-20e70022-f156-40a7-9a9b-da546e87e2dd'] = $pane;
  $display->panels['left'][0] = 'new-20e70022-f156-40a7-9a9b-da546e87e2dd';
  $pane = new stdClass();
  $pane->pid = 'new-cd467e7a-6e6f-4661-86ca-f623f0cc4129';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'views-b84a54b5e35d430ba89a0f3baa70ca31';
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
  $pane->uuid = 'cd467e7a-6e6f-4661-86ca-f623f0cc4129';
  $display->content['new-cd467e7a-6e6f-4661-86ca-f623f0cc4129'] = $pane;
  $display->panels['right'][0] = 'new-cd467e7a-6e6f-4661-86ca-f623f0cc4129';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-cd467e7a-6e6f-4661-86ca-f623f0cc4129';
  $mini->display = $display;
  $export['barony_hompage_top'] = $mini;

  return $export;
}
