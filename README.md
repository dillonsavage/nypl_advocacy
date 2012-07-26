ABOUT THIS MODULE
-----------------
The NYPL Advocacy module was written in 2012 by Dillon Savage and Clint Newsom to facilitate the New York Public Library's efforts to reduce the City's annual cut to the Library's budget. The module allows website users to write to the mayor and members of the City Council with a customizable message of support for the Library, and/or to suggest that others do the same via a "Tell a Friend" form. It also allows Library staff with the correct permissions to enter information about physical letters sent from library branches, and to export physical and electronic letter submission data.

As originally written, the module relied heavily on custom NYPL code. This release excludes NYPL-specific functionality, and should install and run cleanly on a Drupal 6 site with the appropriate external dependencies.

INSTALLATION
------------
NYPL Advocacy can be installed and enabled in the manner described here: http://drupal.org/node/70151.

When it's enabled for the first time, the module creates two content types, City Council member and Advocacy Landing Page. It creates a node for each Council member (N.B. as of 2012) and two Webform nodes, "Advocacy Form" and "Tell a Friend". It creates the nypl_advocacy database table, which stores the physical letter data. Finally, the module specifies the pages 'speakout/thankyou' (where the user is redirected after filling out the City Council form) and 'speakout/toolbox' (where the user can download icons for use in social media).

The Webform nodes created by NYPL Advocacy's installation script are not meant to be used in production. Before deploying them to a production setting, a site administrator should make any campaign-specific modifications that might be necessary. Perhaps most importantly, in order for City Council form submissions to arrive at their destinations, the City Council Webform must contain an email setting whose "email to" value pulls from the CC form's hidden "email to" field.

CONFIGURATION
-------------
When the module is enabled, a number of configuration options are available at admin/settings/nypl_advocacy. Additionally, staff can enter physical letter statistics and export data by clicking the appropriate tabs on this page.

DEPENDENCIES
------------
NYPL Advocacy depends on functionality provided by the Webform, Locations (NYPL custom), and GMap Drupal modules.

To match user-entered addresses with corresponding Council districts, the module uses the New York Times' Districts API. Unless a working API key is supplied in the module's settings, the module will not function properly. More information about the Districts API is available here: http://developer.nytimes.com/docs/read/districts_api.

A couple of the module's features require custom theme code. These are described below.

1. To enable Tell a Friend emails to be sent as HTML, append the following code to your theme's template.php:

        /**
         * Implementation of hook_webform_mail_headers()
         */
        function nypl_new_webform_mail_headers($node, $submission, $email) {
          $headers = array();
          $tell_a_friend = variable_get('nypl_advocacy_tell_friend_nid', '');
          if ($node->nid == $tell_a_friend) {
            $headers['Content-Type'] = 'text/html; charset=UTF-8; format=flowed; delsp=yes';
          }
          return $headers;
        }

2. To enable Exact Target conversion tracking, add the following code to Webform's default webform-form.tpl.php file, then add the resulting template to your custom theme:

        <?php
        // get Exact Target metadata, if this is the advocacy city council form
        $advocacy_form_nid = variable_get('nypl_advocacy_city_council_nid', NULL);
        if ($form['#node']->nid == $advocacy_form_nid) {
          $et_keys = array('j', 'e', 'l', 'jb', 'u', 'mid');
          foreach ($et_keys as $key) {
            if (isset($_GET[$key]) && (!isset($_COOKIE[$key]) || $_COOKIE[$key] != $_GET[$key])) {
              setcookie($key, $_GET[$key]);
            }
          }
        }
        ?>
