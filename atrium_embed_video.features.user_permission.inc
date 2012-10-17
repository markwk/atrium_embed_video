<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_embed_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: create atrium_embed_video content
  $permissions['create atrium_embed_video content'] = array(
    'name' => 'create atrium_embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any atrium_embed_video content
  $permissions['delete any atrium_embed_video content'] = array(
    'name' => 'delete any atrium_embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own atrium_embed_video content
  $permissions['delete own atrium_embed_video content'] = array(
    'name' => 'delete own atrium_embed_video content',
    'roles' => array(),
  );

  // Exported permission: edit any atrium_embed_video content
  $permissions['edit any atrium_embed_video content'] = array(
    'name' => 'edit any atrium_embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_atrium_embed_video
  $permissions['edit field_atrium_embed_video'] = array(
    'name' => 'edit field_atrium_embed_video',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own atrium_embed_video content
  $permissions['edit own atrium_embed_video content'] = array(
    'name' => 'edit own atrium_embed_video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_atrium_embed_video
  $permissions['view field_atrium_embed_video'] = array(
    'name' => 'view field_atrium_embed_video',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
