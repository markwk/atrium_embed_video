<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function embed_video_china_user_default_permissions() {
  $permissions = array();

  // Exported permission: create video_zh content
  $permissions['create video_zh content'] = array(
    'name' => 'create video_zh content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any video_zh content
  $permissions['delete any video_zh content'] = array(
    'name' => 'delete any video_zh content',
    'roles' => array(),
  );

  // Exported permission: delete own video_zh content
  $permissions['delete own video_zh content'] = array(
    'name' => 'delete own video_zh content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit any video_zh content
  $permissions['edit any video_zh content'] = array(
    'name' => 'edit any video_zh content',
    'roles' => array(),
  );

  // Exported permission: edit field_embed_video_zh
  $permissions['edit field_embed_video_zh'] = array(
    'name' => 'edit field_embed_video_zh',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit own video_zh content
  $permissions['edit own video_zh content'] = array(
    'name' => 'edit own video_zh content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_embed_video_zh
  $permissions['view field_embed_video_zh'] = array(
    'name' => 'view field_embed_video_zh',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
