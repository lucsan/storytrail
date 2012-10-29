<?php

/**
 * @file
 * admin interface included functions
 *
 */

/**
 * Implements hook_form().
 * 
 * Admin forms return system_settings_form to drupal_get_form
 * this tells drupal it is an admin form.
 * If the default_value = variable_get variable name is the same as
 * the form element, the form does not need a submit function as everything is
 * handled by drupal.
 */ 
function storytrail_admin_form() {
  $form['storytrail_admin_text_value'] = array(
    '#type' => 'textfield',
    '#title' => 'storytrail admin form',
    '#default_value' => variable_get('storytrail_admin_text_value', ''),
  );
  
  $form['storytrail_admin_submit'] = array(
    '#type' => 'submit',
    '#value' => 'update',
  );
  
  return system_settings_form($form);
}   