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
<!-- <SECTION #6> Tekst -->
<table bgcolor="#ffffff" border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
	<tbody>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" style="font-family: Arial, sans-serif; font-size: 18px; color: #282828; text-align: left;">
				<?php
					print render($content['field_nl_br_sec_6_heading']);
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
			<td width="540" style="font-family: Arial, sans-serif; font-size: 14px; line-height:18px; color: #889098 ; text-align: left;">
				<?php
					print render($content['field_nl_br_sec_6_text']);
				?>
			</td>
			<td width="30">&nbsp;</td>
		</tr>
		<?php
			if(isset($content['field_nl_br_sec_6_read_more'])) {
		?>
		<tr>
			<td width="30">&nbsp;</td>
			<td width="540" height="15">&nbsp;</td>
			<td width="30">&nbsp;</td>
		</tr>
		<tr>
			<td width="30">&nbsp;</td>
			<td style="font-family: Arial, sans-serif; font-size: 14px; color: #889098; text-align:left; line-height: 18px;">
				<table width="120" height="32" bgcolor="#d9620c" align="left" valign="middle" border="0" cellpadding="0" cellspacing="0" style="border-radius:3px;">
					<tbody>
						<tr>
							<td height="9" align="center" style="font-size:1px; line-height:1px;">&nbsp;</td>
						</tr>
						<tr>
							<td height="14" align="center" valign="middle" style="font-family: Arial, sans-serif; font-size: 12px; font-weight:normal;color: #ffffff; text-align:center; line-height: 14px; ; -webkit-text-size-adjust:none;">
								<?php
									print render($content['field_nl_br_sec_6_read_more']);
								?>
							</td>
						</tr>
						<tr>
							<td height="9" align="center" style="font-size:1px; line-height:1px;">&nbsp;</td>
						</tr>
					</tbody>
				</table>
			</td>
			<td width="30">&nbsp;</td>
		</tr>
		<?php
			}
		?>
	</tbody>
</table>
<!-- </SECTION #6> -->
