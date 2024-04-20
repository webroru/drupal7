<?php

/**
 * @file
 * ntb_node.features.inc
 */

/**
 * Implements hook_node_info().
 */
function ntb_node_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'catalog' => array(
      'name' => t('Каталог'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'faq' => array(
      'name' => t('Вопросы и ответы'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'podpisnye_resursy_ntb' => array(
      'name' => t('Подписные ресурсы НТБ'),
      'base' => 'node_content',
      'description' => t('Отображаются в блоке в правой колонке'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Информационная рассылка'),
      'base' => 'node_content',
      'description' => t('Рассылки о тестовых доступах, подписных ресурсах, важные объявления.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'slideshow' => array(
      'name' => t('Слайдер'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'snils' => array(
      'name' => t('СНИЛС'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
