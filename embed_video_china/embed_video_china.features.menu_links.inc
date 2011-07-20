<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function embed_video_china_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:videos_china
  $menu_links['features:videos_china'] = array(
    'menu_name' => 'features',
    'link_path' => 'videos_china',
    'router_path' => 'videos_china',
    'link_title' => 'Videos (China)',
    'options' => array(
      'attributes' => array(
        'title' => 'User shared videos from China',
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
  t('Videos (China)');


  return $menu_links;
}
