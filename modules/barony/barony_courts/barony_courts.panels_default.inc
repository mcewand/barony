<?php
/**
 * @file
 * barony_courts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function barony_courts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'barony_court_champions_retinue';
  $mini->category = 'Barony';
  $mini->admin_title = 'MP: Champions and Retinue';
  $mini->admin_description = 'Display Champions and Retinue on the current Court page';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->uuid = '1dcd99d5-2dea-4f94-9365-95031389cc56';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'barony_court_champions_retinue';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-762991bb-50d5-432e-b4e5-c96648a963ee';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'barony_courts-champions_pane';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '762991bb-50d5-432e-b4e5-c96648a963ee';
  $display->content['new-762991bb-50d5-432e-b4e5-c96648a963ee'] = $pane;
  $display->panels['left'][0] = 'new-762991bb-50d5-432e-b4e5-c96648a963ee';
  $pane = new stdClass();
  $pane->pid = 'new-e7f69865-05e8-49c1-8c81-0dd8ad1093b9';
  $pane->panel = 'right';
  $pane->type = 'token';
  $pane->subtype = 'node:field_retinue';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->uuid = 'e7f69865-05e8-49c1-8c81-0dd8ad1093b9';
  $display->content['new-e7f69865-05e8-49c1-8c81-0dd8ad1093b9'] = $pane;
  $display->panels['right'][0] = 'new-e7f69865-05e8-49c1-8c81-0dd8ad1093b9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-762991bb-50d5-432e-b4e5-c96648a963ee';
  $mini->display = $display;
  $export['barony_court_champions_retinue'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'barony_court_highlights';
  $mini->category = 'Barony';
  $mini->admin_title = 'MP: Court Highlights';
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
  $display->storage_id = 'barony_court_highlights';
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
    'barony_homepage_highlight_image' => 0,
    'barony_homepage_highlight_links' => array(
      'value' => 'Officers|/officers',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-GNJogy3oa8F1cIRBL1Rj84un9CV-C0i9ypT4hz_OMHw',
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
    'barony_homepage_highlight_image' => 0,
    'barony_homepage_highlight_links' => array(
      'value' => 'Awards|/awards',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-M-GqhpJP5EYZxoAEjK2jrK1FWno5S_6nP85dMt-M5ZI',
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
    'barony_homepage_highlight_image' => 0,
    'barony_homepage_highlight_links' => array(
      'value' => 'History|/courts',
      'format' => 'plain_text',
    ),
    'form_build_id' => 'form-9KBsYQFVNIx0b8EYedUT7Gvyeqife1zbYd4z3N4aj5A',
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
  $export['barony_court_highlights'] = $mini;

  return $export;
}
