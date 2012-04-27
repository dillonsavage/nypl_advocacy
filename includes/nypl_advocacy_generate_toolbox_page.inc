<?php
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_helpers');
function _generate_toolbox_page(){
  $content = '';

  $bronx = _get_branches_page('Bronx');
  $manhattan = _get_branches_page('New York');
  $staten_island = _get_branches_page('Staten Island');

  $content .= '<strong>'. t('Bronx') . '</strong><br/>';
  foreach($bronx as $b){
    $bronx_string .= $b['badge_image'] .$b['badge_download'] . $b['branch_name'] . $b['letter_download'] . '<br/>';
  }
  $content .= $bronx_string;

  $content .= '<strong>'. t('Manhattan') . '</strong><br/>';
  foreach($manhattan as $m){
    $manhattan_string .= $m['badge_image'] . $m['badge_download'] . $m['branch_name'] . $m['letter_download'] . '<br/>';
  }
  $content .= $manhattan_string;

  $content .= '<strong>'. t('Staten Island') . '</strong><br/>';
  foreach($staten_island as $s){
    $staten_island_string .= $s['badge_image'] . $s['badge_download'] . $s['branch_name'] . $s['letter_download'] . '<br/>';
  }
  $content .= $staten_island_string;

  return $content;
}