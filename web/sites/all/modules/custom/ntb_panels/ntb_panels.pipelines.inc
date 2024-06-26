<?php

/**
 * @file
 * ntb_panels.pipelines.inc
 */

/**
 * Implements hook_default_panels_renderer_pipeline().
 */
function ntb_panels_default_panels_renderer_pipeline() {
  $export = array();

  $pipeline = new stdClass();
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'ipe';
  $pipeline->admin_title = 'In-Place Editor';
  $pipeline->admin_description = 'Allows privileged users to update and rearrange the content while viewing this panel.';
  $pipeline->weight = 0;
  $pipeline->settings = array(
    'renderers' => array(
      0 => array(
        'access' => array(
          'plugins' => array(
            0 => array(
              'name' => 'perm',
              'settings' => array(
                'perm' => 'use panels in place editing',
              ),
              'context' => 'logged-in-user',
            ),
          ),
          'logic' => 'and',
        ),
        'renderer' => 'ipe',
        'options' => array(),
      ),
    ),
  );
  $export['ipe'] = $pipeline;

  $pipeline = new stdClass();
  $pipeline->disabled = FALSE; /* Edit this to true to make a default pipeline disabled initially */
  $pipeline->api_version = 1;
  $pipeline->name = 'standard';
  $pipeline->admin_title = 'Standard';
  $pipeline->admin_description = 'Renders a panel normally. This is the most common option.';
  $pipeline->weight = -100;
  $pipeline->settings = array(
    'renderers' => array(
      0 => array(
        'access' => array(),
        'renderer' => 'standard',
        'options' => array(),
      ),
    ),
  );
  $export['standard'] = $pipeline;

  return $export;
}
