<?php
/**
 * @file
 * template.php
 */

/**
 * Implements hook_form_alter().
 */
function ntb_form_search_api_page_search_form_solr_search_page_alter(array &$form, array &$form_state = array(), $form_id = NULL) {
  $form['#attributes']['class'][] = 'form-search';
  // Apply a clearfix so the results don't overflow onto the form.
  $form['#attributes']['class'][] = 'content-search';

  $form['#title'] = '';
  $form['keys_1']['#attributes']['placeholder'] = t('Search in the DLS DSTU');

  // Hide the default button from display and implement a theme wrapper
  // to add a submit button containing a search icon directly after the
  // input element.
  $form['submit_1']['#attributes']['class'][] = 'element-invisible';
  //unset($form['submit_1']);

  $form['keys_1']['#theme_wrappers'] = array('bootstrap_search_form_wrapper');
}