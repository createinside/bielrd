<?php 

/**
 * @file
 * Default theme implementation to format an HTML mail.
 *
 * Copy this file in your default theme folder to create a custom themed mail.
 * Rename it to mimemail-message--[key].tpl.php to override it for a
 * specific mail.
 *
 * Available variables:
 * - $recipient: The recipient of the message
 * - $subject: The message subject
 * - $body: The message body
 * - $css: Internal style sheets
 * - $key: The message identifier
 *
 * @see template_preprocess_mimemail_message()
 */
?>
<html>
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  </head>
  <body id="mimemail-body" <?php if ($key): print 'class="'. $key .'"'; endif; ?>>
    <style type="text/css">
    	body {
	    	font-family: Verdana, Arial, sans-serif; color: #474747; font-size: 12px;
    	}
			a {
				color: #68a386;
			}
			.newsletter-view {
				margin-top: 20px;
			}
			.newsletter-row {
				margin-bottom: 10px;
				padding-bottom: 10px;
				border-bottom: 1px dotted #474747;
			}
			.newsletter-title {
				font-size: 13px;
				margin-bottom: 10px;
				font-weight: bold;
			}
				.newsletter-title a {
					color: #474747;
					text-decoration: none;
				}
			.newsletter-date {
				margin-bottom: 10px;
			}
			.newsletter-summary {
				margin-bottom: 10px;
			}
			.newsletter-link {
				
			}
    </style>
      <table cellpadding="0" cellspacing="0" width="100%" style="font-family: Verdana, Arial, sans-serif; color: #474747;">
				<tr>
					<td width="100%" align="center">
					<table cellpadding="0" cellspacing="0" width="600" align="center" style="font-family: Verdana, Arial, sans-serif; color: #474747; font-size: 12px;">
						<tr>
							<td style="padding: 20px; text-align: center"><img src="http://www.createinside.com/mailsignatur/rebild/rebild-logo.png" alt="Rebild Kommune Logo" />
							</td>
						</tr>
						<tr>
							<td>
								<?php print $body ?>
							</td>
						</tr>
						<tr>
							<td align="center">
								<p style="font-size: 11px; margin-top: 20px;">Rebild Kommune - <a href="http://rebild.dk" style="color: #68a386">rebild.dk</a></p>
							</td>
						</tr>
					</table>
					</td>
				</tr>
      </table>
  </body>
</html>
