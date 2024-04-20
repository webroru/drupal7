<?php

/**
 * @file
 * ntb_quicktabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function ntb_quicktabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'new_popular_tags';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Новинки, Популярное и Тэги';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_new_and_popular-new',
      'hide_title' => 1,
      'title' => 'Новинки',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_new_and_popular-popular',
      'hide_title' => 1,
      'title' => 'Популярное',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Новинки');
  t('Новинки, Популярное и Тэги');
  t('Популярное');

  $export['new_popular_tags'] = $quicktabs;

  return $export;
}
