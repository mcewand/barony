<?php
/**
 * @file
 * barony_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function barony_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'barony_homepage_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage Carousel';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Homepage Carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'homepage carousel queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 0;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'barony_homepage_carousel' => 0,
  );
  /* Field: Content: Reference */
  $handler->display->display_options['fields']['field_carousel_reference']['id'] = 'field_carousel_reference';
  $handler->display->display_options['fields']['field_carousel_reference']['table'] = 'field_data_field_carousel_reference';
  $handler->display->display_options['fields']['field_carousel_reference']['field'] = 'field_carousel_reference';
  $handler->display->display_options['fields']['field_carousel_reference']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_reference']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_carousel_reference']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_carousel_image']['id'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['table'] = 'field_data_field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['field'] = 'field_carousel_image';
  $handler->display->display_options['fields']['field_carousel_image']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_image']['alter']['path'] = 'node/[field_carousel_reference]';
  $handler->display->display_options['fields']['field_carousel_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_carousel_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_carousel_image']['settings'] = array(
    'image_style' => '640x400',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[field_carousel_reference]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Text */
  $handler->display->display_options['fields']['field_carousel_text']['id'] = 'field_carousel_text';
  $handler->display->display_options['fields']['field_carousel_text']['table'] = 'field_data_field_carousel_text';
  $handler->display->display_options['fields']['field_carousel_text']['field'] = 'field_carousel_text';
  $handler->display->display_options['fields']['field_carousel_text']['label'] = '';
  $handler->display->display_options['fields']['field_carousel_text']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_carousel_text']['alter']['path'] = 'node/[field_carousel_reference]';
  $handler->display->display_options['fields']['field_carousel_text']['element_label_colon'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
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
    'barony_carousel_item' => 'barony_carousel_item',
  );

  /* Display: Homepage Carousel */
  $handler = $view->new_display('block', 'Homepage Carousel', 'barony_homepage_carousel_block');
  $export['barony_homepage_carousel'] = $view;

  $view = new view();
  $view->name = 'barony_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resources';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_resource_file']['id'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['table'] = 'field_data_field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['field'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['label'] = '';
  $handler->display->display_options['fields']['field_resource_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_file']['click_sort_column'] = 'fid';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['table'] = 'field_data_field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Tags (field_resource_tags) */
  $handler->display->display_options['arguments']['field_resource_tags_tid']['id'] = 'field_resource_tags_tid';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['table'] = 'field_data_field_resource_tags';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['field'] = 'field_resource_tags_tid';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_resource_tags_tid']['title'] = 'Resources: %1';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_resource_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_resource_tags_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['validate_options']['vocabularies'] = array(
    'barony_site_tags' => 'barony_site_tags',
  );
  $handler->display->display_options['arguments']['field_resource_tags_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_resource_tags_tid']['validate']['fail'] = 'empty';
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
    'barony_resource' => 'barony_resource',
  );

  /* Display: Resources Page */
  $handler = $view->new_display('page', 'Resources Page', 'resources_page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_resource_tags',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_resource_tags']['id'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['table'] = 'field_data_field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['field'] = 'field_resource_tags';
  $handler->display->display_options['fields']['field_resource_tags']['label'] = '';
  $handler->display->display_options['fields']['field_resource_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_resource_tags']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_resource_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_tags']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_resource_file']['id'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['table'] = 'field_data_field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['field'] = 'field_resource_file';
  $handler->display->display_options['fields']['field_resource_file']['label'] = '';
  $handler->display->display_options['fields']['field_resource_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_resource_file']['click_sort_column'] = 'fid';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_resource_description']['id'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['table'] = 'field_data_field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['field'] = 'field_resource_description';
  $handler->display->display_options['fields']['field_resource_description']['label'] = '';
  $handler->display->display_options['fields']['field_resource_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
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
    'barony_resource' => 'barony_resource',
  );
  /* Filter criterion: Content: Tags (field_resource_tags) */
  $handler->display->display_options['filters']['field_resource_tags_tid']['id'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['table'] = 'field_data_field_resource_tags';
  $handler->display->display_options['filters']['field_resource_tags_tid']['field'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_resource_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['operator_id'] = 'field_resource_tags_tid_op';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['label'] = 'Resource Tags';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['operator'] = 'field_resource_tags_tid_op';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['identifier'] = 'field_resource_tags_tid';
  $handler->display->display_options['filters']['field_resource_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_resource_tags_tid']['vocabulary'] = 'barony_site_tags';
  $handler->display->display_options['path'] = 'resources/list/%';

  /* Display: Resources Block */
  $handler = $view->new_display('block', 'Resources Block', 'resources_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Added';
  $handler->display->display_options['display_description'] = 'For use in the Resources panel page only';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See Archive';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $export['barony_resources'] = $view;

  return $export;
}
