<?php
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_helpers');
function _generate_toolbox_page(){

  $content = '';

  $bronx = _get_branches_page('Bronx');
  $manhattan = _get_branches_page('New York');
  $staten_island = _get_branches_page('Staten Island');
  
  $content .= '<p id ="toolbox-text">' . variable_get('nypl_advocacy_toolbox_page_text', '') . '</p>';
  $content .= '<ul id ="toolbox-anchors"><li><a href="#bronx">Bronx</a></li> <li><a href="#manhattan">Manhattan</a></li> <li><a href="#staten-island">Staten Island</a></li></ul>';

  //All
  $content .='<img src ="' . $base_url . '/sites/default/files/advocacy/badges/Library.jpg alt="All Libraries"/> 
  <span class="badge-download">' . l('DOWNLOAD', $base_url . '/speakout/toolbox/download/Library.jpg') . '</span>
  All Libraries
  <span class="letter-download">' . l('DOWNLOAD LETTER', '') . '</span>';

  //Bronx
  $content .= '<ul id="badges-bronx"><a name=bronx"><strong>'. t('Bronx') . '</strong></a>';
  foreach($bronx as $b){
    $bronx_string .= '<li>'. $b['badge_image'] . $b['badge_download'] . $b['branch_name'] . $b['letter_download'] . '</li>';
  }
  $content .= $bronx_string . '</ul>';

  //Manhattan
  $content .= '<ul id="badges-manhattan"><a name="manhattan"><strong>'. t('Manhattan') . '</strong></a>';
  foreach($manhattan as $m){
    $manhattan_string .= '<li>' . $m['badge_image'] . $m['badge_download'] . $m['branch_name'] . $m['letter_download'] . '</li>';
  }
  $content .= $manhattan_string . '</ul>';

  //Staten Island
  $content .= '<ul id="badges-staten-island"><a name="staten-island"><strong>'. t('Staten Island') . '</strong></a>';
  foreach($staten_island as $s){
    $staten_island_string .= '<li>'. $s['badge_image'] . $s['badge_download'] . $s['branch_name'] . $s['letter_download'] . '</li>';
  }
  $content .= $staten_island_string . '</ul>';

  return $content;
}