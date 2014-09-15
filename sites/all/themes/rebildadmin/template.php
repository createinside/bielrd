<?php

/**
 * Override or insert variables into the page template.
 */
function rebildadmin_preprocess_page(&$vars) {
	$vars['worbench_contact_block'] = block_render('block', '16');	

}

/**
 * Breadcrumbs 
 * Customizes the breadcrumbs structure
 */
function rebildadmin_breadcrumb($variables) {
	
	$breadcrumb = $variables['breadcrumb'];
 if (!empty($breadcrumb)) {
    array_shift($breadcrumb); // Removes the Home item
    array_unshift($breadcrumb,l(' <span class="icon-home"></span> ','<front>', array("html" => TRUE)));
    $output = '<div class="breadcrumb">';
    $output .= implode(' <span class="icon-angle-right"></span> ', $breadcrumb);
    $output .= ' <span class="icon-angle-right"></span> <strong>'.drupal_get_title().'</strong>';
    $output .= '</div>';
    return $output;
  }
  
}



/**
 * Custom function to render a block so I can manually position it in the markup
 */
function block_render($module, $block_id) {
  $block = block_load($module, $block_id);
  $block_content = _block_render_blocks(array($block));
  $build = _block_get_renderable_array($block_content);
  $block_rendered = drupal_render($build);
  return $block_rendered;
}


?>
