<?php

/**
 * @file
 * ntb_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ntb_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Разработка',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Особенности',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-catalog.
  $menus['menu-catalog'] = array(
    'menu_name' => 'menu-catalog',
    'title' => 'Каталог',
    'description' => '',
  );
  // Exported menu: menu-dstu-library.
  $menus['menu-dstu-library'] = array(
    'menu_name' => 'menu-dstu-library',
    'title' => 'Библиотека ДГТУ',
    'description' => '',
  );
  // Exported menu: menu-events.
  $menus['menu-events'] = array(
    'menu_name' => 'menu-events',
    'title' => 'События',
    'description' => '',
  );
  // Exported menu: menu-information.
  $menus['menu-information'] = array(
    'menu_name' => 'menu-information',
    'title' => 'Информация',
    'description' => '',
  );
  // Exported menu: menu-internet-resources.
  $menus['menu-internet-resources'] = array(
    'menu_name' => 'menu-internet-resources',
    'title' => 'Интернет ресурсы',
    'description' => '',
  );
  // Exported menu: menu-readers.
  $menus['menu-readers'] = array(
    'menu_name' => 'menu-readers',
    'title' => 'Читателям',
    'description' => '',
  );
  // Exported menu: menu-resources.
  $menus['menu-resources'] = array(
    'menu_name' => 'menu-resources',
    'title' => 'Ресурсы библиотеки',
    'description' => '',
  );
  // Exported menu: menu-services.
  $menus['menu-services'] = array(
    'menu_name' => 'menu-services',
    'title' => 'Услуги',
    'description' => '',
  );
  // Exported menu: menu-skype.
  $menus['menu-skype'] = array(
    'menu_name' => 'menu-skype',
    'title' => 'На связи',
    'description' => 'Связь по Скайпу',
  );
  // Exported menu: menu-social.
  $menus['menu-social'] = array(
    'menu_name' => 'menu-social',
    'title' => 'Мы в соцсетях',
    'description' => '',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development link');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');
  t('Библиотека ДГТУ');
  t('Интернет ресурсы');
  t('Информация');
  t('Каталог');
  t('Мы в соцсетях');
  t('На связи');
  t('Особенности');
  t('Разработка');
  t('Ресурсы библиотеки');
  t('Связь по Скайпу');
  t('События');
  t('Услуги');
  t('Читателям');

  return $menus;
}
