<?php

function nypl_advocacy_socialmedia_form() {
  $form = array();

  $form['tweet_txt'] = array(
    '#type' => 'textarea',
    '#title' => t('Tweet Text'),
    '#default_value' => variable_get('nypl_advocacy_tweet_txt', ''),
    '#rows' => 3,
  );
  $form['fb_description'] = array(
    '#type' => 'textarea',
    '#title' => t('Facebook Description'),
    '#default_value' => variable_get('nypl_advocacy_fb_description', ''),
    '#rows' => 3,
  );
  $form['fb_url'] = array(
    '#type' => 'text',
    '#title' => t('Facebook URL'),
    '#default_value' => variable_get('nypl_advocacy_fb_url', ''),
    '$size' => 50,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  
  return $form;
}

function nypl_advocacy_socialmedia_form_submit($form, &$form_state) {
  nypl_advocacy_admin_form_submit($form, $form_state, 'socialmedia');
}

?>