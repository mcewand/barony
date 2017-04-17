<?php
/**
 * @file
 * barony_announcements.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function barony_announcements_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_announce_tags'.
  $field_bases['field_announce_tags'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_announce_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'announcements_offices',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
