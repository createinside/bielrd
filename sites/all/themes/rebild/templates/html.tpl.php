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
  <script id="Cookiebot" src="https://consent.cookiebot.com/uc.js" data-cbid="3c5a15b3-4d3e-4613-a636-3b376d3b8927" type="text/javascript" async></script>
  <!-- Facebook Pixel Code -->
  <script>
    !function(f,b,e,v,n,t,s)
    {if(f.fbq)return;n=f.fbq=function(){n.callMethod?
      n.callMethod.apply(n,arguments):n.queue.push(arguments)};
    if(!f._fbq)f._fbq=n;n.push=n;n.loaded=!0;n.version='2.0';
    n.queue=[];t=b.createElement(e);t.async=!0;
    t.src=v;s=b.getElementsByTagName(e)[0];
    s.parentNode.insertBefore(t,s)}(window,document,'script',
    'https://connect.facebook.net/en_US/fbevents.js');
    fbq('init', '2279212298795210');
    fbq('track', 'PageView');
  </script>
  <noscript>
    <img height="1" width="1"
    src="https://www.facebook.com/tr?id=2279212298795210&ev=PageView
    &noscript=1"/>
  </noscript>
  <!-- End Facebook Pixel Code -->
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
<script type="text/javascript">
/*<![CDATA[*/
(function() {
var sz = document.createElement('script'); sz.type = 'text/javascript'; sz.async = true;
sz.src = '//siteimproveanalytics.com/js/siteanalyze_2522.js';
var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(sz, s);
})();
/*]]>*/
</script>
</body>
</html>
