<?php

/**
 * @file
 * ntb_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ntb_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: модератор.
  $roles['модератор'] = array(
    'name' => 'модератор',
    'weight' => 3,
  );

  return $roles;
}
