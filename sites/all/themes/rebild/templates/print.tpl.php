<?php

/**
 * @file
 * Default print module template
 *
 * @ingroup print
 */
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
    <link href="/<?php print drupal_get_path("theme","rebild"); ?>/css/print.css" rel="stylesheet" type="text/css">
  </head>
  <body>
  	<div class="print-wrapper no-print">
	  	<form>
				<input type="button" class="send-to-printer" value="Udskriv" onClick="window.print()" />
			</form>
  	</div>
    <?php if (!empty($message)): ?>
      <div class="print-message"><?php print $message; ?></div><p />
    <?php endif; ?>
    <?php if ($print_logo): ?>
      <div class="print-logo"><?php print $print_logo; ?></div>
    <?php endif; ?>
    <div class="print-site_name"><?php print theme('print_published'); ?></div>
    <p />
    <div class="print-breadcrumb"><?php print theme('print_breadcrumb', array('node' => $node)); ?></div>
    <hr class="print-hr" />
    <p />
    <div class="print-content"><?php print $content; ?></div>
    <div class="print-footer"><?php print theme('print_footer'); ?></div>
    <hr class="print-hr" />
    <?php if ($sourceurl_enabled): ?>
      <div class="print-source_url">
        <?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
      </div>
    <?php endif; ?>
    <div class="print-links"><?php print theme('print_url_list'); ?></div>
    <?php //print $print['footer_scripts']; ?>
  </body>
</html>