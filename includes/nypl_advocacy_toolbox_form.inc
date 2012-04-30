<?php
/**
 * Implementation of hook_form()
 */
function nypl_advocacy_admin_toolbox_form($form_state){
	$form['toolbox_instructions_text'] = array(
		'#type' => 'textarea', 
    	'#title' => t('Add text to appear on ') . l('speakout/toolbox', 'speakout/toolbox'),  
    	'#size' => 25,
    	'#default_value' => variable_get('nypl_advocacy_toolbox_page_text', ''),
  	);
	$form['submit'] = array(
    	'#type' => 'submit', 
    	'#value' => t('Save'),
    	'#weight' => 50,
    	'#attributes' => array('onclick' => 'window.location.reload();'),
  	);
	return $form;
}

function nypl_advocacy_admin_toolbox_form_submit($form_state){
	variable_set('nypl_advocacy_toolbox_page_text', $form_state['values']['toolbox_instructions_text']);
}