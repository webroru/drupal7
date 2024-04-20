<?php

/**
 * @file
 * ntb_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ntb_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'articles';
  $feeds_importer->config = array(
    'name' => 'Материалы',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category',
            'target' => 'field_category_site',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'frontpage',
            'target' => 'promote',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'created',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'page',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['articles'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'catalog_item';
  $feeds_importer->config = array(
    'name' => 'Элемент каталога',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category',
            'target' => 'field_category',
            'term_search' => '2',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'author',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'redaction',
            'target' => 'field_redaction',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'publisher',
            'target' => 'field_publisher',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'isbn',
            'target' => 'field_isbn',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'udk',
            'target' => 'field_udk',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'sign',
            'target' => 'field_sign',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'year',
            'target' => 'field_year',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'image',
            'target' => 'field_image:uri',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'tags',
            'target' => 'field_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          13 => array(
            'source' => 'new',
            'target' => 'field_new',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'catalog',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['catalog_item'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'category_catalog';
  $feeds_importer->config = array(
    'name' => 'Категороии Каталога',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'term',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'parent_term',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'catalog',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['category_catalog'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'category_site';
  $feeds_importer->config = array(
    'name' => 'Категории сайта',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'term',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'parent_term',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'category_site',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['category_site'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'download_counter';
  $feeds_importer->config = array(
    'name' => 'Счетчик скачиваний',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '737',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Nid',
            'target' => 'nid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Скачивания',
            'target' => 'field_download_counter',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'catalog',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['download_counter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'faq';
  $feeds_importer->config = array(
    'name' => 'faq',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'question',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'answer',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
        'bundle' => 'faq',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['faq'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'products';
  $feeds_importer->config = array(
    'name' => 'Products',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsSpider',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserHTML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'h1',
          'xpathparser:1' => './/div[@class=\'features\']',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
        ),
        'context' => './/div[@id=\'content\']',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'context' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'product',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['products'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'snils';
  $feeds_importer->config = array(
    'name' => 'СНИЛС',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ';',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'snils',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'snils',
            'target' => 'field_snils',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'snils',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['snils'] = $feeds_importer;

  return $export;
}
