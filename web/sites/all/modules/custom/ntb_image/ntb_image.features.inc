<?php

/**
 * @file
 * ntb_image.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ntb_image_image_default_styles() {
  $styles = array();

  // Exported image style: slider.
  $styles['slider'] = array(
    'label' => 'slider',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1000,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
