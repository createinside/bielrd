<article<?php print $attributes; ?>>	
	
  <?php if ($display_submitted): ?>
  <footer class="submitted"><?php print $date; ?> -- <?php print $name; ?></footer>
  <?php endif; ?>  

  <div<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      if(isset($content['field_main_image'])) hide($content['field_main_image']);
      if(isset($content['field_main_summary'])) hide($content['field_main_summary']);
      // Print banner image and summary if they exist
  		if(isset($content['field_main_image'])) print render($content['field_main_image']); 
  		if(isset($content['field_main_summary'])) print render($content['field_main_summary']);
		?>
   	<div id='content-main'<?php if(!empty($region['content_sidebar'])) print " class='has-sidebar'"; ?>>
		<?php
			print render($content);	      
    ?>        				
		</div>
		<?php if(isset($region['content_sidebar'])) { ?>
			<div id="region-content-sidebar">			
			  <?php 
				/* Region: Content Sidebar */
				print render($region['content_sidebar']);   
				?>
			</div>
		<?php } ?>  
	</div>
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>
    <?php print render($content['comments']); ?>
  </div>
</article>
<div class="node-share">
	<div class="share_wrapper">
		<div class="facebook-share share_this">
			<div id="fb-root"></div>
			<script>(function(d, s, id) {
			var js, fjs = d.getElementsByTagName(s)[0];
			if (d.getElementById(id)) return;
			js = d.createElement(s); js.id = id;
			js.src = "//connect.facebook.net/da_DK/all.js#xfbml=1";
			fjs.parentNode.insertBefore(js, fjs);
			}(document, 'script', 'facebook-jssdk'));</script>
			<fb:like width="225" layout="button_count" show_faces="false" send="false"></fb:like>
		</div>
		
		<div class="twitter-share share_this">
			<a href="https://twitter.com/share" class="twitter-share-button">Tweet</a>
			<script>!function(d,s,id){var js,fjs=d.getElementsByTagName(s)[0],p=/^http:/.test(d.location)?'http':'https';if(!d.getElementById(id)){js=d.createElement(s);js.id=id;js.src=p+'://platform.twitter.com/widgets.js';fjs.parentNode.insertBefore(js,fjs);}}(document, 'script', 'twitter-wjs');</script>
		</div>
		<div class="linkedin-share share_this">
			<script src="//platform.linkedin.com/in.js" type="text/javascript">
			lang: en_US
			</script>
			<script type="IN/Share"></script>
		</div>
		<div class="email-share share_this">
			<?php print print_mail_insert_link(); ?>
		</div>
		<div class="to_the_top"><a href="#" class="go-top">Til toppen</a></div>
	</div>
</div>
