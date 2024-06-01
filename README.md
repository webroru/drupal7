## Import DB

* `docker compose exec php bash`
* `gunzip < ntb.2024-04-21.sql.gz | mysql -u root -h mysql drupal`
* `mysql -u root -h mysql drupal < update_path.sql`

## Update Bootstrap config

Go to `admin/appearance/settings/ntb` set
* sites/all/themes/custom/ntb/css/bootstrap.css
* sites/all/themes/custom/ntb/css/bootstrap.min.css
* sites/all/themes/custom/ntb/js/bootstrap.js
* sites/all/themes/custom/ntb/js/bootstrap.min.js

Execute SQL: `delete from variable where name = 'bootstrap_cdn_cache';`
`drush cc all`

## Setup file system

Go to `admin/config/media/file-system` set `/tmp`

* `docker compose exec php bash`
* `mkdir web/sites/default/files/privat_files`
* `chown -R www-data:  web/sites/default/files`
