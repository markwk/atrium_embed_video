<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function embed_video_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'embed_videos';
  $context->description = '';
  $context->tag = 'video';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'embed_video' => 'embed_video',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'embed_videos' => 'embed_videos',
        'embed_videos:page_1' => 'embed_videos:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-embed_videos-block_2' => array(
          'module' => 'views',
          'delta' => 'embed_videos-block_2',
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
    'menu' => 'videos_china',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('video');
  $export['embed_videos'] = $context;

  return $export;
}
