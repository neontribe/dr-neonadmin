<?php

/**
 * @file
 * Drush implementation for the neonadmin module.
 */

/**
 * Implementats hook_drush_command().
 */
function neonadmin_drush_command() {
  $items = array();
  $items['nt-site-dump'] = array(
    'description' => 'Dump the sql for this site and then tar.gz up the whole thing.',
    'aliases' => array('ntsd'),
    'options' => array(
      'sql-folder' => 'Which folder to store sql dumps in, default: sites/<SITE>/sql, note this should be inside the site or it will not be included in the tar.',
    ),
  );
  return $items;
}

/**
 * Implementats of hook_drush_help().
 */
function neonadmin_drush_help($section) {
  switch ($section) {
    case 'drush:nt-site-dump':
      return dt("Help, Help, Help!!!");
  }
}

/**
 * Drush command callback.
 */
function drush_neonadmin_site_dump() {
} 

/* vim: set expandtab tabstop=2 shiftwidth=2 autoindent smartindent: */
