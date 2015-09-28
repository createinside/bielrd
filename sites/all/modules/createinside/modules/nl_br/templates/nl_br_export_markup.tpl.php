<?php global $base_url; ?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
	<meta name="format-detection" content="telephone=no">
	<style type="text/css">
		html {
			width:100%;
		}

		body {
			width:100% !important;
			-webkit-text-size-adjust:100%;
			-ms-text-size-adjust:100%;
			margin:0;
			padding:0;
			background:#b7b7b7;
		}

		table {
			border-collapse:collapse;
			mso-table-lspace:0pt;
			mso-table-rspace:0pt;
		}

		table td {
			border-collapse:collapse;
		}

		p {
			margin: 0;
		}

		img {
			border:none;
			display: block;
			font-size:14px;
			font-weight:bold;
			height:auto;
			line-height:100%;
			outline:none;
			text-decoration:none;
			text-transform:capitalize;
			-ms-interpolation-mode:bicubic;
		}

		a:link{
			text-decoration:none;
			font-weight:normal;
			color:#282828;
		}

		a:visited{
			text-decoration:none;
			font-weight:normal;
			color:#282828;
		}

		a:hover{
			text-decoration:none;
			font-weight:normal;
			color:#282828;
		}

		a:active{
			text-decoration:none;
			font-weight:normal;
			color:#282828;
		}

		a[href^=tel],a[href^=sms]{
			text-decoration:none;
			color:#282828;
			cursor:default;
		}

			a img{
				border:none;
			}

		/**
	 	 * Sektion 3: Tekst med topbillede
	 	 */
		.field-name-field-nl-br-sec-3-read-more a {
			text-decoration: none;
			color: #ffffff;
			text-align:center;
		}

		/**
	 	 * Sektion 4: Tekst med venstrestillet billede
	 	 */
		.field-name-field-nl-br-sec-4-read-more a {
			text-decoration: none;
			color: #ffffff;
			text-align:center;
		}

		/**
		 * Sektion 5: Tekst med højrestillet billede
		 */
		.field-name-field-nl-br-sec-5-read-more a {
			text-decoration: none;
			color: #ffffff;
			text-align:center;
		}

		/**
		 * Sektion 6: Tekst
		 */
		.field-name-field-nl-br-sec-6-read-more a {
			text-decoration: none;
			color: #ffffff;
			text-align:center;
		}

	</style>
</head>
<body style="margin:0px; padding:0px; background:#b7b7b7;">
	<table bgcolor="#b7b7b7" border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
		<tbody>
			<tr>
				<td align="center" valign="top">
					<table bgcolor="#b7b7b7" border="0" cellpadding="0" cellspacing="0" width="600">
						<tr>
							<td align="center" valign="top">
								<table border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
										<tr>
											<td width="600" height="15">&nbsp;</td>
										</tr>
									</tbody>
								</table>
								<!-- <HEADER> -->
								<table border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
										<tr>
											<td width="600" height="25" style="font-family: Arial, sans-serif; font-size: 11px; color: #282828; text-align: center;">Vises denne mail ikke korrekt? <a href="%%webversion%%" style="text-decoration: none; color: #282828">Åbn i din browser - Klik her</a></td>
										</tr>
									</tbody>
								</table>
								<table border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
										<tr>
											<td width="600" height="15">&nbsp;</td>
										</tr>
									</tbody>
								</table>
								<table bgcolor="#282828" border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
										<tr>
											<td width="30" height="15" colspan="4">&nbsp;</td>
										</tr>
										<tr>
											<td width="30" height="15">&nbsp;</td>
											<td width="270" valign="middle" align="left" style="font-family: Arial, sans-serif; font-size: 20px; text-align: left;">
												<a style="text-decoration: none;" target="_blank" href="http://rebild.dk/erhverv"><span style="color:#d9620c ;">BUSINESS </span><span style="color:#ffffff;">REBILD</span></a>
											</td>
											<td width="270" valign="middle" align="right" style="font-family: Arial, sans-serif; font-size: 12px; line-height: 14px; color: #ffffff; text-align: right;">
												<a href="http://rebild.dk/erhverv/nyheder" style="color: #ffffff;text-decoration: none;">Aktuelt</a> &nbsp;|&nbsp;
												<a href="http://rebild.dk/erhverv/velkommen-til-business-rebild/kontakt-business-rebild" style="color: #ffffff;text-decoration: none;">Kontakt</a> &nbsp;|&nbsp;
												<a href="https://www.linkedin.com/company/business-rebild" style="color: #ffffff;text-decoration: none;">LinkedIn</a>
											</td>
											<td width="30" height="15">&nbsp;</td>
										</tr>
										<tr>
											<td width="600" height="15" colspan="4">&nbsp;</td>
										</tr>
									</tbody>
								</table>
								<!-- </HEADER> -->
								<!-- <CONTENT> -->
								<?php
									foreach($variables['sections'] as $section) {
										print $section;
									}
								?>
								<!-- </CONTENT> -->
								<!-- <FOOTER> -->
								<table bgcolor="#d9620c" border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
										<tr>
											<td>&nbsp;</td>
											<td width="72" height="25">&nbsp;</td>
											<td>&nbsp;</td>
										</tr>
										<tr>
											<td width="264" height="15">&nbsp;</td>
											<td align="center" width="72" style="font-family: Arial, sans-serif; font-size: 18px; color: #282828; text-align: center;"><img width="72" border="0" alt="" style="display:block; border:none; outline:none; text-decoration:none;" src="<?php print $base_url."/".drupal_get_path("module", "nl_br"); ?>/img/logo.png"></td>
											<td width="264" height="15">&nbsp;</td>
										</tr>
										<tr>
											<td>&nbsp;</td>
											<td width="72" height="25">&nbsp;</td>
											<td>&nbsp;</td>
										</tr>
									</tbody>
								</table>
								<table border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
									<tr>
										<td width="600" height="25">&nbsp;</td>
									</tr>
									<tr>
										<td width="600" style="font-family: Arial, sans-serif; font-size: 11px; line-height: 14px; color: #282828; text-align: center;">
											<p>
												&Oslash;nsker du at afmelde %%emailaddress%% fra denne liste - <a href="%%unsubscribelink%%" style="text-decoration: underline; color: #282828">klik her</a>.

												<br>
												<br>Copyright &copy; <?php echo date('Y') ?> Business Rebild
												<br>Østre Alle 6, 9530 St&oslash;vring
										</td>
									</tr>
									</tbody>
								</table>
								<table border="0" cellpadding="0" cellspacing="0" width="100%" style="font-size: 0px;">
									<tbody>
									<tr>
										<td width="600" height="15">&nbsp;</td>
									</tr>
									</tbody>
								</table>
								<!-- </FOOTER> -->
							</td>
						</tr>
					</table>
				</td>
			</tr>
		</tbody>
	</table>
</body>
