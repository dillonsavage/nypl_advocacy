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

function _get_branch_sql(){
	$sql = 'SELECT locations.symbol AS location_symbol, locations_term.vid, term_hierarchy.tid, term_data.name AS location_name
			FROM locations
			JOIN locations_spaces ON locations.sid = locations_spaces.sid
			JOIN locations_term ON locations.lid = locations_term.lid
			JOIN term_hierarchy ON locations_term.tid = term_hierarchy.tid
			JOIN term_data ON locations_term.tid = term_data.tid
			WHERE locations_spaces.city = "%s"
			AND term_hierarchy.parent = 0
			AND locations_term.vid = 2';

  return $sql;
}

function _get_branches_page($city){
  global $base_url;
  $sql = _get_branch_sql();
  db_set_active('nypl');	
  $result = db_query($sql, $city);
  $list = array();		
  while($row = db_fetch_array($result)){
    $list[$row['location_symbol']] = array(
					   'branch_name' => $row['location_name'],
					   'badge_image' => '<img class="' . preg_replace('/_/','-',$city) . '-badge" src = "'. $base_url . '/sites/default/files/advocacy/badges/' . $row['location_symbol'] . '.jpg" alt="Leading library in ' . ucwords(preg_replace('/_/',' ',$city)) . '"/>',
					   'letter_download' => '<span class="letter-download">'. l('DOWNLOAD YOUR LETTER','') . "</span>",
					   'badge_download' => '<span class="badge-download">'. l('DOWNLOAD', $base_url .'/speakout/toolbox/download/' . $row['location_symbol']) . "</span>",
					   ); 
  }
  db_set_active('default');
  return $list;
}

function _download_image($symbol){
  global $base_url;
  $path = $base_url . '/sites/default/files/advocacy/badges/' . $symbol  . '.jpg';
  header('Content-Description: File Transfer');
  header('Content-type: application/octet-stream');
  header("Content-Disposition: attachment; filename=" . $path);
  header('Expires: 0');
  header('Cache-Control: must-revalidate, post-check=0, pre-check=0');
  header('Pragma: public');
  ob_clean();
  flush();
  readfile($path);
  exit;
}