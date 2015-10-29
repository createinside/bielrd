<?php

/**
 * @file
 * Default theme implementation for a single paragraph item.
 *
 * Available variables:
 * - $content: An array of content items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity
 *   - entity-paragraphs-item
 *   - paragraphs-item-{bundle}
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
<?php
  $socialMediaTypeMachineName = $content['field_social_media_type']['#object']->field_social_media_type['und'][0]['taxonomy_term']->field_social_media_machine_name['und'][0]['safe_value'];

  $socialMediaType = $content['field_social_media_type'][0]['#markup'];

  $socialMediaProfiles = $content['field_social_media_profiles']['#items'];
?>
<li class="social-media-service social-media-service-<?php echo $socialMediaTypeMachineName; ?> <?php echo $socialMediaTypeMachineName; ?>">
  <?php
    if(count($socialMediaProfiles) == 1) {
      echo '<a class="social-media-profile" href="'.$socialMediaProfiles[0]['url'].'">';
        echo '<span class="social-media-service-icon social-media-service-icon-first-level icon-'.$socialMediaTypeMachineName.'"></span>';
        echo '<span class="social-media-service-name">'.$socialMediaType.'</span>';
      echo '</a>';
    } else if(count($socialMediaProfiles) > 1) {
      echo '<span class="social-media-profiles-trigger">';
        echo '<span class="social-media-service-icon social-media-service-icon-first-level icon-'.$socialMediaTypeMachineName.'"></span>';
        echo '<span class="social-media-service-name">'.$socialMediaType.'</span>';
      echo '</span>';
      echo '<ul class="social-media-profiles">';
      foreach($socialMediaProfiles as $socialMediaProfile) {
        echo '<li>';
          echo '<a class="social-media-profile" href="'.$socialMediaProfile['url'].'">';
            echo '<span class="social-media-service-icon icon-'.$socialMediaTypeMachineName.'"></span>';
            echo $socialMediaProfile['title'];
          echo '</a>';
        echo '</li>';
      }
      echo '</ul>';
    }
  ?>
</li>
