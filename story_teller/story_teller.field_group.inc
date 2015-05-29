<?php
/**
 * @file
 * story_teller.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function story_teller_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_geograph|node|timeline_panel|form';
  $field_group->group_name = 'group_geograph';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'timeline_panel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geographical',
    'weight' => '9',
    'children' => array(
      0 => 'field_latitude',
      1 => 'field_longitude',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Geographical',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-geograph field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_geograph|node|timeline_panel|form'] = $field_group;

  return $export;
}
