<?php
/**
 * @file
 * barony_courts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function barony_courts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'barony_courts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Courts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Baron & Baroness */
  $handler->display->display_options['fields']['field_court_baron']['id'] = 'field_court_baron';
  $handler->display->display_options['fields']['field_court_baron']['table'] = 'field_data_field_court_baron';
  $handler->display->display_options['fields']['field_court_baron']['field'] = 'field_court_baron';
  $handler->display->display_options['fields']['field_court_baron']['label'] = '';
  $handler->display->display_options['fields']['field_court_baron']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_court_baron']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_court_baron']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_court_baron']['element_label_colon'] = FALSE;
  /* Field: Content: Date of Service */
  $handler->display->display_options['fields']['field_court_dates']['id'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Sort criterion: Content: Date of Service -  start date (field_court_dates) */
  $handler->display->display_options['sorts']['field_court_dates_value']['id'] = 'field_court_dates_value';
  $handler->display->display_options['sorts']['field_court_dates_value']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['sorts']['field_court_dates_value']['field'] = 'field_court_dates_value';
  $handler->display->display_options['sorts']['field_court_dates_value']['order'] = 'DESC';
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
    'barony_court' => 'barony_court',
  );

  /* Display: Court List Page */
  $handler = $view->new_display('page', 'Court List Page', 'court_list_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Former Barons and Baronesses';
  $handler->display->display_options['path'] = 'courts';

  /* Display: Court List Block */
  $handler = $view->new_display('block', 'Court List Block', 'block_1');
  $export['barony_courts'] = $view;

  return $export;
}
