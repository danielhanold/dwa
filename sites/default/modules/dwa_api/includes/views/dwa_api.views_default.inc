<?php

function dwa_api_views_default_views() {
  /**
   * Shortlist.
   */
  $view = new view;
  $view->name = 'shortlist';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'shortlist';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shortlist';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Site Thumbnail */
  $handler->display->display_options['fields']['field_site_thumbnail']['id'] = 'field_site_thumbnail';
  $handler->display->display_options['fields']['field_site_thumbnail']['table'] = 'field_data_field_site_thumbnail';
  $handler->display->display_options['fields']['field_site_thumbnail']['field'] = 'field_site_thumbnail';
  $handler->display->display_options['fields']['field_site_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site_thumbnail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_site_thumbnail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_site_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_site_thumbnail']['settings'] = array(
    'image_style' => 'site-thumb',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_site_thumbnail']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'site' => 'site',
  );
  
  /* Display: Shortlist */
  $handler = $view->new_display('block', 'Shortlist', 'block_shortlist');
  $handler->display->display_options['block_description'] = 'Shortlist';
  $views[$view->name] = $view;

  // At the end, return array of default views.
  return $views;
}