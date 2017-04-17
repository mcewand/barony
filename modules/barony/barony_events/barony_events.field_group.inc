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
      0 => 'field_event_activities_overview',
      1 => 'field_event_activity',
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
  $field_groups['group_activities|node|barony_event|form'] = $field_group;

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
      0 => 'field_event_contact_overview',
      1 => 'field_event_autocrats',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-autocrats field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_autocrats|node|barony_event|form'] = $field_group;

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
    'weight' => '5',
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
  $field_groups['group_dates|node|barony_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_activities|node|barony_event|default';
  $field_group->group_name = 'group_event_d_activities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Activities',
    'weight' => '12',
    'children' => array(
      0 => 'field_event_activities_overview',
      1 => 'field_event_activity',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-activities field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_activities|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_contact|node|barony_event|default';
  $field_group->group_name = 'group_event_d_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '16',
    'children' => array(
      0 => 'field_event_contact_overview',
      1 => 'field_event_autocrats',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-contact field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_contact|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_feast|node|barony_event|default';
  $field_group->group_name = 'group_event_d_feast';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Feast',
    'weight' => '14',
    'children' => array(
      0 => 'field_event_feast',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-feast field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_feast|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_introduction|node|barony_event|default';
  $field_group->group_name = 'group_event_d_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '9',
    'children' => array(
      0 => 'field_event_long_description',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-introduction field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_introduction|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_registration|node|barony_event|default';
  $field_group->group_name = 'group_event_d_registration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Registration',
    'weight' => '15',
    'children' => array(
      0 => 'field_event_prereg',
      1 => 'field_event_reg_overview',
      2 => 'field_event_fees',
      3 => 'field_event_member_discount',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-registration field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_registration|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_schedule|node|barony_event|default';
  $field_group->group_name = 'group_event_d_schedule';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Schedule',
    'weight' => '13',
    'children' => array(
      0 => 'field_event_schedule_overview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-schedule field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_schedule|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_site|node|barony_event|default';
  $field_group->group_name = 'group_event_d_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_navigation';
  $field_group->data = array(
    'label' => 'Site',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_alcohol_policy',
      1 => 'field_event_date',
      2 => 'field_event_info_overview',
      3 => 'group_event_d_travel',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-site field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_site|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_d_travel|node|barony_event|default';
  $field_group->group_name = 'group_event_d_travel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_event_d_site';
  $field_group->data = array(
    'label' => 'Getting There',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_city',
      1 => 'field_event_directions',
      2 => 'field_event_site_name',
      3 => 'field_event_state',
      4 => 'field_event_travel_overview',
      5 => 'field_event_zip_code',
      6 => 'field_events_address',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-d-travel field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_event_d_travel|node|barony_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_feast|node|barony_event|form';
  $field_group->group_name = 'group_feast';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Feast',
    'weight' => '10',
    'children' => array(
      0 => 'field_event_feast',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-feast field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_feast|node|barony_event|form'] = $field_group;

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
    'weight' => '6',
    'children' => array(
      0 => 'field_event_alcohol_policy',
      1 => 'field_event_info_overview',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_info|node|barony_event|form'] = $field_group;

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
    'weight' => '4',
    'children' => array(
      0 => 'field_event_city',
      1 => 'field_event_directions',
      2 => 'field_event_site_name',
      3 => 'field_event_state',
      4 => 'field_event_travel_overview',
      5 => 'field_event_zip_code',
      6 => 'field_events_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_location|node|barony_event|form'] = $field_group;

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
      0 => 'group_event_d_contact',
      1 => 'group_event_d_registration',
      2 => 'group_event_d_introduction',
      3 => 'group_event_d_activities',
      4 => 'group_event_d_schedule',
      5 => 'group_event_d_feast',
      6 => 'group_event_d_site',
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
  $field_groups['group_navigation|node|barony_event|default'] = $field_group;

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
      1 => 'field_event_reg_overview',
      2 => 'field_event_fees',
      3 => 'field_event_member_discount',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-registration field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_registration|node|barony_event|form'] = $field_group;

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
    'weight' => '11',
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
  $field_groups['group_schedule|node|barony_event|form'] = $field_group;

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
  $field_groups['group_teaser|node|barony_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = TRUE; /* Edit this to true to make a default field_group disabled initially */
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
  $field_groups['group_travel|node|barony_event|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Activities');
  t('Autocrats');
  t('Basic Info');
  t('Contacts');
  t('Date and Time');
  t('Feast');
  t('Getting There');
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
