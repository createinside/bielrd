<article<?php print $attributes; ?>>
  <?php print $user_picture; ?>
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>  
  
  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      // Print banner image and summary if they exist
      if(isset($content['field_main_image'])) hide($content['field_main_image']);
      if(isset($content['field_main_summary'])) hide($content['field_main_summary']);
      if(isset($content['field_main_image'])) print render($content['field_main_image']);
      if(isset($content['field_main_summary'])) print render($content['field_main_summary']);
      if(isset($content['field_os2web_borger_dk_header'])) print render($content['field_os2web_borger_dk_header']);
		?>

			<div id='content-main'>
		<?php
      print render($content);
    ?>
			</div>
	</div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
  </div>
</article>