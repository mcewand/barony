<?php
/**
 * @file
 * Homepage Highlight Box
 *
 */
$plugin = array(
  'single' => TRUE,
  'icon' => 'icon_node_form.png',
  'title' => t('Homepage Highlight Box'),
  'description' => t('Menu box for the middle of the homepage.'),
  'category' => t('Barony'),
);

/*
 * Ctools render callback.
 */
function barony_core_homepage_highlight_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->title = '';

  $content = '<div class="barony-homepage-highlight">';

  if (!empty($conf['barony_homepage_highlight_image'])) {
    $file = file_load($conf['barony_homepage_highlight_image']);
    if (is_object($file)) {
      $uri = $file->uri;
      $url = file_create_url($uri);
      $content .= '<img class="barony-homepage-highlight-image" src="' . $url .'" />';
    }
  }

  if (!empty($conf['barony_homepage_highlight_links'])) {
    $content .= '<div class="barony-homepage-highlight-menu"><ul>';
    $links = array();
    $items = explode(PHP_EOL, $conf['barony_homepage_highlight_links']['value']);
    foreach ($items as $item) {
      $parts = explode('|', $item);
      $links[] = array('title' => $parts[0], 'url' => $parts[1]);
    }

    foreach ($links as $link) {
      $content .= '<li>' . l(t($link['title']), $link['url']) . '</li>';
    }

    $content .= '</ul></div>';
  }

  $content .= '</div>';

  $block->content = $content;
  return $block;
}

/*
 * Ctools configuration form callback.
 */
function barony_core_homepage_highlight_content_type_edit_form($form, &$form_state) {
  form_load_include($form_state, 'inc', 'barony_core','plugins/content_types/homepage_highlight');
  
  $form['#attributes']['enctype'] = array("multipart/form-data");

  form_load_include($form_state, 'inc', 'file', 'file.field');

  $conf = $form_state['conf'];
  $form['barony_homepage_highlight_image'] = array(
    '#title' => t('Image'),
    '#type' => 'managed_file',
    '#description' => t('Upload a square image. This will be displayed at 150x150 px.'),
    '#default_value' => !empty($conf['barony_homepage_highlight_image']) ? variable_get($conf['barony_homepage_highlight_image']) : '',
    '#upload_location' => 'public://highlights/',
    '#upload_validators' => array(
       'file_validate_extensions' => array('gif png jpeg jpg')
     ),
    '#array_parents' => array('barony_homepage_highlight_image')
  );

  $form['barony_homepage_highlight_links'] = array(
    '#title' => t('Links'),
    '#type' => 'text_format',
    '#format' => 'plain_text',
    '#description' => t('Add up to 5 links, one per line. ex: Link Title|/events'),
    '#default_value' => isset($conf['barony_homepage_highlight_links']) ? $conf['barony_homepage_highlight_links']['value'] : '',
    '#cols' => 20,
    '#rows' => 5,
    '#required' => TRUE,
  );


  //dpm($form, 'form');



  return $form;
}

/**
 * The submit form handler stores the data in $conf.
 */
function barony_core_homepage_highlight_content_type_edit_form_submit(&$form, &$form_state) {
  foreach (element_children($form) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}