<?php
function greatlakes_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if (strpos(url($element['#href']), 'nolink')) {
    $output = '<a href="#" class="nolink">' . $element['#title'] . '</a>';
  } else {
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  }
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}
?>