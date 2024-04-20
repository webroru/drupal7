<?php

/**
 * @file
 * ntb_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ntb_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'body';
  $mini->category = '';
  $mini->admin_title = 'Body';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-12',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left column',
        'parent' => 'main-column',
      ),
      1 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => '_____________________________________',
        ),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'md' => 'col-md-6',
          'lg' => 'col-lg-6',
        ),
      ),
      '_____________________________________' => array(
        'type' => 'region',
        'title' => 'Main Region',
        'parent' => '1',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'center' => array(),
      'test' => NULL,
      '_____________________________________' => NULL,
    ),
    'style' => 'kalacustomize',
    'center' => array(
      'style' => 'kalacustomize',
    ),
    '_____________________________________' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1f0233b4-8453-49f4-858d-559f0e4771c6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-70c0e8e9-9e33-4b93-b28d-fb629134254c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-catalog';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'category/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'kalacustomize',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '70c0e8e9-9e33-4b93-b28d-fb629134254c';
    $display->content['new-70c0e8e9-9e33-4b93-b28d-fb629134254c'] = $pane;
    $display->panels['center'][0] = 'new-70c0e8e9-9e33-4b93-b28d-fb629134254c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['body'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Подвал';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'container',
        'contains' => 'row',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'row',
        'children' => array(
          0 => 'main-column',
          1 => 1,
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-column' => array(
        'type' => 'column',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'center' => array(
        'type' => 'region',
        'title' => '1',
        'parent' => 'main-column',
      ),
      1 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => '___________________________',
        ),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      '___________________________' => array(
        'type' => 'region',
        'title' => '2',
        'parent' => '1',
      ),
      2 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => '____________________________',
        ),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      '____________________________' => array(
        'type' => 'region',
        'title' => '3',
        'parent' => '2',
      ),
      3 => array(
        'type' => 'column',
        'parent' => 'main',
        'children' => array(
          0 => '4',
        ),
        'class' => '',
        'contains' => 'region',
        'bootstrap_class' => array(
          'xs' => 'col-xs-12',
          'sm' => 'col-sm-3',
          'md' => 'col-md-3',
          'lg' => 'col-lg-3',
        ),
      ),
      4 => array(
        'type' => 'region',
        'title' => '4',
        'parent' => '3',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      11 => NULL,
      55 => array(
        'column_size' => '3',
        'offset_size' => '0',
      ),
      '___________________________' => NULL,
      'middle' => NULL,
      'center' => NULL,
      '____________________________' => NULL,
      '_________________________________' => NULL,
      4 => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
    55 => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'aa994063-e8e9-4c78-ac84-47107d663e3f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-99d721a5-6aa3-4a6b-b4b8-9f4875c701c8';
    $pane->panel = '4';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-readers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '99d721a5-6aa3-4a6b-b4b8-9f4875c701c8';
    $display->content['new-99d721a5-6aa3-4a6b-b4b8-9f4875c701c8'] = $pane;
    $display->panels['4'][0] = 'new-99d721a5-6aa3-4a6b-b4b8-9f4875c701c8';
    $pane = new stdClass();
    $pane->pid = 'new-eda1e2ce-37fa-4084-ad61-d38244e3c310';
    $pane->panel = '4';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-social';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eda1e2ce-37fa-4084-ad61-d38244e3c310';
    $display->content['new-eda1e2ce-37fa-4084-ad61-d38244e3c310'] = $pane;
    $display->panels['4'][1] = 'new-eda1e2ce-37fa-4084-ad61-d38244e3c310';
    $pane = new stdClass();
    $pane->pid = 'new-d5a37aea-2398-4e2a-a3a6-2d0d2b68af2c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-dstu-library';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd5a37aea-2398-4e2a-a3a6-2d0d2b68af2c';
    $display->content['new-d5a37aea-2398-4e2a-a3a6-2d0d2b68af2c'] = $pane;
    $display->panels['center'][0] = 'new-d5a37aea-2398-4e2a-a3a6-2d0d2b68af2c';
    $pane = new stdClass();
    $pane->pid = 'new-81af4da3-8fee-4ec2-9e1f-67ba78d40033';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-services';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '81af4da3-8fee-4ec2-9e1f-67ba78d40033';
    $display->content['new-81af4da3-8fee-4ec2-9e1f-67ba78d40033'] = $pane;
    $display->panels['center'][1] = 'new-81af4da3-8fee-4ec2-9e1f-67ba78d40033';
    $pane = new stdClass();
    $pane->pid = 'new-d2294d8a-5108-4ece-85ca-4171d04f12c0';
    $pane->panel = '___________________________';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-information';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2294d8a-5108-4ece-85ca-4171d04f12c0';
    $display->content['new-d2294d8a-5108-4ece-85ca-4171d04f12c0'] = $pane;
    $display->panels['___________________________'][0] = 'new-d2294d8a-5108-4ece-85ca-4171d04f12c0';
    $pane = new stdClass();
    $pane->pid = 'new-62898a64-cc1b-441e-823a-7b241251f814';
    $pane->panel = '____________________________';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-internet-resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62898a64-cc1b-441e-823a-7b241251f814';
    $display->content['new-62898a64-cc1b-441e-823a-7b241251f814'] = $pane;
    $display->panels['____________________________'][0] = 'new-62898a64-cc1b-441e-823a-7b241251f814';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer'] = $mini;

  return $export;
}
