<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function embed_video_china_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function embed_video_china_node_info() {
  $items = array(
    'video_zh' => array(
      'name' => t('Video China'),
      'module' => 'features',
      'description' => t('Add 3rd Party Video from Youku, Toudu and Ku6.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function embed_video_china_views_api() {
  return array(
    'api' => '2',
  );
}
