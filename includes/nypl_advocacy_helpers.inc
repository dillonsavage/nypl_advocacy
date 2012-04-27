<?php
/**
 * @file
 * helper functions for advocacy.
 */
 
function _get_button_image(){
	$dir = variable_get('nypl_advocacy_img_path','');
	$files = scandir($dir);	
	$my_files = array();
	global $base_url;	
	foreach($files as $img){
		if(preg_match("/write-button/",$img) || preg_match("/donate-button/", $img)){
			$info[] = pathinfo($dir . "/" . $img);
		}		
	}
	if(isset($info)){
		foreach($info as $i){
			$my_files[$i['filename']] = array(
				'link' => $base_url . '/sites/default/files/advocacy/' . $i['basename'],
				'tag' =>  '<img class="' . $i['filename'] . '" src = "'. $base_url . '/sites/default/files/advocacy/' . $i['basename'] . '" alt="' . $i['filename'] . '"/>',		
			);
		}
		return $my_files;
	}
	else{
	  $empty_tag = '<img src="" alt="no-image"/>';
	  return array('donate-button' => array('tag' => $empty_tag), 'write-button' => array('tag' => $empty_tag));
	}
}

function _nypl_advocacy_leading_library_badge($city){
  global $base_url;
  $symbol = variable_get('nypl_advocacy_leading_'.$city.'_branch','default');
  return '<img class="' . preg_replace('_','-',$city) . '-badge" src = "'. $base_url . '/sites/default/files/advocacy/badges/' . $symbol . '.jpg" alt="Leading library in ' . ucfirst(preg_replace('_',' ',$city)) . '"/>';
}

