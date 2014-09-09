<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
 
 
/**
 * Respond.js
 * 
 * Making Respond.js work as intended
 */
function rebild_css_alter(&$css) {
	foreach ($css as $key => $value) {
      if (preg_match('/^ie::(\S*)/', $key)) {
          unset($css[$key]);
      } else {
          $css[$key]['browsers']['IE'] = TRUE;
      }
  }
	
	// Disabl jQuery UI CSS files
  $disabled_drupal_css = array(
    // Remove jquery.ui css files.
    'misc/ui/jquery.ui.core.css',
    'misc/ui/jquery.ui.theme.css',
  );

  // Remove drupal default css files.
  foreach ($css as $key => $item) {
    if (in_array($key, $disabled_drupal_css)) {
      // Remove css and its altered version that can be added by jquety_update.
      unset($css[$css[$key]['data']]);
      unset($css[$key]);
    }
  }
}

/**
 * Preprocess HTML 
 *
 * Implements hook_preprocess_html
 */
function rebild_preprocess_html(&$variables) {
  // Adds Swipebox CSS + JS
  drupal_add_css('sites/all/libraries/swipebox/source/swipebox.css');
  drupal_add_js('sites/all/libraries/swipebox/source/jquery.swipebox.min.js');
  
  // Get a list of all the regions for this theme
  foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {

    // Get the content for each region and add it to the $region variable
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    }
    else {
      $variables['region'][$region_key] = array();
    }
  }
}
 
/**
 * Implements hook_ultimenu_link
 *
 * Inserts icon in menu link (Mega Menu - Level 1)
 */
function rebild_ultimenu_link(array $variables) {

 	$element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $element['#localized_options']["html"] = TRUE;
  $output = l($element['#title'].' <span class="icon-arrow-down2"></span>', $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements hook_menu_link
 *
 * Inserts icon in menu link (Mega Menu - Level 2+)
 */
function rebild_menu_link(array $variables) {

 	$element = $variables['element'];
  $sub_menu = '';
    
  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  if($element['#original_link']['menu_name']=="main-menu" && $element['#original_link']['depth']>1) {
	  $element['#localized_options']["html"] = TRUE;
  	$output = l('<span class=" icon-double-angle-right"></span> '.$element['#title'], $element['#href'], $element['#localized_options']);
	}
	else {
  	$output = l($element['#title'], $element['#href'], $element['#localized_options']);
	}
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Breadcrumbs 
 *
 * Customizes the breadcrumbs structure
 */
function rebild_breadcrumb($variables) {
	
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
 * Preprocess Node
 *
 * Adds a new block region inside the node template
 */
function rebild_preprocess_node(&$variables) {

  // Get a list of all the regions for this theme
  foreach (system_region_list($GLOBALS['theme']) as $region_key => $region_name) {

    // Get the content for each region and add it to the $region variable
    if ($blocks = block_get_blocks_by_region($region_key)) {
      $variables['region'][$region_key] = $blocks;
    }
    else {
      $variables['region'][$region_key] = array();
    }
  }
}

/**
 * Preprocess Field
 *
 * Implements hook_preprocess_field
 */
function rebild_preprocess_field(&$variables, $hook) {
	$element = $variables['element'];

	// GIS KORT
  if ($element['#field_name'] == 'field_main_gis_map') {
		// Hide GIS map on mobile devices
  	$browser = browscap_get_browser();
  	if($browser["ismobiledevice"]=="false") {
  		$variables["items"][0]["#markup"] = "<iframe width='100%' height='400px' src='".$variables["items"][0]["#markup"]."'> </iframe>";
  	}
  	else {
	  	$variables["items"][0]["#markup"] = "<a href='".$variables["items"][0]["#markup"]."'>Se kort her</a>";	
  	}
  }
}

function rebild_picture($variables) {

	if(isset($variables['field_file_image_alt_text']['und'][0]['value'])) {
		$variables["alt"] = $variables['field_file_image_alt_text']['und'][0]['value'];
	}
	if(isset($variables['field_file_image_title_text']['und'][0]['value']) && $variables['field_file_image_title_text']['und'][0]['value']!=null) {
		$variables["title"] = $variables['field_file_image_title_text']['und'][0]['value'];
	}
	else {
		$variables["title"] = "";
	}
	
	  // Make sure that width and height are proper values
  // If they exists we'll output them
  // @see http://www.w3.org/community/respimg/2012/06/18/florians-compromise/
  if (isset($variables['width']) && empty($variables['width'])) {
    unset($variables['width']);
    unset($variables['height']);
  }
  elseif (isset($variables['height']) && empty($variables['height'])) {
    unset($variables['width']);
    unset($variables['height']);
  }

  $sources = array();
  $output = array();

  // Fallback image, output as source with media query.
  $sources[] = array(
    'src' => image_style_url($variables['style_name'], $variables['uri']),
    'dimensions' => picture_get_image_dimensions($variables),
  );

  // All breakpoints and multipliers.
  foreach ($variables['breakpoints'] as $breakpoint_name => $multipliers) {
    $breakpoint = breakpoints_breakpoint_load_by_fullkey($breakpoint_name);
    if ($breakpoint) {
      $new_sources = array();
      foreach ($multipliers as $multiplier => $image_style) {
        $new_source = $variables;
        $new_source['style_name'] = $image_style;
        $new_source['#media_query'] = picture_get_multiplier_media_query($multiplier, $breakpoint->breakpoint);
        $new_sources[] = $new_source;
      }

      foreach ($new_sources as $new_source) {
        $sources[] = array(
          'src' => image_style_url($new_source['style_name'], $new_source['uri']),
          'dimensions' => picture_get_image_dimensions($new_sources[0]),
          'media' => $new_source['#media_query'],
        );
      }
    }
  }

  if (!empty($sources)) {
    $attributes = array();
    foreach (array('alt', 'title') as $key) {
      if (isset($variables[$key])) {
        $attributes['data-' . $key] = $variables[$key];
      }
    }
    $output[] = '<span data-picture' . drupal_attributes($attributes) . '>';

    // Add source tags to the output.
    foreach ($sources as $source) {
      $output[] = theme('picture_source', $source);
    }

    // Output the fallback image.
    if (empty($variables['path'])) {
      $variables['path'] = $variables['uri'];
    }

    $output[] = '<noscript>' . theme('image_style', $variables) . '</noscript>';
    $output[] = '</span>';
    return implode("\n", $output);
  }
}

/**
 * Implements the preprocess THEMENAME_preprocess_search_results().
 *
 * @param Assoc $variables
 *   'results': Search results array.
 *   'module': Module the search results came from (module implementing hook_search_info()).
 */
function rebild_preprocess_search_results(&$variables) {
  $variables['search_results'] = '';
  if (!empty($variables['module'])) {
    $variables['module'] = check_plain($variables['module']);
  }
  $index = 0;
  foreach ($variables['results'] as $result) {
    $variables['search_results'] .= theme('search_result',
      array(
        'result' => $result,
        'module' => $variables['module'],
        'extra_classes' => $index % 2 === 0 ? ' even' : ' odd',
      )
    );
    ++$index;
  }
  $variables['pager'] = theme('pager', array('tags' => NULL));
  $variables['theme_hook_suggestions'][] = 'search_results__' . $variables['module'];
}

function rebild_page_alter(&$page) {
	
	$node = menu_get_object();

	// Breadcrumb: Agenda nodes
	if($node->type=="agenda") {
	
		$committee = field_get_items('node', $node, 'field_agenda_committee');
						
		$breadcrumb = drupal_get_breadcrumb();
		$breadcrumb[] = l('Politik', 'politik');
		$breadcrumb[] = l('Dagsordener og referater', 'politik/dagsordener-og-referater');
		$breadcrumb[] = l($committee[0]['taxonomy_term']->name, 'politik/dagsordener-og-referater/'.$committee[0]["tid"]);
		drupal_set_breadcrumb($breadcrumb);
	}
	// Breadcrumb: Agenda views
	else if(arg(1) == 'dagsordener-og-referater' && is_numeric(arg(2))) {
		$breadcrumb = drupal_get_breadcrumb();
		array_pop($breadcrumb);
		drupal_set_breadcrumb($breadcrumb);
	}
}

function rebild_date_all_day_label() { 
	return ''; 
}

/**
 * CALENDAR TITLES
 */
function rebild_date_nav_title($params) {
  $granularity = $params['granularity'];
  $view = $params['view'];
  $date_info = $view->date_info;
  $link = !empty($params['link']) ? $params['link'] : FALSE;
  $format = !empty($params['format']) ? $params['format'] : NULL;
  switch ($granularity) {
    case 'year':
      $title = $date_info->year;
      $date_arg = $date_info->year;
      break;
    case 'month':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'F Y' : 'F Y');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month);
      break;
    case 'day':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'l, d. F' : 'l, F j');
      $title = date_format_date($date_info->min_date, 'custom', $format);
      $date_arg = $date_info->year . '-' . date_pad($date_info->month) . '-' . date_pad($date_info->day);
      break;
    case 'week':
      $format = !empty($format) ? $format : (empty($date_info->mini) ? 'W, Y' : 'F j');
      $title = t('Uge @date', array('@date' => date_format_date($date_info->min_date, 'custom', $format)));
      $date_arg = $date_info->year . '-W' . date_pad($date_info->week);
      break;
  }
  if (!empty($date_info->mini) || $link) {
    // Month navigation titles are used as links in the mini view.
    $attributes = array('title' => t('View full page month'));
    $url = date_pager_url($view, $granularity, $date_arg, TRUE);
    return l($title, $url, array('attributes' => $attributes));
  }
  else {
    return $title;
  }
}
/**
 * hook_menu_local_task_alter
 *
 * Convert Clone link from action link to tab.
 */
function rebild_menu_local_tasks_alter(&$data, $router_item, $root_path) {
	if (isset($data['actions']['output'][0])) {
		if($data['actions']['output'][0]['#link']['page_callback'] == 'clone_node_check') {
			$data['actions']['output'][0]['#theme'] = 'menu_local_task';
			$data['actions']['output'][0]['#link']['title'] = 'Opret kopi';
			$data['tabs'][0]['output'][] = $data['actions']['output'][0];
			unset($data['actions']['output'][0]);
		}
	}
}