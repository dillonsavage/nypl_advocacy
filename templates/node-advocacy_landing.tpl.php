<?php /* $Id: node.tpl.php,v 1.3 2008/06/22 20:49:49 add1sun Exp $ */ 
require_once drupal_get_path('module', 'nypl_advocacy') . '/includes/nypl_advocacy_helpers.inc';
$advocacy_buttons = _get_button_image();
?>
<div id="node-<?php print $node->nid; ?>" class="node<?php print " node-" . $node->type; ?><?php print ($sticky) ? " node-sticky" : ""; ?>">

<?php if (!$page && $title): ?>
<h3 class="title"><a href="<?php print $node_url; ?>" title="<?php print $title .' unaltered!'; ?>"><?php print $title .' unaltered!'; ?></a></h3>
<?php endif; ?>


<?php
if ($node->av_content['nid']) {
	$av_display = theme('nypl_content_av_player', $node->av_content['nid'], 'video', 'simple');
}

if ($av_display && $node->av_content['position'] == 'top') {
	print $av_display;
}

if ($node->image_gallery && $node->image_gallery['position'] == 'top') {
	print $node->image_gallery['content'];
}
?>

<div class="content">
  <?php print $field_advocacy_intro[0]['value']; ?>
  <!--  write/donate buttons -->
  <?php print variable_get('nypl_advocacy_write_button_link',''); print $advocacy_buttons['write-button']['tag'];?></a>
  <?php print variable_get('nypl_advocacy_donate_button_link',''); print $advocacy_buttons['donate-button']['tag'];?></a>
  <?php print $content; ?>
  <!-- branch badges -->
      <?php if (variable_get('nypl_advocacy_show_branch_badges', 1) == TRUE){?>
        <p id="advocacy-most-letters-message">Most Letters So Far</p>
        <ul id="advocacy-speakout-badges" class="group">
          <li><?php print _nypl_advocacy_leading_library_badge('bronx'); ?><p class="badge-borough">Bronx</p></li>
          <li><?php print _nypl_advocacy_leading_library_badge('manhattan'); ?><p class="badge-borough">Manhattan</p></li>
          <li><?php print _nypl_advocacy_leading_library_badge('staten_island'); ?><p class="badge-borough">Staten Island</p></li>
        </ul>
      <?php }?>
    <?php print $field_advocacy_txt_bottom[0]['value']; ?>
</div>
  <!-- social media -->
  <?php
    $twitter = variable_get('nypl_advocacy_ty_twitter', '');
    $fb = variable_get('nypl_advocacy_ty_fb', '');
    $pinterest = _nypl_advocacy_replace_pinterest(variable_get('nypl_advocacy_ty_pinterest', ''));
    $google_plus =  variable_get('nypl_advocacy_ty_google_plus', '');
  ?>
  <?php if ($twitter && $fb && $pinterest && $google_plus): ?>
    <ul id="advocacy-speakout-socialmedia" class="group">FOLLOW US ON
      <li class="advocacy-speakout-twitter"><?php print $twitter; ?></li>
      <li class="advocacy-speakout-facebook"><?php print $fb; ?></li>
      <li class="advocacy-speakout-pinterest"><?php print $pinterest; ?></li>
      <li class="advocacy-speakout-google-plus"><?php print $google_plus; ?></li>
    </ul>
  <?php endif; ?>

<?php
if ($av_display && $node->av_content['position'] == 'bottom') {
	print $av_display;
}

if ($node->image_gallery['content'] && $node->image_gallery['position'] == 'bottom') {
	print $node->image_gallery['content'];
}

include('includes/attached_files.php');
 
$path_args = arg();
$context_menu = theme('nypl_content_check_context_menu', $path_args, $node, $current_node); 
print $context_menu;

?>

<div class="links"><?php print $links; ?></div>
</div>