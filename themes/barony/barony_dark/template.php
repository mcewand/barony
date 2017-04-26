<?php
/**
 * @file
 * The primary PHP file for this theme.
 */



/**
 * Debugging override for messages while developing. 
 *
 * !IMPORTANT REMOVE THIS BEFORE MOVING TO PROD
 */
function barony_dark_status_messages($variables) {
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
  );

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
  $status_class = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
    'info' => 'info',
  );

  // Retrieve messages.
  $message_list = drupal_get_messages($display);

  // Allow the disabled_messages module to filter the messages, if enabled.
  if (module_exists('disable_messages') && variable_get('disable_messages_enable', '1')) {
    $message_list = disable_messages_apply_filters($message_list);
  }

    foreach ($message_list as $type => $messages) {
    $class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
    $output .= "<div class=\"alert alert-block$class messages $type\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\">&times;</a>\n";

    if (!empty($status_heading[$type])) {
      $output .= '<h4 class="element-invisible">' . filter_xss_admin($status_heading[$type]) . "</h4>\n";
    }

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . (!module_exists('devel') ? _bootstrap_filter_xss($message) : $message) . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= filter_xss_admin($messages[0]);
    }

    $output .= "</div>\n";
  }
  return $output;
}

/**
 * Implements template_preprocess_entity().
 */
function barony_dark_preprocess_entity(&$variables) {
  if ($variables['entity_type'] == 'paragraphs_item') {
    switch($variables['elements']['#bundle']) {
      case 'officer_resources':
        // Use the resource type field to choose our icon.
        $type = $variables['field_office_resource_type'][0]['taxonomy_term']->name;

        if ($type == 'External' && isset($variables['content']['field_office_resource_link'])) {
          $variables['content']['field_office_resource_link'][0]['#suffix'] = '<i aria-hidden="true" class="fa fa-external-link"></i>';
          #$variables['content']['field_office_resource_link'][0]['#suffix'] = '<span aria-hidden="true" class="glyphicon glyphicon-link"></span>';
          $variables['content']['field_office_resource_link'][0]['#element']['attributes']['target'] = '_blank';

          if (isset($variables['content']['field_office_resource_link'][0]['#element']['attributes']['class'])) {
            $variables['content']['field_office_resource_link'][0]['#element']['attributes']['class'] .= 'barony-link-external';
          }
          else {
            $variables['content']['field_office_resource_link'][0]['#element']['attributes']['class'] = 'barony-link-external';
          }
        }
        elseif ($type == 'Download' && isset($variables['content']['field_office_resource_file'])) {
          $file_entity = $variables['field_office_resource_file'][0]['entity'];
          $uri = $file_entity->field_resource_file[$file_entity->language][0]['uri'];
          $url = file_create_url($uri);
          $options = array(
            'attributes' => array(
              'class' => array('barony-link-file'),
              'target' => '_blank',
            )
          );
          $variables['content']['field_office_resource_file'][0]['#suffix'] = '<i aria-hidden="true" class="fa fa-file-o"></i>';
          #$variables['content']['field_office_resource_file'][0]['#suffix'] = '<span aria-hidden="true" class="glyphicon glyphicon-file"></span>';
          $variables['content']['field_office_resource_file'][0]['#markup'] = l($file_entity->title, $url, $options);
        }
        

        // Strip out the type reference because we don't want the field displayed.
        unset($variables['content']['field_office_resource_type']);
        
        break;
      default:
        break;
    }

  }

}