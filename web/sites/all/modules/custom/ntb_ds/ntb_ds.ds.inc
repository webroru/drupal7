<?php

/**
 * @file
 * ntb_ds.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ntb_ds_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|catalog|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'catalog';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|catalog|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|catalog|short';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'catalog';
  $ds_fieldsetting->view_mode = 'short';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|catalog|short'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|catalog|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'catalog';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|catalog|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ntb_ds_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|catalog|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'catalog';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'field_category',
        3 => 'field_author',
        4 => 'field_year',
        5 => 'field_isbn',
        6 => 'field_sign',
        7 => 'field_udk',
        8 => 'field_publisher',
        9 => 'field_redaction',
        10 => 'field_bibliographic_description',
      ),
      'bottom' => array(
        11 => 'body',
        12 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'field_image' => 'left',
      'field_category' => 'right',
      'field_author' => 'right',
      'field_year' => 'right',
      'field_isbn' => 'right',
      'field_sign' => 'right',
      'field_udk' => 'right',
      'field_publisher' => 'right',
      'field_redaction' => 'right',
      'field_bibliographic_description' => 'right',
      'body' => 'bottom',
      'node_link' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|catalog|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|catalog|short';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'catalog';
  $ds_layout->view_mode = 'short';
  $ds_layout->layout = 'bootstrap_4_8';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title' => 'right',
    ),
  );
  $export['node|catalog|short'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|catalog|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'catalog';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_6_6_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'top' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_image',
      ),
      'right' => array(
        2 => 'field_author',
        3 => 'field_isbn',
        4 => 'field_year',
        5 => 'field_publisher',
      ),
      'bottom' => array(
        6 => 'body',
        7 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'top',
      'field_image' => 'left',
      'field_author' => 'right',
      'field_isbn' => 'right',
      'field_year' => 'right',
      'field_publisher' => 'right',
      'body' => 'bottom',
      'node_link' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|catalog|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|catalog|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'catalog';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'description' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['taxonomy_term|catalog|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ntb_ds_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'short';
  $ds_view_mode->label = 'Кратко';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['short'] = $ds_view_mode;

  return $export;
}
