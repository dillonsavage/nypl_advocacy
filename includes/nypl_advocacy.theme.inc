<?php

/**
 * @file
 * @brief theming callbacks for advocacy
 */

/**
 * left sidebar content for landing page
 */
function theme_nypl_advocacy_left_sidebar($node) {
  $gmap = module_invoke('nypl_advocacy', 'block', 'view', 0);
  $donate_filepath = $node->field_donate_bar[0]['filepath'];
  $letters_filepath = $node->field_letters_bar[0]['filepath'];
  $output = '<div id="advocacy-progress-bar"><h3>YOUR HELP SO FAR</h3>';
  if (!empty($donate_filepath)) $output .= '<img src="/' . $donate_filepath . '" />';
  if (!empty($letters_filepath)) $output .= '<img src="/' . $letters_filepath . '" />';
  $output .= '</div>';
  $output .= '<div id="advocacy-progress-map"><h3>LETTERS BY BRANCH</h3>';
  if (!empty($gmap['content'])) {
    $output .= $gmap['content'];
    $output .= '<span class="advocacy-progress-map-markers" style="width:300px;"><img src="/sites/all/modules/gmap/markers/advocacy_red.png" />0-500<img src="/sites/all/modules/gmap/markers/advocacy_purple.png" />500-1000<img src="/sites/all/modules/gmap/markers/advocacy_blue.png" />1000-2000<img src="/sites/all/modules/gmap/markers/advocacy_green.png" />2000+</span>';
    // $output .= '<span class="advocacy-progress-map-markers"><img src="/sites/all/modules/nypl_advocacy/img/markers/map-key.gif"/></span>';
  }
  $output .= '</div>';
  return $output;
}

/**
 * right sidebar content for landing page
 */
function theme_nypl_advocacy_right_sidebar($node) {
  $press_link = l($node->field_press_link[0]['title'], $node->field_press_link[0]['url']);
  $press_blurb = $node->field_press_blurb[0]['value'];
  if (!empty($press_link) && !empty($press_blurb)) {
    $output = '<div id="advocacy-press-blurb">';
    $output .= $press_blurb . '<br />' . $press_link;
    $output .= '</div>';
  }
  if (!empty($node->field_press_link_past[0]['url'])) {
    $output .= '<div id="advocacy-press-past">';
    $output .= "<h3>DON'T MISS!</h3>";
    foreach ($node->field_press_link_past as $i => $past_link) {
      $output .= '<p>';
      $output .= l($past_link['title'], $past_link['url']);
      $output .= $node->field_press_description_past[$i]['value'];
      $output .= '</p>';
    }
    $output .= '</div>';
  }
  return $output;
}

/**
 * main content for landing page
 */
function theme_nypl_advocacy_landing($vars) {
  $advocacy_buttons = _get_button_image();
  $twitter = variable_get('nypl_advocacy_ty_twitter', '');
  $fb = variable_get('nypl_advocacy_ty_fb', '');
  $pinterest = _nypl_advocacy_replace_pinterest(variable_get('nypl_advocacy_ty_pinterest', ''));
  $google_plus =  variable_get('nypl_advocacy_ty_google_plus', '');
  $output = $vars['field_advocacy_intro'][0]['value'];
  $output .= variable_get('nypl_advocacy_write_button_link','');
  $output .= $advocacy_buttons['write-button']['tag'];
  $output .= variable_get('nypl_advocacy_donate_button_link','');
  $output .= $advocacy_buttons['donate-button']['tag'];
  $output .= $vars['content'];
  if (variable_get('nypl_advocacy_show_branch_badges', 1) == TRUE) {
    $output .= '<p id="advocacy-most-letters-message">Most Letters So Far</p>';
    $output .= '<ul id="advocacy-speakout-badges" class="group">';
    $output .= '<li>' . _nypl_advocacy_leading_library_badge('bronx') . '<p class="badge-borough">Bronx</p></li>';
    $output .= '<li>' . _nypl_advocacy_leading_library_badge('manhattan') . '<p class="badge-borough">Manhattan</p></li>';
    $output .= '<li>' . _nypl_advocacy_leading_library_badge('staten_island') . '<p class="badge-borough">Staten Island</p></li>';
    $output .= '</ul>';
  }
  $output .= $vars['field_advocacy_txt_bottom'][0]['value'];
  $output .= '</div>'; // content
  if ($twitter && $fb && $pinterest && $google_plus) {
    $output .= '<ul id="advocacy-speakout-socialmedia" class="group">FOLLOW US ON';
    $output .= '<li class="advocacy-speakout-twitter">' . $twitter . '</li>';
    $output .= '<li class="advocacy-speakout-facebook">' . $fb . '</li>';
    $output .= '<li class="advocacy-speakout-pinterest">' . $pinterest . '</li>';
    $output .= '<li class="advocacy-speakout-google-plus">' . $google_plus . '</li>';
    $output .= '</ul>';
  }
  return $output;
}
