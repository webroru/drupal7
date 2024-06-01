UPDATE `system`
SET filename = CONCAT(
        SUBSTRING_INDEX(filename, '/', 3),
        '/contrib/',
        SUBSTRING(filename, LOCATE('/', filename, LOCATE('/', filename, LOCATE('/', filename) + 1) + 1) + 1)
               )
where filename like 'sites/all/modules/%';

update `system` set filename = 'sites/all/themes/contrib/bootstrap/bootstrap.info'
where name = 'bootstrap';

update `system` set filename = 'sites/all/themes/contrib/marinelli/marinelli.info'
where name = 'marinelli';

update `system` set filename = 'sites/all/themes/custom/ntb/ntb.info'
where name = 'ntb';

update `system` set filename = 'sites/all/modules/custom/custom/custom.module'
where name = 'custom';

update `system` set filename = 'sites/all/modules/custom/openid_donstu/openid_donstu.module'
where name = 'openid_donstu';

update `system` set filename = 'sites/all/modules/custom/search_numeration/search_numeration.module'
where name = 'search_numeration';

update `system` set filename = 'sites/all/modules/custom/snils_registration/snils_registration.module'
where name = 'snils_registration';

update `system` set filename = 'sites/all/modules/custom/teaser_thumbnail/teaser_thumbnail.module'
where name = 'teaser_thumbnail';

UPDATE `registry`
SET filename = CONCAT(
        SUBSTRING_INDEX(filename, '/', 3),
        '/contrib/',
        SUBSTRING(filename, LOCATE('/', filename, LOCATE('/', filename, LOCATE('/', filename) + 1) + 1) + 1)
               )
where filename like 'sites/all/modules/%';

UPDATE `registry_file`
SET filename = CONCAT(
        SUBSTRING_INDEX(filename, '/', 3),
        '/contrib/',
        SUBSTRING(filename, LOCATE('/', filename, LOCATE('/', filename, LOCATE('/', filename) + 1) + 1) + 1)
               )
where filename like 'sites/all/modules/%';

truncate table cache;

truncate table cache_block;

truncate table cache_bootstrap;

truncate table cache_features;

truncate table cache_feeds_http;

truncate table cache_field;

truncate table cache_filter;

truncate table cache_form;

truncate table cache_hacked;

truncate table cache_image;

truncate table cache_l10n_update;

truncate table cache_libraries;

truncate table cache_menu;

truncate table cache_page;

truncate table cache_panels;

truncate table cache_path;

truncate table cache_rules;

truncate table cache_search_api_attachments;

truncate table cache_search_api_solr;

truncate table cache_token;

truncate table cache_update;

truncate table cache_variable;

truncate table cache_views;

truncate table cache_views_data;

