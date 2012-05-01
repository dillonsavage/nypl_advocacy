<?php
module_load_include('inc', 'nypl_advocacy', 'includes/nypl_advocacy_helpers');
function _generate_toolbox_page(){
  global $base_url;

  $content = '';

  $bronx = _get_branches_page('Bronx');
  $manhattan = _get_branches_page('New York');
  $staten_island = _get_branches_page('Staten Island');
  
  $content .= '<ul id ="toolbox-anchors"><li><a href="#bronx">Bronx</a></li> <li><a href="#manhattan">Manhattan</a></li> <li><a href="#staten-island">Staten Island</a></li></ul>';

  //All
  $content .= '<p id ="toolbox-text">' . variable_get('nypl_advocacy_toolbox_page_text', '') . '</p>';
  
  $content .='<ul id="badges-all" class="group">';
  $content .='<li><img src ="' . $base_url . '/sites/default/files/advocacy/badges/Library.jpg" alt="All Libraries"/> 
  <span class="badge-download">' . l('DOWNLOAD', $base_url .'/speakout/toolbox/download/all/all') . '</span>
  All Libraries
  <a href="http://pinterest.com/pin/create/button/?url=http%3A%2F%2Fwww.nypl.org%2Fspeakout%2Fletter%3Futm_source%3Dpinterest.com%26amp%3Butm_medium%3Dreferral%26amp%3Butm_content%3DThankYouShare%26amp%3Butm_campaign%3DAdvocacy2012&media=' . $base_url . '/sites/default/files/advocacy/badges/Library.jpg&description=I%27ve%20written%20a%20letter%20to%20support%20NYPL&#39;s Main Library.%20You%20can%20too.%20Click%20the%20pin%20to%20get%20started." onClick="_gaq.push(["_trackEvent", "Advocacy", "Pinterest Share", this.href]);"><img src="http://assets.pinterest.com/images/PinExt.png"/>
  <span class="letter-download">' . l('DOWNLOAD LETTER', '') . '</span></li></ul>';

  //Bronx
  $content .= '<ul id="badges-bronx" class="group"><a name=bronx"><strong>'. t('Bronx') . '</strong></a>';
  foreach($bronx as $b){
    $bronx_string .= '<li>'. $b['badge_image'] . $b['badge_download'] . $b['pinterest'] . $b['branch_name'] . $b['letter_download'] . '</li>';
  }
  $content .= $bronx_string . '</ul>';

  //Manhattan
  $content .= '<ul id="badges-manhattan" class="group"><a name="manhattan"><strong>'. t('Manhattan') . '</strong></a>';
  foreach($manhattan as $m){
    if($m['branch_name'] != 'Donnell Library Center'){
      $manhattan_string .= '<li>' . $m['badge_image'] . $m['badge_download'] . $m['pinterest'] . $m['branch_name'] . $m['letter_download'] . '</li>';
    }
  }
  $content .= $manhattan_string . '</ul>';

  //Staten Island
  $content .= '<ul id="badges-staten-island" class="group"><a name="staten-island"><strong>'. t('Staten Island') . '</strong></a>';
  foreach($staten_island as $s){
    $staten_island_string .= '<li>'. $s['badge_image'] . $s['badge_download'] . $s['pinterest'] . $s['branch_name'] . $s['letter_download'] . '</li>';
  }
  $content .= $staten_island_string . '</ul>';

  return $content;
}