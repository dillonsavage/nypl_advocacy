<?php
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_helpers');
function _generate_toolbox_page(){
  $content = '';
  
  $bronx = _get_branches_page('Bronx');
  $manhattan = _get_branches_page('New York');
  $staten_island = _get_branches_page('Staten Island');
  
  $content .='<span id ="toolbox-anchors"><a href="#bronx">Bronx</a> <a href="#manhattan">Manhattan</a> <a href="#staten-island">Staten Island</a></span><br />';

  $content .= '<a name=bronx"><strong>'. t('Bronx') . '</strong></a><br/>';
  foreach($bronx as $b){
    $bronx_string .= $b['badge_image'] .$b['badge_download'] . $b['branch_name'] . $b['letter_download'] . '<br/>';
  }
  $content .= $bronx_string;

  $content .= '<a name="manhattan"><strong>'. t('Manhattan') . '</strong></a><br/>';
  foreach($manhattan as $m){
    $manhattan_string .= $m['badge_image'] . $m['badge_download'] . $m['branch_name'] . $m['letter_download'] . '<br/>';
  }
  $content .= $manhattan_string;

  $content .= '<a name="staten-island"><strong>'. t('Staten Island') . '</strong></a><br/>';
  foreach($staten_island as $s){
    $staten_island_string .= $s['badge_image'] . $s['badge_download'] . $s['branch_name'] . $s['letter_download'] . '<br/>';
  }
  $content .= $staten_island_string;

  return $content;
}