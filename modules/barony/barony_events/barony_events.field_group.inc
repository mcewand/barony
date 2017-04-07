<?php
/**
 * @file
 * barony_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function barony_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activities|node|barony_event|default';
  $field_group->group_name = 'group_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Activities',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_activity',
      1 => 'field_event_activities_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activities field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_activities|node|barony_event|form';
  $field_group->group_name = 'group_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Activities',
    'weight' => '9',
    'children' => array(
      0 => 'field_event_activity',
      1 => 'field_event_activities_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-activities field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_autocrats|node|barony_event|form';
  $field_group->group_name = 'group_autocrats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Autocrats',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_autocrats',
      1 => 'field_event_contact_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|node|barony_event|default';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '11',
    'children' => array(
      0 => 'field_event_autocrats',
      1 => 'field_event_contact_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates|node|barony_event|form';
  $field_group->group_name = 'group_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Date and Time',
    'weight' => '4',
    'children' => array(
      0 => 'field_event_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-dates field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|barony_event|form';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_alcohol_policy',
      1 => 'field_event_info_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intro|node|barony_event|default';
  $field_group->group_name = 'group_intro';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_long_description',
      1 => 'field_event_date',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intro field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|barony_event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_site_name',
      1 => 'field_events_address',
      2 => 'field_event_city',
      3 => 'field_event_state',
      4 => 'field_event_zip_code',
      5 => 'field_event_directions',
      6 => 'field_event_travel_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_navigation|node|barony_event|default';
  $field_group->group_name = 'group_navigation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Navigation',
    'weight' => '0',
    'children' => array(
      0 => 'group_intro',
      1 => 'group_travel',
      2 => 'group_registration',
      3 => 'group_contact',
      4 => 'group_site',
      5 => 'group_activities',
      6 => 'group_schedule',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-navigation field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|barony_event|default';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '9',
    'children' => array(
      0 => 'field_event_prereg',
      1 => 'field_event_fees',
      2 => 'field_event_reg_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registration field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_registration|node|barony_event|form';
  $field_group->group_name = 'group_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '7',
    'children' => array(
      0 => 'field_event_prereg',
      1 => 'field_event_fees',
      2 => 'field_event_reg_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|barony_event|default';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_schedule_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schedule field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_schedule|node|barony_event|form';
  $field_group->group_name = 'group_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_schedule_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-schedule field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_site|node|barony_event|default';
  $field_group->group_name = 'group_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '6',
    'children' => array(
      0 => 'field_event_alcohol_policy',
      1 => 'field_event_info_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-site field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser|node|barony_event|form';
  $field_group->group_name = 'group_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser',
    'weight' => '3',
    'children' => array(
      0 => 'field_event_teaser_image',
      1 => 'field_event_teaser_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teaser field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_travel|node|barony_event|default';
  $field_group->group_name = 'group_travel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Travel',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_site_name',
      1 => 'field_events_address',
      2 => 'field_event_city',
      3 => 'field_event_state',
      4 => 'field_event_zip_code',
      5 => 'field_event_directions',
      6 => 'field_event_travel_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-travel field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Autocrats');
  t('Basic Info');
  t('Contacts');
  t('Date and Time');
  t('Introduction');
  t('Location');
  t('Navigation');
  t('Registration');
  t('Schedule');
  t('Site');
  t('Teaser');
  t('Travel');

  return $field_groups;
}
