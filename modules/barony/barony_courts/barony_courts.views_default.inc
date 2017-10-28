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
  $handler->display->display_options['path'] = 'history/courts';

  /* Display: Champions List Page */
  $handler = $view->new_display('page', 'Champions List Page', 'champions_list_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Champions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_court_champions_role',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_court_champions_role']['id'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['table'] = 'field_data_field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['field'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['label'] = '';
  $handler->display->display_options['fields']['field_court_champions_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_champions_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_champions_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date of Service */
  $handler->display->display_options['fields']['field_court_dates']['id'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'm/Y',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Date of Service -  start date (field_court_dates) */
  $handler->display->display_options['sorts']['field_court_dates_value']['id'] = 'field_court_dates_value';
  $handler->display->display_options['sorts']['field_court_dates_value']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['sorts']['field_court_dates_value']['field'] = 'field_court_dates_value';
  /* Sort criterion: Content: Role (field_court_champions_role) */
  $handler->display->display_options['sorts']['field_court_champions_role_tid']['id'] = 'field_court_champions_role_tid';
  $handler->display->display_options['sorts']['field_court_champions_role_tid']['table'] = 'field_data_field_court_champions_role';
  $handler->display->display_options['sorts']['field_court_champions_role_tid']['field'] = 'field_court_champions_role_tid';
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
    'barony_champion' => 'barony_champion',
  );
  $handler->display->display_options['path'] = 'history/champions';

  /* Display: Court List Block */
  $handler = $view->new_display('block', 'Court List Block', 'block_1');

  /* Display: Current Champions Pane */
  $handler = $view->new_display('panel_pane', 'Current Champions Pane', 'champions_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Champions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_court_champions_role']['id'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['table'] = 'field_data_field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['field'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['label'] = '';
  $handler->display->display_options['fields']['field_court_champions_role']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_court_champions_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_champions_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
    'barony_champion' => 'barony_champion',
  );
  /* Filter criterion: Content: Date of Service - end date (field_court_dates:value2) */
  $handler->display->display_options['filters']['field_court_dates_value2']['id'] = 'field_court_dates_value2';
  $handler->display->display_options['filters']['field_court_dates_value2']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['filters']['field_court_dates_value2']['field'] = 'field_court_dates_value2';
  $handler->display->display_options['filters']['field_court_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_court_dates_value2']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_court_dates_value2']['year_range'] = '-2:+2';

  /* Display: Court Champions Pane */
  $handler = $view->new_display('panel_pane', 'Court Champions Pane', 'court_champions_pane');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Champions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_court_champions_role',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_court_champions_role' => 'field_court_champions_role',
    'field_court_dates' => 'field_court_dates',
    'field_court_dates_1' => 'field_court_dates_1',
    'nothing' => 'nothing',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_court_champions_role' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_court_dates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_court_dates_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Role */
  $handler->display->display_options['fields']['field_court_champions_role']['id'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['table'] = 'field_data_field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['field'] = 'field_court_champions_role';
  $handler->display->display_options['fields']['field_court_champions_role']['label'] = '';
  $handler->display->display_options['fields']['field_court_champions_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_champions_role']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_court_champions_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_champions_role']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Start Date */
  $handler->display->display_options['fields']['field_court_dates']['id'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['ui_name'] = 'Start Date';
  $handler->display->display_options['fields']['field_court_dates']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: End Date */
  $handler->display->display_options['fields']['field_court_dates_1']['id'] = 'field_court_dates_1';
  $handler->display->display_options['fields']['field_court_dates_1']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates_1']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates_1']['ui_name'] = 'End Date';
  $handler->display->display_options['fields']['field_court_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_court_dates] to [field_court_dates_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Date: Date (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['year_range'] = '-50:+1';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['granularity_reset'] = 0;
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_court_dates.field_court_dates_value' => 'field_data_field_court_dates.field_court_dates_value',
    'field_data_field_court_dates.field_court_dates_value2' => 'field_data_field_court_dates.field_court_dates_value2',
  );
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
    'barony_champion' => 'barony_champion',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_court_dates_value' => array(
      'type' => 'none',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date of Service -  start date (field_court_dates)',
    ),
    'field_court_dates_value2' => array(
      'type' => 'none',
      'context' => 'entity:file.basename',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Date of Service - end date (field_court_dates:value2)',
    ),
  );

  /* Display: Court Helper Block */
  $handler = $view->new_display('block', 'Court Helper Block', 'court_helper_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Champions';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Start Date */
  $handler->display->display_options['fields']['field_court_dates']['id'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates']['ui_name'] = 'Start Date';
  $handler->display->display_options['fields']['field_court_dates']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates']['element_type'] = '0';
  $handler->display->display_options['fields']['field_court_dates']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_court_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: End Date */
  $handler->display->display_options['fields']['field_court_dates_1']['id'] = 'field_court_dates_1';
  $handler->display->display_options['fields']['field_court_dates_1']['table'] = 'field_data_field_court_dates';
  $handler->display->display_options['fields']['field_court_dates_1']['field'] = 'field_court_dates';
  $handler->display->display_options['fields']['field_court_dates_1']['ui_name'] = 'End Date';
  $handler->display->display_options['fields']['field_court_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_court_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_court_dates_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_court_dates_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_court_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates_1']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_court_dates_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_court_dates_1']['settings'] = array(
    'format_type' => 'custom',
    'custom_date_format' => 'Y-m-d',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'show_repeat_rule' => 'show',
  );
  /* Field: Combined Dates for Filter */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Combined Dates for Filter';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_court_dates]--[field_court_dates_1]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'barony_courts';
  $handler->display->display_options['fields']['view']['display'] = 'court_champions_pane';
  $handler->display->display_options['fields']['view']['arguments'] = '[%nothing]';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'barony_court' => 'barony_court',
  );
  $export['barony_courts'] = $view;

  return $export;
}
