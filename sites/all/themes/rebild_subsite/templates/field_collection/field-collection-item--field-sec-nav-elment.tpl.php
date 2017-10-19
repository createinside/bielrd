<?php

/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <?php
	    hide($content['field_sec_nav_title']);
	    hide($content['field_sec_nav_link']);
	    $link_elem = $content['field_sec_nav_link'][0]['#element'];

	    // Change link label on english business pages
	    $current_path = request_path();
      if(drupal_match_path($current_path, 'business/*')) {
        $link_title = 'Read more';
      }
      else {
        $link_title = $link_elem['title'];
      }
	  ?>
	  <a href="<?php print $link_elem['url']; ?>" title="<?php print $link_title; ?>"<?php if(isset($link_elem['attributes']['target'])) print 'target="'.$link_elem['attributes']['target'].'"'; ?> class="nav-link">
		  <h3><?php print $content['field_sec_nav_title'][0]['#markup']; ?></h3>
		  <?php
	      print render($content);
	    ?>
	    <span class="read-more"><?php print $link_title; ?></span>
	  </a>
  </div>
</div>
