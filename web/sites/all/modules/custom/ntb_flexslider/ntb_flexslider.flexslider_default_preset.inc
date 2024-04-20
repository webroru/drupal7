<?php

/**
 * @file
 * ntb_flexslider.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function ntb_flexslider_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'default';
  $preset->title = 'Default';
  $preset->theme = 'classic';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => FALSE,
    'smoothHeight' => FALSE,
    'startAt' => 0,
    'animationSpeed' => 600,
    'initDelay' => 0,
    'useCSS' => TRUE,
    'touch' => TRUE,
    'video' => FALSE,
    'keyboard' => TRUE,
    'multipleKeyboard' => FALSE,
    'mousewheel' => FALSE,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '',
    'asNavFor' => '',
    'itemWidth' => 0,
    'itemMargin' => 0,
    'minItems' => 0,
    'maxItems' => 0,
    'move' => 0,
    'animation' => 'fade',
    'slideshow' => TRUE,
    'slideshowSpeed' => 7000,
    'directionNav' => TRUE,
    'controlNav' => '1',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => FALSE,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => FALSE,
    'thumbCaptions' => FALSE,
    'thumbCaptionsBoth' => FALSE,
    'animationLoop' => TRUE,
    'pauseOnAction' => TRUE,
    'pauseOnHover' => FALSE,
    'manualControls' => '',
  );
  $export['default'] = $preset;

  return $export;
}
