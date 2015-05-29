<?php
/**
 * @file
 * story_teller.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function story_teller_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function story_teller_node_info() {
  $items = array(
    'panel_image' => array(
      'name' => t('Panel Image'),
      'base' => 'node_content',
      'description' => t('Used to display a full sized image, without any text.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'panel_text' => array(
      'name' => t('Panel Text'),
      'base' => 'node_content',
      'description' => t('Simple text node'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'panel_video' => array(
      'name' => t('Panel Video'),
      'base' => 'node_content',
      'description' => t('Displays a video in full sized panel.  Allows an image to be displayed on top for faster loading.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'base' => 'node_content',
      'description' => t('Here we assemble the story into one whole entity.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'timeline' => array(
      'name' => t('Timeline'),
      'base' => 'node_content',
      'description' => t('Here you create a complete timeline with Timeline panels of your choice.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'timeline_panel' => array(
      'name' => t('Timeline Panel'),
      'base' => 'node_content',
      'description' => t('In each panel, you provide all the information you think is needed for the display.  If you provide GPS coordinates, they CAN be used, if the theme is rendering geographicly'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
