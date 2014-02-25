<article<?php print $attributes; ?>>
<?php 
	unset($content['print_links']);
	unset($content['links']);
 ?>
<?php print render($content); ?>
</article>