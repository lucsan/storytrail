<?php

/**
 * @file
 * storytrail.data.inc 
 * Include file to keep database functions and code organised
 *
 */

/**
 * Dummy function to provide an options array for the select element form.
 *
 */   
function storytrail_demo_select_data_load() {
  return array(
    'apple',
    'orange',
    'bannana',
    'fish',
    'trillobyte',
  );
}

/**
 * Wrapper function for drupal's module_list().
 *
 */  
function storytrail_module_list() {
  return module_list();
}