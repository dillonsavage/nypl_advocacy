<?php

/**
 * @file
 * @brief misc. advocacy administrative settings. 
 */
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_helpers');

/**
 * Implementation of hook_form()
 */
function nypl_advocacy_admin_images_form($form_state) {
  variable_set('nypl_advocacy_img_path', '/www/sites/new.nypl.org/sites/default/files/advocacy');
  $button = _get_button_image();
  $form = array('#attributes' => array('enctype' => 'multipart/form-data'));
  $form['leading_branches'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Designate top 3 leading Branches'), 
    '#weight' => 5, 
    '#collapsible' => FALSE, 
    '#collapsed' => FALSE,
  );
  $form['leading_branches']['show_branch_badges'] = array(
    '#type' => 'radios', 
    '#title' => t('Show Leading Library Badges?'), 
    '#default_value' => variable_get('nypl_advocacy_show_branch_badges', 0), 
    '#options' => array(t('No'), t('Yes')), 
  );
  $form['leading_branches']['manhattan_branch'] = array(
    '#type' => 'select',
    '#title' => t('Leading Manhattan Branch'),
    '#options' => _get_branches_select_box('New York'),
    '#default_value' => variable_get('nypl_advocacy_leading_manhattan_branch',''),		
  );
  $form['leading_branches']['bronx_branch'] = array(
    '#type' => 'select',
    '#title' => t('Leading Bronx Branch'),
    '#options' => _get_branches_select_box('Bronx'),
    '#default_value' => variable_get('nypl_advocacy_leading_bronx_branch',''),	
  );
  $form['leading_branches']['staten_island_branch'] = array(
    '#type' => 'select',
    '#title' => t('Leading Staten Island Branch'),
    '#options' => _get_branches_select_box('Staten Island'),	
    '#default_value' => variable_get('nypl_advocacy_leading_staten_island_branch',''),
  );			
  $form['campaign_assets'] = array(
    '#type' => 'fieldset', 
    '#title' => t('Campaign Assets'), 
    '#weight' => 5, 
    '#collapsible' => FALSE, 
    '#collapsed' => FALSE,
    '#description' => t('Note: you must refresh the page in order to see the most recent button uploads.'),
  );
  $form['campaign_assets']['donate_button'] = array(
    '#type' => 'file',
    '#title' => t('"Donate" Button Image'),
    '#size' => 48,
    '#description' => t('Upload Donate button image (jpg only).'),
  );
  $form['campaign_assets']['current_donate_button'] = array(
    '#value' =>  '<p>' . $button['donate-button']['tag'] . '</p>',
  );
  $form['campaign_assets']['landing_donate_button_link'] = array(
    '#type' => 'textarea', 
    '#title' => t('Donate Button Link'),  
    '#size' => 25,
    '#default_value' => variable_get('nypl_advocacy_donate_button_link', ''),
  );
  $form['campaign_assets']['write_button'] = array(
    '#type' => 'file',
    '#title' => t('"Write" Button Image'),
    '#size' => 48,
    '#description' => t('Upload Donate button image (jpg only).'),
  );
  $form['campaign_assets']['current_write_button'] = array(
    '#value' => '<p>' . $button['write-button']['tag'] . '</p>',
  );
  $form['campaign_assets']['landing_write_button_link'] = array(
    '#type' => 'textarea', 
    '#title' => t('Write Button Link'),  
    '#size' => 25,
    '#default_value' => variable_get('nypl_advocacy_write_button_link', ''),
  );
  $form['submit'] = array(
    '#type' => 'submit', 
    '#value' => t('Save'),
    '#weight' => 50,
    '#attributes' => array('onclick' => 'window.location.reload();'),
  );
  return $form;
}

/**
 * Submit handler
 */
function nypl_advocacy_admin_images_form_submit($form, $form_state) {
  if (isset($form_state['values'])) {
    $form_values = $form_state['values'];
    variable_set('nypl_advocacy_leading_manhattan_branch', $form_values['manhattan_branch']);
    variable_set('nypl_advocacy_leading_bronx_branch', $form_values['bronx_branch']);
    variable_set('nypl_advocacy_leading_staten_island_branch', $form_values['staten_island_branch']);
    variable_set('nypl_advocacy_donate_button_filename', $form_values['donate_button']);
    variable_set('nypl_advocacy_write_button_filename', $form_values['write_button']);	
    variable_set('nypl_advocacy_show_branch_badges', $form_values['show_branch_badges']);
    variable_set('nypl_advocacy_donate_button_link', $form_values['landing_donate_button_link']);
    variable_set('nypl_advocacy_write_button_link', $form_values['landing_write_button_link']);
    $validators = array(
			'file_validate_is_image' => array(), 
		);
    
    if ($file1 = file_save_upload('donate_button', $validators)) {	  
      //var_dump($form_state['values']['donate_button']->picture);
      if (isset($form_state['values']['donate_button']->picture) && file_exists($form_state['values']['donate_button']->picture)) {
        $form_state['values']['donate_button']->picture;
      }
      
      $info1 = image_get_info($file1->filepath);
      $destination1 = variable_get('nypl_advocacy_img_path', 'files') . '/donate-button.' . $info1['extension'];
      if (file_copy($file1, $destination1, FILE_EXISTS_REPLACE)) {
        $form_state['values']['donate_button'] = $file1->filepath;
	      drupal_set_message('Your file(s) have been saved.');
	      //drupal_set_message('File, %file has been saved.', array('%file' => $file1->filepath));
      }
      else {
        form_set_error('button_image_upload', t("Failed to upload the picture image; the %directory directory doesn't exist or is not writable.", array('%directory' => variable_get('nypl_advocacy_picture_path', 'pictures'))));
      }
    }
    
    if ($file2 = file_save_upload('write_button', $validators)) {	  
      if (isset($form_state['values']['write_button']->picture) && file_exists($form_state['values']['write_button']->picture)) {
        file_delete($form_state['values']['write_button']->picture);
      }
      
      $info2 = image_get_info($file2->filepath);
      $destination2 = variable_get('nypl_advocacy_img_path', 'files') . '/write-button.' . $info2['extension'];
      if (file_copy($file2, $destination2, FILE_EXISTS_REPLACE)) {
        $form_state['values']['write_button'] = $file2->filepath;
	drupal_set_message('Your file(s) have been saved.');
        //drupal_set_message('File, %file has been saved.', array('%file' => $file2->filepath));	
      }
      else {
        form_set_error('button_image_upload', t("Failed to upload the picture image; the %directory directory doesn't exist or is not writable.", array('%directory' => variable_get('nypl_advocacy_picture_path', 'pictures'))));
      }
    }
  }
  $button_images = _get_button_image();
  $form_state['values']['current_write_button'] = $button_images['tag']['write-button'];
  $form_state['values']['current_donate_button'] = $button_images['tag']['donate-button'];
}

function _get_branches_select_box($city) {
  $sql = _get_branch_sql();
	$result = db_query($sql, $city);
	$list = array();		
	while($row = db_fetch_array($result)) {
		$list[$row['location_symbol']] = $row['location_name']; 
	}
	$location_list = array(array("id" => "all", "description" => "All Locations"));
	return array('none' => '--- Please Select ---') + $list;
}