<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function embed_video_china_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'embed_videos_zh';
  $context->description = '';
  $context->tag = 'video';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'video_zh' => 'video_zh',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'embed_videos_zh' => 'embed_videos_zh',
        'embed_videos_zh:page_1' => 'embed_videos_zh:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-embed_videos_zh-block_2' => array(
          'module' => 'views',
          'delta' => 'embed_videos_zh-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-blog_comments-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_comments-block_1',
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

  $export['embed_videos_zh'] = $context;
  return $export;
}
