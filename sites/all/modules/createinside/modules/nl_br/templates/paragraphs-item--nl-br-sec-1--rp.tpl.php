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
<!-- <SECTION #1> Centreret tekst -->
<table bgcolor="#eeeeee" border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
	<tbody>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" height="25">&nbsp;</td>
			<td width="30">&nbsp;</td>
		</tr>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" style="font-family: Arial, sans-serif; font-size: 18px; color: #282828; text-align: center;">
				<?php
					print render($content['field_nl_br_sec_1_heading']);
				?>
			</td>
			<td width="30">&nbsp;</td>
		</tr>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" height="15">&nbsp;</td>
			<td width="30">&nbsp;</td>
		</tr>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" style="font-family: Arial, sans-serif; font-size: 14px; line-height:18px; color: #889098; text-align: center;">
				<?php
					print render($content['field_nl_br_sec_1_text']);
				?>
			</td>
			<td width="30">&nbsp;</td>
		</tr>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" height="25">&nbsp;</td>
			<td width="30">&nbsp;</td>
		</tr>
	</tbody>
</table>


<!-- </SECTION #1> -->

