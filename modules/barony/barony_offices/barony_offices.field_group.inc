<?php
/**
 * @file
 * barony_offices.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function barony_offices_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_officer_info|node|barony_office|form';
  $field_group->group_name = 'group_office_officer_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_office';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Officer Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_office_phone',
      1 => 'field_office_phone_notes',
      2 => 'field_office_email',
      3 => 'field_office_officer_mundane',
      4 => 'field_office_officer_sca',
      5 => 'field_office_picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-office-officer-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_office_officer_info|node|barony_office|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_office_resources|node|barony_office|form';
  $field_group->group_name = 'group_office_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'barony_office';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '5',
    'children' => array(
      0 => 'field_office_resources',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-office-resources field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_office_resources|node|barony_office|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Officer Info');
  t('Resources');

  return $field_groups;
}
