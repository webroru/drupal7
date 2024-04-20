<?php

/**
 * @file
 * ntb_node.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ntb_node_taxonomy_default_vocabularies() {
  return array(
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
