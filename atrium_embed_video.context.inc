<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_embed_video_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_embed_videos';
  $context->description = '';
  $context->tag = 'video';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'atrium_embed_video' => 'atrium_embed_video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_embed_videos' => 'atrium_embed_videos',
        'atrium_embed_videos:page_1' => 'atrium_embed_videos:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atrium_embed_videos-block_2' => array(
          'module' => 'views',
          'delta' => 'atrium_embed_videos-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-video_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'video_comments-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'videos',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('video');
  $export['atrium_embed_videos'] = $context;

  return $export;
}
