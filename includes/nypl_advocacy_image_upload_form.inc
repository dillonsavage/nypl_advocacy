<?php
function nypl_advocacy_admin_images_form($form_state) {
    $form = array('#attributes' => array('enctype' => 'multipart/form-data'));
    $form['leading_branches'] = array(
	      '#type' => 'fieldset', 
	      '#title' => t('Designate top 3 leading Branches'), 
	      '#weight' => 5, 
	      '#collapsible' => FALSE, 
	      '#collapsed' => FALSE,
	);
	$form['leading_branches']['manhattan_branch'] = array(
        '#type' => 'select',
        '#title' => t('Leading Manhattan Branch'),
        '#options' => array(),	
	);
	$form['leading_branches']['bronx_branch'] = array(
        '#type' => 'select',
        '#title' => t('Leading Bronx Branch'),
        '#options' => array(),	
	);
	$form['leading_branches']['staten_island_branch'] = array(
        '#type' => 'select',
        '#title' => t('Leading Staten Island Branch'),
        '#options' => array(),	
	);		
	$form['campaign_assets'] = array(
	      '#type' => 'fieldset', 
	      '#title' => t('Campaign Assets'), 
	      '#weight' => 5, 
	      '#collapsible' => FALSE, 
	      '#collapsed' => FALSE,
	);
	$form['campaign_assets']['donate_button'] = array(
        '#type' => 'file',
        '#title' => t('"Donate" Button Image'),
        '#size' => 48,
        '#description' => t('Upload Donate button image.'),
    );
	$form['campaign_assets']['donate_link'] = array(
        '#type' => 'textfield',
        '#title' => t('"Donate" Button Link'),
        '#size' => 48,
        '#description' => t('Add donate button link.'),
    );
	$form['campaign_assets']['write_button'] = array(
        '#type' => 'file',
        '#title' => t('"Write" Button Image'),
        '#size' => 48,
        '#description' => t('Upload Donate button image.'),
    );
	$form['campaign_assets']['write_link'] = array(
        '#type' => 'textfield',
        '#title' => t('"write" Button Link'),
        '#size' => 48,
        '#description' => t('Add donate button link.'),
    );
    return $form;
}

function  nypl_advocacy_admin_images_form_submit($form, $form_state) {
    $validators = array();
    $file = file_save_upload('file', $validators, 'path');
    file_set_status($file, FILE_STATUS_PERMANENT);
}


?>