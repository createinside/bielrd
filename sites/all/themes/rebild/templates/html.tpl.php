<?php 
/**
 * @file
 * Alpha's theme implementation to display the basic html structure of a single
 * Drupal page.
 */
?><?php print $doctype; ?>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf->version . $rdf->namespaces; ?> xmlns:fb="http://ogp.me/ns/fb#">

<head<?php print $rdf->profile; ?>>
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>  
  <?php print $styles; ?>
  <?php print $scripts; ?>
  <!--[if lt IE 9]><script src="http://html5shiv.googlecode.com/svn/trunk/html5.js"></script><![endif]-->
</head>
<body<?php print $attributes;?>>

  <div id="skip-link">
    <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
	<?php 
	// Insert mobile menu block region
	if(isset($region['mobile_menu'])) { 
	?>
		<div id="region-mobile-menu">
		  <?php 
				print render($region['mobile_menu']);   
			?>
		</div>
		<div id="mobile-overlay"></div>
	<?php } ?>
	<script>
	// Facebook Advertising
	(function() {

	  var _fbq = window._fbq || (window._fbq = []);
	
	  if (!_fbq.loaded) {
	
	    var fbds = document.createElement('script');
	
	    fbds.async = true;
	
	    fbds.src = '//connect.facebook.net/en_US/fbds.js';
	
	    var s = document.getElementsByTagName('script')[0];
	
	    s.parentNode.insertBefore(fbds, s);
	
	    _fbq.loaded = true;
	
	  }
	
	  _fbq.push(['addPixelId', '1439638206280265']);
	
	})();
	
	window._fbq = window._fbq || [];
	
	window._fbq.push(['track', 'PixelInitialized', {}]);
	
	</script>
	
	<noscript><img height="1" width="1" border="0" alt="" style="display:none" src="https://www.facebook.com/tr?id=1439638206280265&amp;ev=NoScript" /></noscript>
	<!-- Survey -->
	<script type="text/javascript" src="https://coachego.com/sitetesten/SiteTesten_2014_REBILDKOM.js"></script>  
</body>
</html>