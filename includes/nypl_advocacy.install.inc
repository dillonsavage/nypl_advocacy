<?php

$council_member = "\$content['type']  = array (
  'name' => 'City Council member',
  'type' => 'council_member',
  'description' => '',
  'title_label' => 'Display name',
  'body_label' => '',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => true,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => '1',
  'language_content_type' => '0',
  'show_preview_changes' => 1,
  'show_diff_inline' => 0,
  'enable_revisions_page' => 1,
  'ffp_upload' => 
  array (
    'file_path' => '',
    'file_path_cleanup' => 
    array (
      'file_path_pathauto' => 0,
      'file_path_tolower' => 0,
      'file_path_transliterate' => 0,
    ),
    'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
    'file_name_cleanup' => 
    array (
      'file_name_pathauto' => 0,
      'file_name_tolower' => 0,
      'file_name_transliterate' => 0,
    ),
    'retroactive_update' => '',
    'active_updating' => 0,
  ),
  'old_type' => 'council_member',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'signup_node_default_state' => 'disabled',
  'signup_date_field' => '0',
  'nodewords_edit_metatags' => 1,
  'nodewords_metatags_generation_method' => '0',
  'nodewords_metatags_generation_source' => '2',
  'nodewords_use_alt_attribute' => 1,
  'nodewords_filter_modules_output' => 
  array (
    'imagebrowser' => false,
    'img_assist' => false,
  ),
  'nodewords_filter_regexp' => '',
  'rdf_schema_class' => '',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '0',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'page_title' => 
  array (
    'show_field' => 
    array (
      'show_field' => false,
    ),
    'pattern' => '',
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'District',
    'field_name' => 'field_council_district',
    'type' => 'number_integer',
    'widget_type' => 'number',
    'change' => 'Change basic information',
    'weight' => '31',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_council_district][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 1,
    'multiple' => '0',
    'min' => '',
    'max' => '',
    'prefix' => '',
    'suffix' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'number',
    'widget_module' => 'number',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'int',
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'rdf_property' => '',
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Email',
    'field_name' => 'field_cc_email',
    'type' => 'email',
    'widget_type' => 'email_textfield',
    'change' => 'Change basic information',
    'weight' => '32',
    'size' => '60',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'email' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_cc_email' => 
      array (
        0 => 
        array (
          'email' => '',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'op' => 'Save field settings',
    'module' => 'email',
    'widget_module' => 'email',
    'columns' => 
    array (
      'email' => 
      array (
        'type' => 'varchar',
        'length' => 255,
        'not null' => false,
        'sortable' => true,
      ),
    ),
    'rdf_property' => '',
    'display_settings' => 
    array (
      'label' => 
      array (
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'revision_information' => '20',
  'comment_settings' => '30',
  'menu' => '-2',
  'path' => '30',
  'attachments' => '30',
  'path_redirect' => '30',
  'workflow' => '10',
  'nodewords' => '10',
);";

$landing_page = "\$content['type']  = array (
  'name' => 'Advocacy Landing Page',
  'type' => 'advocacy_landing',
  'description' => 'Thank-you landing page for advocacy campaign.',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => false,
    'sticky' => false,
    'revision' => false,
  ),
  'upload' => '0',
  'language_content_type' => '0',
  'show_preview_changes' => 1,
  'show_diff_inline' => 0,
  'enable_revisions_page' => 1,
  'ffp_upload' => 
  array (
    'file_path' => '',
    'file_path_cleanup' => 
    array (
      'file_path_pathauto' => 0,
      'file_path_tolower' => 0,
      'file_path_transliterate' => 0,
    ),
    'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
    'file_name_cleanup' => 
    array (
      'file_name_pathauto' => 0,
      'file_name_tolower' => 0,
      'file_name_transliterate' => 0,
    ),
    'retroactive_update' => '',
    'active_updating' => 0,
  ),
  'old_type' => 'advocacy_landing',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'signup_node_default_state' => 'disabled',
  'signup_date_field' => '0',
  'nodewords_edit_metatags' => 1,
  'nodewords_metatags_generation_method' => '0',
  'nodewords_metatags_generation_source' => '2',
  'nodewords_use_alt_attribute' => 1,
  'nodewords_filter_modules_output' => 
  array (
    'imagebrowser' => false,
    'img_assist' => false,
  ),
  'nodewords_filter_regexp' => '',
  'comment' => '0',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => '0',
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'page_title' => 
  array (
    'show_field' => 
    array (
      'show_field' => false,
    ),
    'pattern' => '',
  ),
);
$content['groups']  = array (
  0 => 
  array (
    'label' => 'Press release',
    'group_type' => 'multigroup',
    'settings' => 
    array (
      'form' => 
      array (
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => 
      array (
        'description' => '',
        'teaser' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'hidden',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        2 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        3 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'hidden',
      ),
      'multigroup' => 
      array (
        'subgroup' => 
        array (
          'weight' => -20,
          'label' => 'hidden',
          5 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'teaser' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'full' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          4 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          2 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          3 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'token' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => '1',
        'labels' => 
        array (
          0 => '',
          1 => '',
          2 => '',
          3 => '',
          4 => '',
          5 => '',
          6 => '',
          7 => '',
          8 => '',
          9 => '',
        ),
      ),
    ),
    'weight' => '1',
    'group_name' => 'group_press_release',
  ),
  1 => 
  array (
    'label' => 'Past press',
    'group_type' => 'multigroup',
    'settings' => 
    array (
      'form' => 
      array (
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => 
      array (
        'description' => '',
        'teaser' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        4 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        2 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        3 => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => 
        array (
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
      'multigroup' => 
      array (
        'subgroup' => 
        array (
          'weight' => -20,
          'label' => 'above',
          5 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'teaser' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'full' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          4 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          2 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          3 => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
          'token' => 
          array (
            'format' => 'fieldset',
            'exclude' => 0,
          ),
        ),
        'multiple-columns' => 0,
        'required' => 0,
        'multiple' => 1,
        'labels' => 
        array (
          0 => '',
          1 => '',
          2 => '',
          3 => '',
          4 => '',
          5 => '',
          6 => '',
          7 => '',
          8 => '',
          9 => '',
        ),
      ),
    ),
    'weight' => '2',
    'group_name' => 'group_advocacy_press_past',
  ),
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Intro text',
    'field_name' => 'field_advocacy_intro',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '-4',
    'rows' => '5',
    'size' => 60,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_advocacy_intro][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => NULL,
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
      'format' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'views' => false,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-4',
      'parent' => '',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Letters goal progress bar',
    'field_name' => 'field_letters_bar',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '-1',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => '',
    'max_filesize_per_file' => '',
    'max_filesize_per_node' => '',
    'max_resolution' => 0,
    'min_resolution' => 0,
    'custom_alt' => 0,
    'alt' => '',
    'custom_title' => 0,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'default_image_upload' => '',
    'default_image' => NULL,
    'description' => '',
    'ffp_field_letters_bar' => 
    array (
      'file_path' => '',
      'file_path_cleanup' => 
      array (
        'file_path_pathauto' => 0,
        'file_path_tolower' => 0,
        'file_path_transliterate' => 0,
      ),
      'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
      'file_name_cleanup' => 
      array (
        'file_name_pathauto' => 0,
        'file_name_tolower' => 0,
        'file_name_transliterate' => 0,
      ),
      'retroactive_update' => '',
      'active_updating' => 0,
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => 
    array (
      'fid' => 
      array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
      ),
      'list' => 
      array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
      ),
      'data' => 
      array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '-1',
      'parent' => '',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
  2 => 
  array (
    'label' => 'Donation progress bar',
    'field_name' => 'field_donate_bar',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => 0,
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => '',
    'max_filesize_per_file' => '',
    'max_filesize_per_node' => '',
    'max_resolution' => 0,
    'min_resolution' => 0,
    'custom_alt' => 0,
    'alt' => '',
    'custom_title' => 0,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'default_image_upload' => '',
    'default_image' => NULL,
    'description' => '',
    'ffp_field_donate_bar' => 
    array (
      'file_path' => '',
      'file_path_cleanup' => 
      array (
        'file_path_pathauto' => 0,
        'file_path_tolower' => 0,
        'file_path_transliterate' => 0,
      ),
      'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
      'file_name_cleanup' => 
      array (
        'file_name_pathauto' => 0,
        'file_name_tolower' => 0,
        'file_name_transliterate' => 0,
      ),
      'retroactive_update' => '',
      'active_updating' => 0,
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => 
    array (
      'fid' => 
      array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
      ),
      'list' => 
      array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
      ),
      'data' => 
      array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => 0,
      'parent' => '',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
  3 => 
  array (
    'label' => 'Press link',
    'field_name' => 'field_press_link',
    'type' => 'link',
    'widget_type' => 'link',
    'change' => 'Change basic information',
    'weight' => 0,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'title' => '',
        'url' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_press_link' => 
      array (
        0 => 
        array (
          'title' => '',
          'url' => '',
        ),
      ),
    ),
    'group' => 'group_press_release',
    'required' => 0,
    'multiple' => '1',
    'validate_url' => 1,
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'display' => 
    array (
      'url_cutoff' => '80',
    ),
    'attributes' => 
    array (
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'op' => 'Save field settings',
    'module' => 'link',
    'widget_module' => 'link',
    'columns' => 
    array (
      'url' => 
      array (
        'type' => 'varchar',
        'length' => 2048,
        'not null' => false,
        'sortable' => true,
      ),
      'title' => 
      array (
        'type' => 'varchar',
        'length' => 255,
        'not null' => false,
        'sortable' => true,
      ),
      'attributes' => 
      array (
        'type' => 'text',
        'size' => 'medium',
        'not null' => false,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => 0,
      'parent' => 'group_press_release',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  4 => 
  array (
    'label' => 'Press blurb',
    'field_name' => 'field_press_blurb',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '1',
    'rows' => '5',
    'size' => 60,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_press_blurb][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_press_blurb' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_press_blurb][0][value',
        ),
      ),
    ),
    'group' => 'group_press_release',
    'required' => 0,
    'multiple' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '1',
      'parent' => 'group_press_release',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  5 => 
  array (
    'label' => 'Past press link',
    'field_name' => 'field_press_link_past',
    'type' => 'link',
    'widget_type' => 'link',
    'change' => 'Change basic information',
    'weight' => '3',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'title' => '',
        'url' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_press_link_past' => 
      array (
        0 => 
        array (
          'title' => '',
          'url' => '',
        ),
      ),
    ),
    'group' => 'group_advocacy_press_past',
    'required' => 0,
    'multiple' => 1,
    'validate_url' => 1,
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'display' => 
    array (
      'url_cutoff' => '80',
    ),
    'attributes' => 
    array (
      'target' => 'default',
      'rel' => '',
      'class' => 'press-link',
      'title' => '',
    ),
    'op' => 'Save field settings',
    'module' => 'link',
    'widget_module' => 'link',
    'columns' => 
    array (
      'url' => 
      array (
        'type' => 'varchar',
        'length' => 2048,
        'not null' => false,
        'sortable' => true,
      ),
      'title' => 
      array (
        'type' => 'varchar',
        'length' => 255,
        'not null' => false,
        'sortable' => true,
      ),
      'attributes' => 
      array (
        'type' => 'text',
        'size' => 'medium',
        'not null' => false,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '3',
      'parent' => 'group_advocacy_press_past',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  6 => 
  array (
    'label' => 'Past press description',
    'field_name' => 'field_press_description_past',
    'type' => 'text',
    'widget_type' => 'text_textfield',
    'change' => 'Change basic information',
    'weight' => '4',
    'rows' => 5,
    'size' => '60',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_press_description_past][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_press_description_past' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_press_description_past][0][value',
        ),
      ),
    ),
    'group' => 'group_advocacy_press_past',
    'required' => 0,
    'multiple' => 1,
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '4',
      'parent' => 'group_advocacy_press_past',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  7 => 
  array (
    'label' => 'Bottom text',
    'field_name' => 'field_advocacy_txt_bottom',
    'type' => 'text',
    'widget_type' => 'text_textarea',
    'change' => 'Change basic information',
    'weight' => '5',
    'rows' => '5',
    'size' => 60,
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_advocacy_txt_bottom][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_advocacy_txt_bottom' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_advocacy_txt_bottom][0][value',
          'format' => '4',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'text_processing' => '1',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
      'format' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'views' => false,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '5',
      'parent' => '',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      5 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  8 => 
  array (
    'label' => 'URL',
    'field_name' => 'field_img_url',
    'type' => 'text',
    'widget_type' => 'text_textfield',
    'change' => 'Change basic information',
    'weight' => '10',
    'rows' => 5,
    'size' => '60',
    'description' => '',
    'default_value' => 
    array (
      0 => 
      array (
        'value' => '',
        '_error_element' => 'default_value_widget][field_img_url][0][value',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_img_url' => 
      array (
        0 => 
        array (
          'value' => '',
          '_error_element' => 'default_value_widget][field_img_url][0][value',
        ),
      ),
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'op' => 'Save field settings',
    'module' => 'text',
    'widget_module' => 'text',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'text',
        'size' => 'big',
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '10',
      'parent' => 'group_img_link',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  9 => 
  array (
    'label' => 'Image',
    'field_name' => 'field_advocacy_lp_img',
    'type' => 'filefield',
    'widget_type' => 'imagefield_widget',
    'change' => 'Change basic information',
    'weight' => '11',
    'file_extensions' => 'png gif jpg jpeg',
    'progress_indicator' => 'bar',
    'file_path' => '',
    'max_filesize_per_file' => '',
    'max_filesize_per_node' => '',
    'max_resolution' => 0,
    'min_resolution' => 0,
    'custom_alt' => 0,
    'alt' => '',
    'custom_title' => 0,
    'title_type' => 'textfield',
    'title' => '',
    'use_default_image' => 0,
    'default_image_upload' => '',
    'default_image' => NULL,
    'description' => '',
    'ffp_field_advocacy_lp_img' => 
    array (
      'file_path' => '',
      'file_path_cleanup' => 
      array (
        'file_path_pathauto' => 0,
        'file_path_tolower' => 0,
        'file_path_transliterate' => 0,
      ),
      'file_name' => '[filefield-onlyname-original].[filefield-extension-original]',
      'file_name_cleanup' => 
      array (
        'file_name_pathauto' => 0,
        'file_name_tolower' => 0,
        'file_name_transliterate' => 0,
      ),
      'retroactive_update' => '',
      'active_updating' => 0,
    ),
    'group' => false,
    'required' => 0,
    'multiple' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'op' => 'Save field settings',
    'module' => 'filefield',
    'widget_module' => 'imagefield',
    'columns' => 
    array (
      'fid' => 
      array (
        'type' => 'int',
        'not null' => false,
        'views' => true,
      ),
      'list' => 
      array (
        'type' => 'int',
        'size' => 'tiny',
        'not null' => false,
        'views' => true,
      ),
      'data' => 
      array (
        'type' => 'text',
        'serialize' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '11',
      'parent' => 'group_img_link',
      'label' => 
      array (
        'format' => 'hidden',
      ),
      'teaser' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'body_field' => '-2',
  'revision_information' => '8',
  'author' => '13',
  'options' => '14',
  'comment_settings' => '11',
  'menu' => '-3',
  'book' => '12',
  'path' => '10',
  'path_redirect' => '9',
  'workflow' => '7',
  'nodewords' => '6',
);";

$council_members = array(
  1 => array(
    'name' => 'Margaret Chin',
    'email' => 'chin@council.nyc.gov',
  ),
  2 => array(
    'name' => 'Rosie Mendez',
    'email' => 'rmendez@council.nyc.gov',
  ),
  3 => array(
    'name' => 'Christine Quinn',
    'email' => 'cquinn@council.nyc.gov',
  ),
  4 => array(
    'name' => 'Daniel Garodnick',
    'email' => 'garodnick@council.nyc.ny.us',
  ),
  5 => array(
    'name' => 'Jessica Lappin',
    'email' => 'lappin@council.nyc.gov',
  ),
  6 => array(
    'name' => 'Gale Brewer',
    'email' => 'gbrewer@council.nyc.gov',
  ),
  7 => array(
    'name' => 'Robert Jackson',
    'email' => 'rjackson@council.nyc.gov',
  ),
  8 => array(
    'name' => 'Melissa Mark-Viverito',
    'email' => 'mviverito@council.nyc.gov',
  ),
  9 => array(
    'name' => 'Inez Dickens',
    'email' => 'idickens@council.nyc.gov',
  ),
  10 => array(
    'name' => 'Ydanis Rodriguez',
    'email' => 'yrodriguez@council.nyc.gov',
  ),
  11 => array(
    'name' => 'G. Oliver Koppell',
    'email' => 'okoppell@council.nyc.gov',
  ),
  12 => array(
    'name' => 'Larry Seabrook',
    'email' => 'seabrook@council.nyc.ny.us',
  ),
  13 => array(
    'name' => 'James Vacca',
    'email' => 'vacca@council.nyc.ny.us',
  ),
  14 => array(
    'name' => 'Fernando Cabrera',
    'email' => 'fcabrera@council.nyc.gov',
  ),
  15 => array(
    'name' => 'Joel Rivera',
    'email' => 'rivera@council.nyc.ny.us',
  ),
  16 => array(
    'name' => 'Helen Foster',
    'email' => 'foster@council.nyc.ny.us',
  ),
  17 => array(
    'name' => 'Maria del Carmen  Arroyo',
    'email' => 'marroyo@council.nyc.gov',
  ),
  18 => array(
    'name' => 'Annabel Palma',
    'email' => 'palma@council.nyc.ny.us',
  ),
  19 => array(
    'name' => 'Dan Halloran',
    'email' => 'dhalloran@council.nyc.gov',
  ),
  20 => array(
    'name' => 'Peter Koo',
    'email' => 'pkoo@council.nyc.gov',
  ),
  21 => array(
    'name' => 'Julissa Ferreras',
    'email' => 'jferreras@council.nyc.gov',
  ),
  22 => array(
    'name' => 'Peter F. Vallone, Jr.',
    'email' => 'vallone@council.nyc.ny.us',
  ),
  23 => array(
    'name' => 'Mark Weprin',
    'email' => 'mweprin@council.nyc.gov',
  ),
  24 => array(
    'name' => 'James Gennaro',
    'email' => 'jgennaro@council.nyc.gov',
  ),
  25 => array(
    'name' => 'Daniel Dromm',
    'email' => 'ddromm@council.nyc.gov',
  ),
  26 => array(
    'name' => 'James Van Bramer',
    'email' => 'jvanbramer@council.nyc.gov',
  ),
  27 => array(
    'name' => 'Leroy Comrie',
    'email' => 'comrie@council.nyc.ny.us',
  ),
  28 => array(
    'name' => 'Ruben Willis',
    'email' => 'Ruben.Wills@council.nyc.gov',
  ),
  29 => array(
    'name' => 'Karen Koslowitz',
    'email' => 'kkoslowitz@council.nyc.gov',
  ),
  30 => array(
    'name' => 'Elizabeth Crowley',
    'email' => 'ecrowley@council.nyc.gov',
  ),
  31 => array(
    'name' => 'James Sanders',
    'email' => 'jsanders@council.nyc.gov',
  ),
  32 => array(
    'name' => 'Eric Ulrich',
    'email' => 'eulrich@council.nyc.gov',
  ),
  33 => array(
    'name' => 'Stephen Levin',
    'email' => 'slevin@council.nyc.gov',
  ),
  34 => array(
    'name' => 'Diana Reyna',
    'email' => 'bbaruch@council.nyc.gov',
  ),
  35 => array(
    'name' => 'Letitia James',
    'email' => 'ljames@council.nyc.gov',
  ),
  36 => array(
    'name' => 'Albert Vann',
    'email' => 'avann@council.nyc.gov',
  ),
  37 => array(
    'name' => 'Erik Martin  Dilan',
    'email' => 'emdilan@council.nyc.ny.us',
  ),
  38 => array(
    'name' => 'Sara M. Gonzalez',
    'email' => 'gonzalez@council.nyc.ny.us',
  ),
  39 => array(
    'name' => 'Bradford S. Lander',
    'email' => 'lander@council.nyc.gov',
  ),
  40 => array(
    'name' => 'Mathieu Eugene',
    'email' => 'mathieu.eugene@council.nyc.gov',
  ),
  41 => array(
    'name' => 'Darlene Mealy',
    'email' => 'darlene.mealy@council.nyc.gov',
  ),
  42 => array(
    'name' => 'Charles Barron',
    'email' => 'cbarron@council.nyc.gov',
  ),
  43 => array(
    'name' => 'Vincent J. Gentile',
    'email' => 'vgentile@council.nyc.gov',
  ),
  44 => array(
    'name' => 'David Greenfield',
    'email' => 'dgreenfield@council.nyc.gov',
  ),
  45 => array(
    'name' => 'Jumaane D. Williams',
    'email' => 'jwilliams@council.nyc.gov',
  ),
  46 => array(
    'name' => 'Lewis Fidler',
    'email' => 'LFidler@council.nyc.gov',
  ),
  47 => array(
    'name' => 'Domenic M. Recchia, Jr.',
    'email' => 'recchia@council.nyc.ny.us',
  ),
  48 => array(
    'name' => 'Michael Chaim Nelson',
    'email' => 'nelson@council.nyc.ny.us',
  ),
  49 => array(
    'name' => 'Deborah Rose',
    'email' => 'drose@council.nyc.gov',
  ),
  50 => array(
    'name' => 'James Oddo',
    'email' => 'joddo@council.nyc.gov',
  ),
  51 => array(
    'name' => 'Vincent Ignizio',
    'email' => 'Ignizio@council.nyc.ny.us',
  ),
);

$city_council = array(
  'type' => 'webform',
  'language' => 'en',
  'uid' => '1069',
  'status' => '0',
  'comment' => '0',
  'promote' => '0',
  'moderate' => '0',
  'sticky' => '0',
  'tnid' => '0',
  'translate' => '0',
  'title' => 'Advocacy Form',
  'body' => '',
  'teaser' => '',
  'log' => '',
  'format' => '4',
  'name' => 'dillonsavage@nypl.org',
  'picture' => '',
  'signup' => 0,
  '_workflow' => FALSE,
  'av_content' => array(
    'position' => 'bottom',
  ),
  'webform' => array(
    'confirmation' => '',
    'teaser' => '0',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'additional_validate' => NULL,
    'additional_submit' => NULL,
    'confirmation_format' => '4',
    'submit_notice' => '1',
    'allow_draft' => '0',
    'redirect_url' => 'advocacy/thankyou',
    'block' => '0',
    'status' => '1',
    'auto_save' => '0',
    'record_exists' => TRUE,
    'roles' => array(
      '0' => '1',
      '1' => '2',
    ),
    'emails' => array(
      '1' => array(
        'eid' => '1',
        'email' => '7',
        'subject' => '8',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '%value[cm_greeting]

%value[body_text]

%value[salutation]
%value[title] %value[first_name] %value[last_name]
%value[address_1]
%value[address_2]
%value[city_town], %value[state_province_region] %value[zip_postal_code]',
        'excluded_components' => array(
          '0' => '12',
          '1' => '13',
        ),
        'html' => '0',
        'attachments' => '0',
      ),
      '2' => array(
        'eid' => '2',
        'email' => '2010nypl@gmail.com',
        'subject' => '8',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => '%value[cm_greeting]

%value[body_text]

%value[salutation]
%value[title] %value[first_name] %value[last_name]
%value[address_1]
%value[address_2]
%value[city_town], %value[state_province_region] %value[zip_postal_code]

<APP>Custom
<PREFIX>%value[title]</PREFIX>
<FIRST>%value[first_name]</FIRST>
<LAST>%value[last_name]</LAST>
<ADDR1>%value[address_1]</ADDR1>
<ADDR2>%value[address_2]</ADDR2>
<CITY>%value[city_town]</CITY>
<STATE>%value[state_province_region]</STATE>
<ZIP>%value[zip_postal_code]</ZIP>
<HPHONE>%value[hphone]</HPHONE>
<EMAIL>%value[e_mail]</EMAIL>
  

',
        'excluded_components' => array(
          '0' => '12',
          '1' => '13',
          '2' => '20',
        ),
        'html' => '0',
        'attachments' => '0',
      ),
    ),
    'components' => array(
      '14' => array(
        'cid' => '14',
        'form_key' => 'title',
        'name' => 'Title',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => 'Mr|Mr
Mrs|Mrs
Ms|Ms',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_component' => '1',
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '13',
        'page_num' => 1,
      ),
      '15' => array(
        'cid' => '15',
        'form_key' => 'first_name',
        'name' => 'First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '14',
        'page_num' => 1,
      ),
      '16' => array(
        'cid' => '16',
        'form_key' => 'last_name',
        'name' => 'Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '15',
        'page_num' => 1,
      ),
      '1' => array(
        'cid' => '1',
        'form_key' => 'address_1',
        'name' => 'Address 1',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '16',
        'page_num' => 1,
      ),
      '2' => array(
        'cid' => '2',
        'form_key' => 'address_2',
        'name' => 'Address 2',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '17',
        'page_num' => 1,
      ),
      '3' => array(
        'cid' => '3',
        'form_key' => 'city_town',
        'name' => 'City/Town',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '18',
        'page_num' => 1,
      ),
      '4' => array(
        'cid' => '4',
        'form_key' => 'state_province_region',
        'name' => 'State/Province/Region',
        'type' => 'select',
        'value' => 'NY',
        'extra' => array(
          'items' => 'AL|Alabama
AK|Alaska
AS|American Samoa
AZ|Arizona
AR|Arkansas
CA|California
CO|Colorado
CT|Connecticut
DE|Delaware
DC|District of Columbia
FL|Florida
GA|Georgia
GU|Guam
HI|Hawaii
ID|Idaho
IL|Illinois
IN|Indiana
IA|Iowa
KS|Kansas
KY|Kentucky
LA|Louisiana
ME|Maine
MH|Marshall Islands
MD|Maryland
MA|Massachusetts
MI|Michigan
MN|Minnesota
MS|Mississippi
MO|Missouri
MT|Montana
NE|Nebraska
NV|Nevada
NH|New Hampshire
NJ|New Jersey
NM|New Mexico
NY|New York
NC|North Carolina
ND|North Dakota
MP|Northern Marianas Islands
OH|Ohio
OK|Oklahoma
OR|Oregon
PW|Palau
PA|Pennsylvania
PR|Puerto Rico
RI|Rhode Island
SC|South Carolina
SD|South Dakota
TN|Tennessee
TX|Texas
UT|Utah
VT|Vermont
VI|Virgin Islands
VA|Virginia
WA|Washington
WV|West Virginia
WI|Wisconsin
WY|Wyoming
',
          'options_source' => 'united_states',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '19',
        'page_num' => 1,
      ),
      '5' => array(
        'cid' => '5',
        'form_key' => 'zip_postal_code',
        'name' => 'Zip/Postal Code',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '20',
        'page_num' => 1,
      ),
      '6' => array(
        'cid' => '6',
        'form_key' => 'country',
        'name' => 'Country',
        'type' => 'select',
        'value' => 'NULL',
        'extra' => array(
          'items' => 'US|United States
CA|Canada
NULL|----------
AF|Afghanistan
AX|Åland Islands
AL|Albania
DZ|Algeria
AS|American Samoa
AD|Andorra
AO|Angola
AI|Anguilla
AQ|Antarctica
AG|Antigua/Barbuda
AR|Argentina
AM|Armenia
AW|Aruba
AT|Austria
AU|Australia
AZ|Azerbaijan
BS|Bahamas
BH|Bahrain
BD|Bangladesh
BB|Barbados
BY|Belarus
BE|Belgium
BZ|Belize
BJ|Benin
BM|Bermuda
BT|Bhutan
BO|Bolivia
BA|Bosnia/Herzegovina
BW|Botswana
BV|Bouvet Island
BR|Brazil
BN|Brunei Darussalam
BG|Bulgaria
BF|Burkina Faso
BI|Burundi
KH|Cambodia
CM|Cameroon
CV|Cape Verde
KY|Cayman Islands
CF|Central African Republic
TD|Chad
CL|Chile
CN|China
CX|Christmas Island
CC|Cocos (Keeling) Islands
CO|Colombia
KM|Comoros
CG|Congo
CK|Cook Islands
CR|Costa Rica
CI|Côte D\'Ivoire
HR|Croatia
CU|Cuba
CY|Cyprus
CZ|Czech Republic
DK|Denmark
DJ|Djibouti
DM|Dominica
DO|Dominican Republic
EC|Ecuador
EG|Egypt
SV|El Salvador
GQ|Equatorial Guinea
ER|Eritrea
EE|Estonia
ET|Ethiopia
FK|Falkland Islands(Malvinas)
FO|Faroe Islands
FJ|Fiji
FI|Finland
FR|France
GF|French Guiana
PF|French Polynesia
TF|French Southern Territories
GA|Gabon
GM|Gambia
GE|Georgia
DE|Germany
GH|Ghana
GI|Gibraltar
GR|Greece
GL|Greenland
GD|Grenada
GP|Guadeloupe
GU|Guam
GT|Guatemala
GG|Guernsey
GN|Guinea
GW|Guinea-Bissau
GY|Guyana
HT|Haiti
HM|Heard Island/Mcdonald Islands
HN|Honduras
HK|Hong Kong
HU|Hungary
IS|Iceland
IN|India
ID|Indonesia
IR|Iran
IQ|Iraq
IE|Ireland
IM|Isle Of Man
IL|Israel
IT|Italy
JM|Jamaica
JP|Japan
JE|Jersey
JO|Jordan
KZ|Kazakhstan
KE|Kenya
KI|Kiribati
KW|Kuwait
KG|Kyrgyzstan
LA|Lao
LV|Latvia
LB|Lebanon
LS|Lesotho
LR|Liberia
LY|Libyan Arab Jamahiriya
LI|Liechtenstein
LT|Lithuania
LU|Luxembourg
MO|Macao
MK|Macedonia
MG|Madagascar
MW|Malawi
MY|Malaysia
MV|Maldives
ML|Mali
MT|Malta
MH|Marshall Islands
MQ|Martinique
MR|Mauritania
MU|Mauritius
YT|Mayotte
MX|Mexico
FM|Micronesia
MD|Moldova
MC|Monaco
MN|Mongolia
ME|Montenegro
MS|Montserrat
MA|Morocco
MZ|Mozambique
MM|Myanmar
NA|Namibia
NR|Nauru
NP|Nepal
NL|Netherlands
AN|Netherlands Antilles
NC|New Caledonia
NZ|New Zealand
NI|Nicaragua
NE|Niger
NG|Nigeria
NU|Niue
NF|Norfolk Island
KP|North Korea
MP|Northern Mariana Islands
NO|Norway
OM|Oman
PK|Pakistan
PW|Palau
PS|Palestine
PA|Panama
PG|Papua New Guinea
PY|Paraguay
PE|Peru
PH|Philippines
PN|Pitcairn
PL|Poland
PT|Portugal
PR|Puerto Rico
QA|Qatar
RE|Réunion
RO|Romania
RU|Russian Federation
RW|Rwanda
BL|St. Barthélemy
SH|St. Helena
KN|St. Kitts/Nevis
LC|St. Lucia
MF|St. Martin
PM|St. Pierre/Miquelon
VC|St. Vincent/The Grenadines
WS|Samoa
SM|San Marino
ST|Sao Tome/Principe
SA|Saudi Arabia
SN|Senegal
RS|Serbia
SC|Seychelles
SL|Sierra Leone
SG|Singapore
SK|Slovakia
SI|Slovenia
SB|Solomon Islands
SO|Somalia
ZA|South Africa
GS|South Georgia/Sandwich Islands
KR|South Korea
ES|Spain
LK|Sri Lanka
SD|Sudan
SR|Suriname
SJ|Svalbard/Jan Mayen
SZ|Swaziland
SE|Sweden
CH|Switzerland
SY|Syrian Arab Republic
TW|Taiwan
TJ|Tajikistan
TZ|Tanzania
TH|Thailand
TL|Timor-Leste
TG|Togo
TK|Tokelau
TO|Tonga
TT|Trinidad And Tobago
TN|Tunisia
TR|Turkey
TM|Turkmenistan
TC|Turks/Caicos Islands
TV|Tuvalu
UG|Uganda
UA|Ukraine
AE|United Arab Emirates
GB|United Kingdom
UM|United States Minor Islands
UY|Uruguay
UZ|Uzbekistan
VU|Vanuatu
VA|Vatican City State
VE|Venezuela
VN|Viet Nam
VG|"Virgin Islands, British"
VI|"Virgin Islands, U.S."
WF|Wallis/Futuna
EH|Western Sahara
YE|Yemen
ZM|Zambia
ZW|Zimbabwe',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '21',
        'page_num' => 1,
      ),
      '7' => array(
        'cid' => '7',
        'form_key' => 'e_mail',
        'name' => 'E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '22',
        'page_num' => 1,
      ),
      '21' => array(
        'cid' => '21',
        'form_key' => 'mailing_list_opt_in',
        'name' => 'Join mailing list',
        'type' => 'select',
        'value' => '1',
        'extra' => array(
          'items' => '1|Yes',
          'multiple' => 1,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 0,
          'optrand' => 0,
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '23',
        'page_num' => 1,
      ),
      '18' => array(
        'cid' => '18',
        'form_key' => 'library',
        'name' => 'Choose Your Library',
        'type' => 'select',
        'value' => '',
        'extra' => array(
          'items' => '3|58th Street
4|67th Street
5|96th Street
1|115th Street
2|125th Street
6|Aguilar
7|Allerton
8|Andrew Heiskell
2787|Battery Park City
9|Baychester
10|Belmont
11|Bloomingdale
12|Bronx Library Center
99|Bronx Reference Center
13|Castle Hill
14|Cathedral
91|Center for Reading and Writing
15|Chatham Square
16|City Island
17|Clason\'s Point
18|Columbus
19|Countee Cullen
20|Dongan Hills
21|Donnell Library Center
22|Eastchester
23|Edenwald
24|Epiphany
977|External Locations
25|Fort Washington
26|Francis Martin
27|George Bruce
871|Grand Central
28|Grand Concourse
29|Great Kills
30|Hamilton Fish Park
31|Hamilton Grange
32|Harlem
33|High Bridge
34|Hudson Park
35|Huguenot Park
37|Hunt\'s Point
38|Inwood
39|Jefferson Market
40|Jerome Park
41|Kingsbridge
42|Kips Bay
55|Library for the Performing Arts
43|Macomb\'s Bridge
44|Melrose
45|Mid-Manhattan Library
46|Morningside Heights
632|Morris Park
48|Morrisania
49|Mosholu
50|Mott Haven
51|Muhlenberg
495|Mulberry Street
53|New Amsterdam
54|New Dorp
56|Ottendorfer
57|Parkchester
58|Pelham Bay
59|Port Richmond
60|Richmondtown
61|Riverdale
62|Riverside
63|Roosevelt Island
64|Schomburg Center
65|Science, Industry and Business Library (SIBL)
66|Sedgwick
67|Seward Park
68|Soundview
69|South Beach
70|Spuyten Duyvil
71|St. Agnes
72|St. George Library Center
73|Stapleton
36|Stephen A. Schwarzman Building
97|Teen Center
74|Throg\'s Neck
75|Todt Hill-Westerleigh
76|Tompkins Square
77|Tottenville
78|Tremont
79|Van Cortlandt
80|Van Nest
81|Wakefield
82|Washington Heights
83|Webster
84|West Farms
85|West New Brighton
86|Westchester Square
87|Woodlawn Heights
88|Woodstock
89|Yorkville',
          'multiple' => 0,
          'title_display' => 'before',
          'private' => 0,
          'aslist' => 1,
          'optrand' => 0,
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'other_option' => NULL,
          'other_text' => 'Other...',
          'description' => '',
          'custom_keys' => FALSE,
          'options_source' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '24',
        'page_num' => 1,
      ),
      '20' => array(
        'cid' => '20',
        'form_key' => 'hphone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '25',
        'page_num' => 1,
      ),
      '9' => array(
        'cid' => '9',
        'form_key' => 'first_break',
        'name' => 'First Break',
        'type' => 'pagebreak',
        'value' => '',
        'extra' => array(
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '26',
        'page_num' => 2,
      ),
      '8' => array(
        'cid' => '8',
        'form_key' => 'email_subject',
        'name' => 'Email subject',
        'type' => 'textfield',
        'value' => 'Don\'t Close the Book on Libraries',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'width' => '50',
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '27',
        'page_num' => 2,
      ),
      '12' => array(
        'cid' => '12',
        'form_key' => 'council_member',
        'name' => 'Council Member',
        'type' => 'markup',
        'value' => '',
        'extra' => array(
          'conditional_component' => '1',
          'conditional_operator' => '=',
          'format' => '4',
          'private' => 0,
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '28',
        'page_num' => 2,
      ),
      '10' => array(
        'cid' => '10',
        'form_key' => 'body_text',
        'name' => 'Body text',
        'type' => 'textarea',
        'value' => 'Now is not the time to close the book on libraries.

(etc.)',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'cols' => '40',
          'rows' => '20',
          'resizable' => 0,
          'disabled' => 0,
          'conditional_component' => '1',
          'conditional_operator' => '=',
          'description' => '',
          'attributes' => array(),
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '29',
        'page_num' => 2,
      ),
      '11' => array(
        'cid' => '11',
        'form_key' => 'salutation',
        'name' => 'Salutation',
        'type' => 'textfield',
        'value' => 'Sincerely,',
        'extra' => array(
          'title_display' => 'none',
          'private' => 0,
          'width' => '15',
          'disabled' => 0,
          'unique' => 0,
          'conditional_component' => '1',
          'conditional_operator' => '=',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '30',
        'page_num' => 2,
      ),
      '13' => array(
        'cid' => '13',
        'form_key' => 'address',
        'name' => 'Address',
        'type' => 'markup',
        'value' => '',
        'extra' => array(
          'conditional_component' => '1',
          'conditional_operator' => '=',
          'format' => '4',
          'private' => 0,
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '31',
        'page_num' => 2,
      ),
      '17' => array(
        'cid' => '17',
        'form_key' => 'email_to',
        'name' => 'Email to',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '32',
        'page_num' => 2,
      ),
      '19' => array(
        'cid' => '19',
        'form_key' => 'cm_greeting',
        'name' => 'CM greeting',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'conditional_component' => '14',
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '33',
        'page_num' => 2,
      ),
    ),
  ),
  'last_comment_name' => NULL,
  'comment_count' => '0',
  'taxonomy' => array(),
  'page_title' => FALSE,
  'nodewords' => array(
    'abstract' => array(
      'value' => '',
    ),
    'canonical' => array(
      'value' => '',
    ),
    'copyright' => array(
      'value' => '© 2010 The New York Public Library ',
    ),
    'description' => array(
      'value' => '',
    ),
    'keywords' => array(
      'value' => 'NYPL, The New York Public Library, Manhattan, Bronx, Staten Island',
    ),
    'revisit-after' => array(
      'value' => '1',
    ),
    'robots' => array(
      'value' => array(
        'noarchive' => 0,
        'nofollow' => 0,
        'noindex' => 0,
        'noodp' => 0,
        'nosnippet' => 0,
        'noydir' => 0,
      ),
      'use_default' => 0,
    ),
  ),
  'menu' => array(
    'link_title' => '',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => 'primary-links',
    'weight' => 0,
    'options' => array(),
    'module' => 'menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
    'parent_depth_limit' => 8,
  ),
);

$tell_a_friend = array(
  'type' => 'webform',
  'language' => 'en',
  'uid' => '1069',
  'status' => '0',
  'comment' => '0',
  'promote' => '0',
  'moderate' => '0',
  'sticky' => '0',
  'tnid' => '0',
  'translate' => '0',
  'title' => 'Tell a friend!',
  'body' => '<p>Please tell your friends, family, and everyone you know to speak out against cuts to the New York Public Library.&nbsp;</p>',
  'teaser' => '<p>Please tell your friends, family, and everyone you know to speak out against cuts to the New York Public Library.&nbsp;</p>',
  'log' => '',
  'format' => '4',
  'name' => 'dillonsavage@nypl.org',
  'picture' => '',
  'signup' => 0,
  '_workflow' => FALSE,
  'av_content' => array(
    'position' => 'bottom',
  ),
  'webform' => array(
    'confirmation' => '',
    'teaser' => '0',
    'submit_text' => '',
    'submit_limit' => '-1',
    'submit_interval' => '-1',
    'additional_validate' => NULL,
    'additional_submit' => NULL,
    'confirmation_format' => '4',
    'submit_notice' => '1',
    'allow_draft' => '0',
    'redirect_url' => 'advocacy/thankyou',
    'block' => '0',
    'status' => '1',
    'auto_save' => '0',
    'record_exists' => TRUE,
    'roles' => array(
      '0' => '1',
      '1' => '2',
    ),
    'emails' => array(
      '1' => array(
        'eid' => '1',
        'email' => '8',
        'subject' => '9',
        'from_name' => 'default',
        'from_address' => 'default',
        'template' => 'Dear NYPL Friend,

Your friend, %value[first_name] %value[last_name], is sending you the message below.

Personal Message: %value[personal_message]

%value[body_hidden]

',
        'excluded_components' => array(
          '0' => '5',
          '1' => '7',
        ),
        'html' => '0',
        'attachments' => '0',
      ),
    ),
    'components' => array(
      '1' => array(
        'cid' => '1',
        'form_key' => 'first_name',
        'name' => 'Your First Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '0',
        'page_num' => 1,
      ),
      '2' => array(
        'cid' => '2',
        'form_key' => 'last_name',
        'name' => 'Your Last Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '1',
        'page_num' => 1,
      ),
      '3' => array(
        'cid' => '3',
        'form_key' => 'your_e_mail',
        'name' => 'Your E-mail',
        'type' => 'email',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '2',
        'page_num' => 1,
      ),
      '4' => array(
        'cid' => '4',
        'form_key' => 'send_to',
        'name' => 'Send to',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'description' => 'Enter each e-mail address on a separate line or separate addresses with commas. The e-mail addresses you supply will be used only to communicate about the campaign, and will not be shared with outside parties. <a href="http://www.nypl.org/help/about-nypl/legal-notices/privacy-policy">Privacy Policy</a>',
          'title_display' => 0,
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '1',
        'pid' => '0',
        'weight' => '3',
        'page_num' => 1,
      ),
      '8' => array(
        'cid' => '8',
        'form_key' => 'email_to',
        'name' => 'Email to',
        'type' => 'hidden',
        'value' => '',
        'extra' => array(
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '4',
        'page_num' => 1,
      ),
      '5' => array(
        'cid' => '5',
        'form_key' => 'subject',
        'name' => 'Subject',
        'type' => 'markup',
        'value' => '<div class="form-item"><label>Subject</label>
<p>Don\'t Close the Book on Libraries</p>
</div>',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => '2',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '5',
        'page_num' => 1,
      ),
      '9' => array(
        'cid' => '9',
        'form_key' => 'subject_hidden',
        'name' => 'Subject',
        'type' => 'hidden',
        'value' => 'Don\'t Close the Book on Libraries',
        'extra' => array(
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '6',
        'page_num' => 1,
      ),
      '6' => array(
        'cid' => '6',
        'form_key' => 'personal_message',
        'name' => 'Personalize Your Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 0,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '7',
        'page_num' => 1,
      ),
      '7' => array(
        'cid' => '7',
        'form_key' => 'body',
        'name' => 'Body',
        'type' => 'markup',
        'value' => '<div class="form-item"><label>Body</label>
<p>Please help save NYPL from proposed budget cuts.</p>
<p>(write to elected officials)</p>
<p>(donate)</p>
</div>',
        'extra' => array(
          'conditional_operator' => '=',
          'format' => '2',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '8',
        'page_num' => 1,
      ),
      '10' => array(
        'cid' => '10',
        'form_key' => 'body_hidden',
        'name' => 'body hidden',
        'type' => 'hidden',
        'value' => 'Please help save NYPL from proposed budget cuts.

Write to your elected officials.
http://dev.new.nypl.org/node/134566

Donate.
[donate link]',
        'extra' => array(
          'conditional_operator' => '=',
          'private' => 0,
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => '0',
        'pid' => '0',
        'weight' => '9',
        'page_num' => 1,
      ),
    ),
  ),
  'last_comment_name' => NULL,
  'comment_count' => '0',
  'taxonomy' => array(),
  'page_title' => FALSE,
  'nodewords' => array(
    'abstract' => array(
      'value' => '',
    ),
    'canonical' => array(
      'value' => '',
    ),
    'copyright' => array(
      'value' => '© 2010 The New York Public Library ',
    ),
    'description' => array(
      'value' => '',
    ),
    'keywords' => array(
      'value' => 'NYPL, The New York Public Library, Manhattan, Bronx, Staten Island',
    ),
    'revisit-after' => array(
      'value' => '1',
    ),
    'robots' => array(
      'value' => array(
        'noarchive' => 0,
        'nofollow' => 0,
        'noindex' => 0,
        'noodp' => 0,
        'nosnippet' => 0,
        'noydir' => 0,
      ),
      'use_default' => 0,
    ),
  ),
  'menu' => array(
    'link_title' => '',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => 'primary-links',
    'weight' => 0,
    'options' => array(),
    'module' => 'menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
    'parent_depth_limit' => 8,
  ),
);

?>