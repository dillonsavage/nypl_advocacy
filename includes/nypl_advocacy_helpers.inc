<?php

/**
 * @file
 * helper functions for advocacy.
 */
 
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_branch_to_rep');
 
function _get_button_image() {
	$dir = variable_get('nypl_advocacy_img_path','');
	$files = scandir($dir);
	$my_files = array();
	global $base_url;	
	foreach ($files as $img) {
		if (preg_match("/write-button/",$img) || preg_match("/donate-button/", $img)) {
			$info[] = pathinfo($dir . "/" . $img);
		}		
	}
	if (isset($info)) {
		foreach ($info as $i) {
			$my_files[$i['filename']] = array(
				'link' => $base_url . '/sites/default/files/advocacy/' . $i['basename'],
				'tag' =>  '<img class="' . $i['filename'] . '" src = "'. $base_url . '/sites/default/files/advocacy/' . $i['basename'] . '" alt="' . $i['filename'] . '"/>',		
			);
		}
		return $my_files;
	}
	else {
	  $empty_tag = '<img src="" alt="no-image"/>';
	  return array('donate-button' => array('tag' => $empty_tag), 'write-button' => array('tag' => $empty_tag));
	}
}

function _nypl_advocacy_leading_library_badge($city) {
  global $base_url;
  $symbol = variable_get('nypl_advocacy_leading_'.$city.'_branch','default');
  return '<img class="' . preg_replace('/_/','-',$city) . '-badge" src = "'. $base_url . '/sites/default/files/advocacy/badges/' . $symbol . '.jpg" alt="Leading library in ' . ucwords(preg_replace('/_/',' ',$city)) . '"/>';
}

function _nypl_advocacy_get_badge($sid = NULL) {
  $symbol_sql = 'SELECT symbol FROM {locations} l
    LEFT JOIN {locations_term} lt ON l.lid = lt.lid
    LEFT JOIN {webform_submitted_data} wd ON wd.data = lt.tid
    WHERE wd.cid = 18 AND wd.sid = %d';
  if ($sid && $symbol = db_result(db_query($symbol_sql, $sid))) {
    // generate location badge filename
    $badge_filename = '/sites/default/files/advocacy/badges/' . $symbol . '.jpg';
  }
  else {
    // default badge
    $badge_filename = '/sites/default/files/advocacy/badges/Library.jpg';
  }
  return $badge_filename;
}

function _nypl_advocacy_replace_pinterest($pinterest_code, $sid = NULL) {
  global $base_url;
  $img_search = 'REPLACE_WITH_RESPECTIVE_BRANCH_BUTTON';
  $txt_search = 'NYPL%27s%20LIBRARY_NAME';
  $badge_img = _nypl_advocacy_get_badge($sid);
  $badge_replace = $base_url . $badge_img; 
  $branch_symbol = str_replace('.jpg', '', array_pop(explode('/', $badge_img)));
  $branch_name_q = db_query("SELECT ls.name FROM {locations_spaces} ls
    JOIN {locations} l ON l.sid = ls.sid
    WHERE l.symbol = '%s'", $branch_symbol);
  if ($branch_name_r = db_result($branch_name_q)) {
    $txt_replace = 'NYPL%27s%20' . htmlentities($branch_name_r);
  }
  else {
    $txt_replace = 'NYPL';
  }
  $output = str_replace(array($img_search, $txt_search), array($badge_replace, $txt_replace), $pinterest_code);
  return $output;
}

function _get_branch_sql() {
	$sql = 'SELECT locations.symbol AS location_symbol, locations_term.vid, term_hierarchy.tid, term_data.name AS location_name
		FROM locations
		JOIN locations_spaces ON locations.sid = locations_spaces.sid
		JOIN locations_term ON locations.lid = locations_term.lid
		JOIN term_hierarchy ON locations_term.tid = term_hierarchy.tid
		JOIN term_data ON locations_term.tid = term_data.tid
		WHERE locations_spaces.city = "%s"
		AND term_hierarchy.parent = 0
		AND locations_term.vid = 2
    ORDER BY term_data.name';
  return $sql;
}

function _get_branches_page($city) {
  global $base_url;
  $sql = _get_branch_sql();
  db_set_active('nypl');	
  $result = db_query($sql, $city);
  $list = array();	
  $letter = _map_branch_to_rep();	
  $img_search = 'REPLACE_WITH_RESPECTIVE_BRANCH_BUTTON';
  $txt_search = 'NYPL%27s%20LIBRARY_NAME';
  $link_search = 'pinterest button';
  $pinterest_code = variable_get('nypl_advocacy_ty_pinterest', '');
 
  while($row = db_fetch_array($result)) {
    if ($row['location_symbol'] != 'DLC') {
      $url_replace = $base_url . '/sites/default/files/advocacy/badges/' .$row['location_symbol'] . '.jpg'; 
      $pinterest_url = str_replace(array($img_search, $link_search, $txt_search), array($url_replace,'<img src="http://assets.pinterest.com/images/PinExt.png"/>',"NYPL's " . $row['location_name'] . " Library"), $pinterest_code);
      $list[$row['location_symbol']] = array(
        'branch_name' => $row['location_name'],
        'badge_image' => '<img src = "'. $base_url . '/sites/default/files/advocacy/badges/' . $row['location_symbol'] . '.jpg" alt="Leading library in ' . ucwords(preg_replace('/_/',' ',$city)) . '"/>',
        'letter_download' => '<span class="letter-download">'. l('DOWNLOAD YOUR LETTER', $base_url . '/sites/default/files/advocacy/letters/Adult-English-' . $letter[$row['location_symbol']] . '.pdf') . "</span>",
        'badge_download' => '<span class="badge-download">'. l('DOWNLOAD YOUR BUTTON', $base_url .'/speakout/toolbox/download/' . $row['location_symbol'] . '/' . $row['location_name']) . "</span>",
        'pinterest' => $pinterest_url,
			); 
    }
  }
  db_set_active('default');
  return $list;
}

function _get_branch_name_sql() {
  $sql = 'SELECT term_data.name AS location_name
    FROM locations
    JOIN locations_spaces ON locations.sid = locations_spaces.sid
    JOIN locations_term ON locations.lid = locations_term.lid
    JOIN term_hierarchy ON locations_term.tid = term_hierarchy.tid
    JOIN term_data ON locations_term.tid = term_data.tid
    WHERE locations.symbol = "%s"
    AND term_hierarchy.parent = 0
    AND locations_term.vid = 2';
  return $sql;
}

function _get_branch_name($symbol) {
  $sql = _get_branch_name_sql();
  $result = db_result(db_query($sql, $symbol));
  return ucwords(preg_replace('/_/',' ',$result));
}

function _download_image($symbol, $location_name) {
  global $base_url;
  if ($symbol == 'all' && $location_name == 'all') {
    $symbol = 'Library';
    $location_name = 'All Libraries';
  }
  $path = $base_url . '/sites/default/files/advocacy/badges-download/' . $symbol  . '.jpg';
  header('Content-Description: File Transfer');
  header('Content-type: application/octet-stream');
  header("Content-Disposition: attachment; filename=" . strtolower(preg_replace('/ /', '_', $location_name)) . '.jpg');
  header('Expires: 0');
  header('Cache-Control: must-revalidate, post-check=0, pre-check=0');
  header('Pragma: public');
  ob_clean();
  flush();
  readfile($path);
  exit;
}


