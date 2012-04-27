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
  return '<img class="' . preg_replace('/_/','-',$city) . '-badge" src = "'. $base_url . '/sites/default/files/advocacy/badges/' . $symbol . '.jpg" alt="Leading library in ' . ucwords(preg_replace('/_/',' ',$city)) . '"/>';
}

function _nypl_advocacy_get_badge($sid) {
  $symbol_q = db_query('SELECT symbol FROM {locations} l
    LEFT JOIN {locations_term} lt ON l.lid = lt.lid
    LEFT JOIN {webform_submitted_data} wd ON wd.data = lt.tid
    WHERE wd.cid = 18 AND wd.sid = %d', $sid);
  if ($symbol = db_result($symbol_q)) {
    $extension = '.jpg';
    // generate location badge filename
    $badge_filename = '/sites/default/files/advocacy/badges/' . $symbol . $extension;
  }
  else {
    return NULL;
  }
  return $badge_filename;
}

