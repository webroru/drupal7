<?php

/**
 * @file
 * ntb_feeds.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function ntb_feeds_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'catalog_item-author-explode';
  $feeds_tamper->importer = 'catalog_item';
  $feeds_tamper->source = 'author';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ', ',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['catalog_item-author-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'catalog_item-tags-explode';
  $feeds_tamper->importer = 'catalog_item';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['catalog_item-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'category_catalog-parent_term-find_replace';
  $feeds_tamper->importer = 'category_catalog';
  $feeds_tamper->source = 'parent_term';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => '1',
    'replace' => '',
    'case_sensitive' => 0,
    'word_boundaries' => 1,
    'whole' => 0,
    'regex' => TRUE,
    'regex_find' => '/\\b1\\b/i',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['category_catalog-parent_term-find_replace'] = $feeds_tamper;

  return $export;
}
