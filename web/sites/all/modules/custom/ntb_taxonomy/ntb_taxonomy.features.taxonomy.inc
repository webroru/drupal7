<?php

/**
 * @file
 * ntb_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ntb_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'authors' => array(
      'name' => 'Авторы',
      'machine_name' => 'authors',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'catalog' => array(
      'name' => 'Каталог',
      'machine_name' => 'catalog',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'category_site' => array(
      'name' => 'Категории сайта',
      'machine_name' => 'category_site',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'newsletter' => array(
      'name' => 'Newsletter',
      'machine_name' => 'newsletter',
      'description' => 'Simplenews newsletter categories.',
      'hierarchy' => 0,
      'module' => 'simplenews',
      'weight' => 0,
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => 'Use tags to group articles on similar topics into categories.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
