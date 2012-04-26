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
      '#options' => _get_branches('New York'),
      '#default_value' => variable_get('nypl_advocacy_leading_manhattan_branch',''),	
	);
	$form['leading_branches']['bronx_branch'] = array(
      '#type' => 'select',
      '#title' => t('Leading Bronx Branch'),
      '#options' => _get_branches('Bronx'),
  	  '#default_value' => variable_get('nypl_advocacy_leading_bronx_branch',''),	
	);
	$form['leading_branches']['staten_island_branch'] = array(
      '#type' => 'select',
      '#title' => t('Leading Staten Island Branch'),
      '#options' => _get_branches('Staten Island'),	
	  '#default_value' => variable_get('nypl_advocacy_leading_staten_island_branch',''),
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
	  '#default_value' => variable_get('nypl_advocacy_donate_button_path', ''),
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
      '#default_value' => variable_get('nypl_advocacy_write_button_link', ''),
    );
	$form['submit'] = array(
      '#type' => 'submit', 
	  '#value' => t('Save'),
	  '#weight' => 50,
	);
    return $form;
}

function  nypl_advocacy_admin_images_form_submit($form, $form_state) {
    $validators = array();
    $file = file_save_upload('file', $validators, 'path');
    file_set_status($file, FILE_STATUS_PERMANENT);
}

function _get_branches($city){
	$sql = 'SELECT locations.symbol AS location_symbol, locations_term.vid, term_hierarchy.tid, term_data.name AS location_name
			FROM locations
			JOIN locations_spaces ON locations.sid = locations_spaces.sid
			JOIN locations_term ON locations.lid = locations_term.lid
			JOIN term_hierarchy ON locations_term.tid = term_hierarchy.tid
			JOIN term_data ON locations_term.tid = term_data.tid
			WHERE locations_spaces.city = "%s"
			AND term_hierarchy.parent = 0
			AND locations_term.vid = 2';

	$result = db_query($sql, $city);
	$list = array();		
	while($row = db_fetch_array($result)){
		$list[$row['location_symbol']] = $row['location_name']; 
	}
	$location_list = array(array("id" => "all", "description" => "All Locations"));
	return array('none' => '--- Please Select ---') + $list;
}

?>