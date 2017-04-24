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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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

  return $export;
}
