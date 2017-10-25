<?php


/**
 * Implements hook_install_tasks().
 */
function barony_install_tasks($install_state) {
	$tasks = array(
    'barony_modules' => array(
      'display_name' => st('Choose components'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'barony_module_configuration',
    ),
    'barony_theme' => array(
      'display_name' => st('Configure theme'),
      'type' => 'form',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'function' => 'barony_theme_configuration',
    ),
  );
  return $tasks;
}


/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function barony_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  $form['server_settings']['site_default_country']['#default_value'] = 'US';
}

/**
 * List of available component modules.
 */
function barony_available_components() {
	return array(
		'barony_announcements' => array(
			'title' => t('Announcements'),
			'desc' => t('Announcements for the homepage and officers.'),
		),
		'barony_awards' => array(
			'title' => t('Awards'),
			'desc' => t('Awards information and pages.'),
		),
		'barony_courts' => array(
			'title' => t('Courts'),
			'desc' => t('Court, retinue, and champion information and pages.'),
		),
		'barony_events' => array(
			'title' => t('Events'),
			'desc' => t('Event announcements, pages, and integration with Google calendar.'),
		),
		'barony_offices' => array(
			'title' => t('Offices'),
			'desc' => t('Officer information and pages.'),
		),
	);
}

/**
 * Barony component selector.
 */
function barony_module_configuration() {	
	drupal_set_title(st('Choose components'));
  return drupal_get_form('barony_module_selector_form');
}

/**
 * Form callback for component selector.
 */
function barony_module_selector_form() {
	$form = array();

	$module_options = barony_available_components(); 

	foreach ($module_options as $name => $module) {
		$form[$name] = array(
  		'#type' => 'checkbox', 
			'#title' => $module['title'],
			'#description' => $module['desc'],
			'#default_value' => 1,
		);
	}

	 $form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

	return $form;
}

/**
 * Implements hook_FORM_ID_submit().
 */
function barony_module_selector_form_submit(&$form, &$form_state) {
	$module_options = barony_available_components(); 
	foreach ($form_state['input'] as $key => $input) {
		if (isset($module_options[$key])) {
			module_enable(array($key));
		}
	}

	// Other site configuration
	variable_set('site_frontpage', 'welcome');
}


/**
 * Barony theme selector and configuration.
 */
function barony_theme_configuration() {
	drupal_set_title(st('Configure Theme'));
  return drupal_get_form('barony_theme_configuration_form');
}


/**
 * List of available themes.
 */
function barony_theme_chooser_options() {
	return array(
		0 => array(
			'name' => 'barony_dark',
			'title' => t('Dark'),
		),
		1 =>	array(
			'name' => 'barony_light',
			'title' => t('Light'),
		),
	);
}


/**
 * Form callback for theme configuration.
 */
function barony_theme_configuration_form(){
	$form = array();

	$options = array();
	foreach(barony_theme_chooser_options() as $key => $option) {
		$options[$key] = $option['title'];
	}

	$form['theme'] = array(
    '#type' => 'radios',
    '#title' => t('Base theme.'),
    '#default_value' => 0,
    '#options' => $options,
    '#description' => t('This selects a starting point for the theme.  It is customizable.'),
  );
	
	$form['submit'] = array(
    '#type' => 'submit',
    '#value' => st('Continue'),
  );

	return $form;
}

/**
 * Implements hook_FORM_ID_submit().
 */
function barony_theme_configuration_form_submit(&$form, &$form_state) {
	// Always enable the barony base theme.
	theme_enable(array('barony_base'));

	$theme_options = barony_theme_chooser_options();
	if (isset($form_state['input']['theme'])) {
		$selected = $theme_options[$form_state['input']['theme']]['name'];
		
		// Enable and set the selected theme as the default.
		theme_enable(array($selected));
		variable_set('theme_default', $selected);

		// Disable the drupal default theme.
		theme_disable(array('bartik'));
	}

	// Other theme config
	$theme_settings = array (
	  'toggle_logo' => 1,
	  'toggle_name' => 1,
	  'toggle_slogan' => 0,
	  'toggle_node_user_picture' => 1,
	  'toggle_comment_user_picture' => 1,
	  'toggle_comment_user_verification' => 1,
	  'toggle_favicon' => 1,
	  'toggle_main_menu' => 0,
	  'toggle_secondary_menu' => 0,
	  'default_logo' => 1,
	  'logo_path' => '',
	  'logo_upload' => '',
	  'default_favicon' => 1,
	  'favicon_path' => '',
	  'favicon_upload' => '',
	  'bootstrap__active_tab' => 'edit-advanced',
	  'bootstrap_fluid_container' => 1,
	  'bootstrap_button_size' => '',
	  'bootstrap_button_colorize' => 1,
	  'bootstrap_button_iconize' => 1,
	  'bootstrap_forms_required_has_error' => 0,
	  'bootstrap_forms_smart_descriptions' => 1,
	  'bootstrap_forms_smart_descriptions_limit' => '250',
	  'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
	  'bootstrap_image_shape' => '',
	  'bootstrap_image_responsive' => 1,
	  'bootstrap_table_bordered' => 0,
	  'bootstrap_table_condensed' => 0,
	  'bootstrap_table_hover' => 1,
	  'bootstrap_table_striped' => 1,
	  'bootstrap_table_responsive' => 1,
	  'bootstrap_breadcrumb' => '0',
	  'bootstrap_breadcrumb_home' => 0,
	  'bootstrap_breadcrumb_title' => 1,
	  'bootstrap_navbar_position' => 'fixed-top',
	  'bootstrap_navbar_inverse' => 0,
	  'bootstrap_pager_first_and_last' => 1,
	  'bootstrap_region_well-navigation' => '',
	  'bootstrap_region_well-header' => '',
	  'bootstrap_region_well-highlighted' => '',
	  'bootstrap_region_well-help' => '',
	  'bootstrap_region_well-content' => '',
	  'bootstrap_region_well-sidebar_first' => 'well',
	  'bootstrap_region_well-sidebar_second' => '',
	  'bootstrap_region_well-footer' => '',
	  'bootstrap_region_well-page_top' => '',
	  'bootstrap_region_well-page_bottom' => '',
	  'bootstrap_region_well-dashboard_main' => '',
	  'bootstrap_region_well-dashboard_sidebar' => '',
	  'bootstrap_region_well-dashboard_inactive' => '',
	  'bootstrap_anchors_fix' => '0',
	  'bootstrap_anchors_smooth_scrolling' => '0',
	  'bootstrap_forms_has_error_value_toggle' => 1,
	  'bootstrap_popover_enabled' => 1,
	  'bootstrap_popover_animation' => 1,
	  'bootstrap_popover_html' => 0,
	  'bootstrap_popover_placement' => 'right',
	  'bootstrap_popover_selector' => '',
	  'bootstrap_popover_trigger' => 
	  array (
	    'click' => 'click',
	    'hover' => 0,
	    'focus' => 0,
	    'manual' => 0,
	  ),
	  'bootstrap_popover_trigger_autoclose' => 1,
	  'bootstrap_popover_title' => '',
	  'bootstrap_popover_content' => '',
	  'bootstrap_popover_delay' => '0',
	  'bootstrap_popover_container' => 'body',
	  'bootstrap_tooltip_enabled' => 1,
	  'bootstrap_tooltip_animation' => 1,
	  'bootstrap_tooltip_html' => 0,
	  'bootstrap_tooltip_placement' => 'auto left',
	  'bootstrap_tooltip_selector' => '',
	  'bootstrap_tooltip_trigger' => 
	  array (
	    'hover' => 'hover',
	    'focus' => 'focus',
	    'click' => 0,
	    'manual' => 0,
	  ),
	  'bootstrap_tooltip_delay' => '0',
	  'bootstrap_tooltip_container' => 'body',
	  'bootstrap_toggle_jquery_error' => 0,
	  'bootstrap_cdn_provider' => 'jsdelivr',
	  'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
	  'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
	  'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
	  'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
	  'bootstrap_cdn_jsdelivr_version' => '3.3.7',
	  'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
	);

	variable_set('theme_' . $selected . '_settings', $theme_settings);

}