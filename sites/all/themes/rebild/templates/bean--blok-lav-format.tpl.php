<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
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
	
  <?php
  if (isset($content['field_bean_link'][0]['#element']['url']) || isset($content['field_bean_intern_link'])) {
    print '<a href="';
    if (isset($content['field_bean_link'][0]['#element']['url'])) { 
      print $content['field_bean_link'][0]['#element']['url']; 
    } 
    else if (isset($content['field_bean_intern_link'])) { 
      print '/node/' . $content['field_bean_intern_link']['#items'][0]['target_id']; 
    }
    print '">';  
  }
  ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php 
      print render($content['field_image']);
    ?>      
    <?php if(isset($content['field_bean_tekstlinie']) || $bean->title != '') { ?>
    <div id="bean-content">
      <?php if($bean->title != '') print '<strong>' . $title . '</strong>'; ?>         
      <?php if(isset($content['field_bean_tekstlinie'])) { print render($content['field_bean_tekstlinie']); } 
        print render($content['field_bean_short_text']); 
      ?>
    </div>
    <?php } ?>    
  </div>
  <?php 
  if (isset($content['field_bean_link'][0]['#element']['url']) || isset($content['field_bean_intern_link'])) { 
  ?>
  </a>
  <?php } ?>
</div>
