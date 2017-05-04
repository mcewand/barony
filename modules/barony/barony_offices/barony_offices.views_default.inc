<?php
/**
 * @file
 * barony_offices.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function barony_offices_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'barony_officers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Officers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Officers of the Barony';
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
    'field_office_picture' => 'field_office_picture',
    'field_office_badge' => 'field_office_badge',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_office_picture']['id'] = 'field_office_picture';
  $handler->display->display_options['fields']['field_office_picture']['table'] = 'field_data_field_office_picture';
  $handler->display->display_options['fields']['field_office_picture']['field'] = 'field_office_picture';
  $handler->display->display_options['fields']['field_office_picture']['label'] = '';
  $handler->display->display_options['fields']['field_office_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_office_picture']['settings'] = array(
    'image_style' => 'barony_officer_list_page',
    'image_link' => 'content',
  );
  /* Field: Content: Badge */
  $handler->display->display_options['fields']['field_office_badge']['id'] = 'field_office_badge';
  $handler->display->display_options['fields']['field_office_badge']['table'] = 'field_data_field_office_badge';
  $handler->display->display_options['fields']['field_office_badge']['field'] = 'field_office_badge';
  $handler->display->display_options['fields']['field_office_badge']['label'] = '';
  $handler->display->display_options['fields']['field_office_badge']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_office_badge']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_office_badge']['settings'] = array(
    'image_style' => 'barony_small_badge',
    'image_link' => 'content',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_office_short_desc']['id'] = 'field_office_short_desc';
  $handler->display->display_options['fields']['field_office_short_desc']['table'] = 'field_data_field_office_short_desc';
  $handler->display->display_options['fields']['field_office_short_desc']['field'] = 'field_office_short_desc';
  $handler->display->display_options['fields']['field_office_short_desc']['label'] = '';
  $handler->display->display_options['fields']['field_office_short_desc']['element_label_colon'] = FALSE;
  /* Field: Content: Officer Name (SCA) */
  $handler->display->display_options['fields']['field_office_officer_sca']['id'] = 'field_office_officer_sca';
  $handler->display->display_options['fields']['field_office_officer_sca']['table'] = 'field_data_field_office_officer_sca';
  $handler->display->display_options['fields']['field_office_officer_sca']['field'] = 'field_office_officer_sca';
  $handler->display->display_options['fields']['field_office_officer_sca']['label'] = '';
  $handler->display->display_options['fields']['field_office_officer_sca']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_office_email']['id'] = 'field_office_email';
  $handler->display->display_options['fields']['field_office_email']['table'] = 'field_data_field_office_email';
  $handler->display->display_options['fields']['field_office_email']['field'] = 'field_office_email';
  $handler->display->display_options['fields']['field_office_email']['label'] = '';
  $handler->display->display_options['fields']['field_office_email']['element_class'] = 'clearfix';
  $handler->display->display_options['fields']['field_office_email']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'barony_office' => 'barony_office',
  );

  /* Display: Officer Grid */
  $handler = $view->new_display('page', 'Officer Grid', 'offices_page');
  $handler->display->display_options['path'] = 'officers';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Officers';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Office Announcements */
  $handler = $view->new_display('block', 'Office Announcements', 'office_announcements');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News and Updates';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read More';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Office Tag (field_announce_tags) */
  $handler->display->display_options['arguments']['field_announce_tags_tid']['id'] = 'field_announce_tags_tid';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['table'] = 'field_data_field_announce_tags';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['field'] = 'field_announce_tags_tid';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_announce_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_announce_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['validate_options']['vocabularies'] = array(
    'announcements_offices' => 'announcements_offices',
  );
  $handler->display->display_options['arguments']['field_announce_tags_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_announce_tags_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_announce_tags_tid']['validate']['fail'] = 'empty';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'barony_announcement' => 'barony_announcement',
  );
  $export['barony_officers'] = $view;

  return $export;
}
