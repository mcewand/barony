<?php
/**
 * @file
 * barony_awards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function barony_awards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'barony_awards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Awards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Awards';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_award_badge' => 'field_award_badge',
    'field_award_description' => 'field_award_description',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Badge */
  $handler->display->display_options['fields']['field_award_badge']['id'] = 'field_award_badge';
  $handler->display->display_options['fields']['field_award_badge']['table'] = 'field_data_field_award_badge';
  $handler->display->display_options['fields']['field_award_badge']['field'] = 'field_award_badge';
  $handler->display->display_options['fields']['field_award_badge']['label'] = '';
  $handler->display->display_options['fields']['field_award_badge']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_award_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_award_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_award_badge']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_award_description']['id'] = 'field_award_description';
  $handler->display->display_options['fields']['field_award_description']['table'] = 'field_data_field_award_description';
  $handler->display->display_options['fields']['field_award_description']['field'] = 'field_award_description';
  $handler->display->display_options['fields']['field_award_description']['label'] = '';
  $handler->display->display_options['fields']['field_award_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'barony_award' => 'barony_award',
  );

  /* Display: Awards Overview page */
  $handler = $view->new_display('page', 'Awards Overview page', 'awards_overview_page');
  $handler->display->display_options['path'] = 'awards-list';

  /* Display: Awards Block */
  $handler = $view->new_display('block', 'Awards Block', 'awards_block');
  $export['barony_awards'] = $view;

  return $export;
}
