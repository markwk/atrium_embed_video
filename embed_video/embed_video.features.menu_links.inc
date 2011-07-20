<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function embed_video_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:videos
  $menu_links['features:videos'] = array(
    'menu_name' => 'features',
    'link_path' => 'videos',
    'router_path' => 'videos',
    'link_title' => 'Videos',
    'options' => array(
      'attributes' => array(
        'title' => 'User shared videos from around the web',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Videos');


  return $menu_links;
}
