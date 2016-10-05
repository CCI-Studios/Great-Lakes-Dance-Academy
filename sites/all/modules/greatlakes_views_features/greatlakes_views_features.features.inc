<?php
/**
 * @file
 * greatlakes_views_features.features.inc
 */

/**
 * Implements hook_views_api().
 */
function greatlakes_views_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function greatlakes_views_features_image_default_styles() {
  $styles = array();

  // Exported image style: fascility.
  $styles['fascility'] = array(
    'name' => 'fascility',
    'label' => 'fascility',
    'effects' => array(
      2 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'fascility',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: front_header_image.
  $styles['front_header_image'] = array(
    'name' => 'front_header_image',
    'label' => 'Front header image',
    'effects' => array(
      7 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 1920,
          'height' => 1080,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'front_header_image',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: front_modules.
  $styles['front_modules'] = array(
    'name' => 'front_modules',
    'label' => 'Front modules',
    'effects' => array(
      6 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 236,
          'height' => 297,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'front_modules',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: gallery.
  $styles['gallery'] = array(
    'name' => 'gallery',
    'label' => 'gallery',
    'effects' => array(
      3 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 240,
          'height' => 240,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'gallery',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: news.
  $styles['news'] = array(
    'name' => 'news',
    'label' => 'News',
    'effects' => array(
      8 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 100,
          'height' => 100,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'news',
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: staff.
  $styles['staff'] = array(
    'name' => 'staff',
    'label' => 'staff',
    'effects' => array(
      4 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 209,
          'height' => 313,
          'upscale' => 0,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'staff',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function greatlakes_views_features_node_info() {
  $items = array(
    'class_schedule' => array(
      'name' => t('Class Schedule'),
      'base' => 'node_content',
      'description' => t('Schedule for days'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'facility_slider' => array(
      'name' => t('Facility slider'),
      'base' => 'node_content',
      'description' => t('Fascility slider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'front_page_header' => array(
      'name' => t('Front page header'),
      'base' => 'node_content',
      'description' => t('front page header image'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery' => array(
      'name' => t('Gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'member_area_pages' => array(
      'name' => t('Member area pages'),
      'base' => 'node_content',
      'description' => t('Member area pages
'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'modules_front' => array(
      'name' => t('Modules front'),
      'base' => 'node_content',
      'description' => t('modules front page'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'staff' => array(
      'name' => t('staff'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'videos' => array(
      'name' => t('videos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform_select_options' => array(
      'name' => t('webform select  options'),
      'base' => 'node_content',
      'description' => t('webform select  options'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
