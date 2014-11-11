<article<?php print $attributes; ?>>	
  <?php print $user_picture; 
	  $indhold = menu_get_object();
	  $user = user_is_logged_in();  ?>
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
      //if(isset($content['field_main_image'])) print render($content['field_main_image']);     

      if ($indhold->field_main_protected['und'][0]['value'] == 1) { 
      	if($user == 1){ 
      		if(isset($content['field_main_image'])) print render($content['field_main_image']); 
      		if(isset($content['field_main_summary'])) print render($content['field_main_summary']); 
      	}
      }
	  if ($indhold->field_main_protected['und'][0]['value'] == 0) {
	  	if(isset($content['field_main_image'])) print render($content['field_main_image']);     
	  	if(isset($content['field_main_summary'])) print render($content['field_main_summary']);
	  }
       if(isset($content['field_os2web_borger_dk_header'])) print render($content['field_os2web_borger_dk_header']);
      // Kontakt fields
      if(isset($content['field_con_address'])) hide($content['field_con_address']);
      if(isset($content['field_con_name'])) hide($content['field_con_name']);
      if(isset($content['field_con_title'])) hide($content['field_con_title']);
      if(isset($content['field_con_phone'])) hide($content['field_con_phone']);
      if(isset($content['field_con_email'])) hide($content['field_con_email']);
      if(isset($content['field_con_link'])) hide($content['field_con_link']);
      if(isset($content['field_con_center'])) hide($content['field_con_center']);
      if(isset($content['field_con_opening_hours'])) hide($content['field_con_opening_hours']);
      if(isset($content['field_con_phone_hours'])) hide($content['field_con_phone_hours']);
      // Check if any kontakt field is set
      if(isset($content['field_con_address']) || isset($content['field_con_name']) || isset($content['field_con_title']) || isset($content['field_con_phone']) || isset($content['field_con_email']) || isset($content['field_con_link']) || isset($content['field_con_center']) || isset($content['field_con_opening_hours']) || isset($content['field_con_phone_hours'])) {
	      $kontakt = 1;
      }
      else {
	      $kontakt = 0;
      }
		?>
   	<div id='content-main'<?php if(!empty($region['content_sidebar'])) print " class='has-sidebar'"; ?>>
		<?php
	
		if ($indhold->field_main_protected['und'][0]['value'] == 1) {
			if(!user_is_logged_in() ){
				print "<p>Du skal anvende brugernavn og adgangskode for at logge ind. Hvis du har mistet din adgangskode, kan du bestille en ny via nedenstående link.</p><p>" . l('Bestil ny adgangskode', 'user/password')."</p>";
			    print drupal_render(drupal_get_form('user_login')); 
			}
		else {
				print render($content);
			}			
			}
		else {
				print render($content);
			}		      
    ?>        				
		</div>
	
		<?php if(isset($region['content_sidebar'])) { ?>
			<div id="region-content-sidebar">			
			  <?php 
					/* Region: Content Sidebar */
					print render($region['content_sidebar']);   
				?>
				<?php if ($kontakt == 1) { ?>
				<a href="#kontaktdiv" id="kontaktlink">Kontakt os</a>
				<div id="kontaktdiv"><?php 	
					if(isset($content['field_con_center'])) print render($content['field_con_center']);
					if(isset($content['field_con_name'])) print render($content['field_con_name']);
					if(isset($content['field_con_title'])) print render($content['field_con_title']);
					if(isset($content['field_con_phone'])) print render($content['field_con_phone']);
					if(isset($content['field_con_email'])) print render($content['field_con_email']);
					if(isset($content['field_con_link'])) print render($content['field_con_link']);
					if(isset($content['field_con_address'])) print render($content['field_con_address']);
				      				      
				      if(isset($content['field_con_opening_hours']))?><div class="kontaktleft"><?php print render($content['field_con_opening_hours']);?></div>
				     <?php if(isset($content['field_con_phone_hours']))?><div class="kontaktright"><?php print render($content['field_con_phone_hours']);?></div> 				
				</div>
			<?php } ?>
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
