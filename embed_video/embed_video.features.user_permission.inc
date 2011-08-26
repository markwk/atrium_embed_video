<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function embed_video_user_default_permissions() {
  $permissions = array();

  // Exported permission: create embed_video content
  $permissions['create embed_video content'] = array(
    'name' => 'create embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any embed_video content
  $permissions['delete any embed_video content'] = array(
    'name' => 'delete any embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: delete own embed_video content
  $permissions['delete own embed_video content'] = array(
    'name' => 'delete own embed_video content',
    'roles' => array(),
  );

  // Exported permission: edit any embed_video content
  $permissions['edit any embed_video content'] = array(
    'name' => 'edit any embed_video content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit field_embed_video
  $permissions['edit field_embed_video'] = array(
    'name' => 'edit field_embed_video',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own embed_video content
  $permissions['edit own embed_video content'] = array(
    'name' => 'edit own embed_video content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_embed_video
  $permissions['view field_embed_video'] = array(
    'name' => 'view field_embed_video',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
