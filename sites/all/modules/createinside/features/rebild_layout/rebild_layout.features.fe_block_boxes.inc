<?php
/**
 * @file
 * rebild_layout.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function rebild_layout_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Mobile header';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mobile_header';
  $fe_block_boxes->body = '<div id="mob-header"><p id="mob-header-left"><a href="#" id="mobile-menu-toggle"><span class="icon-reorder">&nbsp;</span></a></p><p id="mob-header-center"><a href="/"><span class="icon-mobil_logo">&nbsp;</span></a></p><p id="mob-header-right"><span class="icon-search">&nbsp;</span></p></div>';

  $export['mobile_header'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Politik - Menublok';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'politik_menublock';
  $fe_block_boxes->body = '<p>Brug søgefeltet nedenfor og søg på indhold under Politik.</p><form><input type="search" value="Søg under Politik" /><input type="submit" value="Søg" /></form><p class="small-text"><strong>Mest søgt under Politik:</strong> <a href="#">Integer accumsan</a><a href="#">sodales euismod</a><a href="#">cum sociis</a></p>';

  $export['politik_menublock'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Afsender';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'rebild_bottom';
  $fe_block_boxes->body = '<p>Rådhuset | Hobrovej 88, 9530 Støvring | Tlf: 97 88 52 45 | Email: raadhus@rebild.dk</p>';

  $export['rebild_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt forside';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_contact_front';
  $fe_block_boxes->body = '<p><strong>Rebild Kommune</strong><br />Rådhuset - Hobrovej 88 - 9530 Støvring&nbsp;</p><table border="0" cellspacing="0" cellpadding="0"><tbody><tr><td><span class="icon-phone"></span></td><td style="width: 85%;">99 88 99 88</td></tr><tr><td><span class="icon-envelope"></span></td><td><p>raadhus@rebild.dk</p></td></tr></tbody></table><p>&nbsp;</p><table style="width: 100%;" border="0" cellspacing="0" cellpadding="0"><tbody><tr><td><div>Telefonisk henvendelse:</div><div>Man-ons kl. 8.00-15.00</div><div>Tors kl. 8.00-17.00</div><div>Fre kl. 8.00-14.00</div></td><td><div>Personlig henvendelse:</div><div>Man-ons kl. 9.00-14.30</div><div>Tors kl. 9.00-17.00</div><div>Fre kl. 9.00-13.30</div></td></tr></tbody></table>';

  $export['rebild_contact_front'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt landing pages';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_contact_landing';
  $fe_block_boxes->body = '<p><strong>Rebild Kommune</strong><br />Rådhuset - Hobrovej 88 - 9530 Støvring&nbsp;</p><table border="0" cellspacing="0" cellpadding="0"><tbody><tr><td><span class="icon-phone"></span></td><td style="width: 85%;">99 88 99 88</td></tr><tr><td><span class="icon-envelope"></span></td><td><p>raadhus@rebild.dk</p></td></tr></tbody></table><p>&nbsp;</p><table style="width: 100%;" border="0" cellspacing="0" cellpadding="0"><tbody><tr><td><div>Telefonisk henvendelse:</div><div>Man-ons kl. 8.00-15.00</div><div>Tors kl. 8.00-17.00</div><div>Fre kl. 8.00-14.00</div></td><td><div>Personlig henvendelse:</div><div>Man-ons kl. 9.00-14.30</div><div>Tors kl. 9.00-17.00</div><div>Fre kl. 9.00-13.30</div></td></tr></tbody></table>';

  $export['rebild_contact_landing'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt ikoner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_footer_contact';
  $fe_block_boxes->body = '<p class="large-text"><span class="icon-envelope"></span> raadhus@rebild.dk</p><p class="large-text"><span class="icon-phone"></span> 87 65 43 21</p>';

  $export['rebild_footer_contact'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt tabel';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_footer_contact_2';
  $fe_block_boxes->body = '<table style="width: 90%;" border="0" cellspacing="0" cellpadding="0"><tbody><tr><td colspan="2"><p>Telefonisk henvendelse:</p></td><td><div></div></td></tr><tr><td style="width: 40%;"><div>Mandag-onsdag:</div><div>Torsdag:</div><div>Fredag:</div></td><td><div>kl. 8.00-15.00</div><div>kl. 8.00-17.00</div><div>kl. 8.00-14.00</div></td></tr></tbody></table><table border="0" cellspacing="0" cellpadding="0" style="width: 90%;"><tbody><tr><td colspan="2"><p>Personlig henvendelse:</p></td><td><div></div></td></tr><tr><td style="width: 40%;"><div>Mandag-onsdag:</div><div>Torsdag:</div><div>Fredag:</div></td><td><div>kl. 9.00-14.30</div><div>kl. 9.00-17.00</div><div>kl. 9.00-13.30</div></td></tr></tbody></table>';

  $export['rebild_footer_contact_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Kontakt logo';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_footer_logo';
  $fe_block_boxes->body = '<p class="bottom-logo"><span class="icon-bottom_logo">&nbsp;</span></p>';

  $export['rebild_footer_logo'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Forside søgeblok';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_search_front';
  $fe_block_boxes->body = '<form><input type="search" value="Søg på Rebild.dk her - og find lige hvad du leder efter!" /><input type="submit" value="Søg" /></form><p class="small-text"><strong>Mest søgte emner:</strong> <a href="#">Integer accumsan</a><a href="#">sodales euismod</a><a href="#">cum sociis</a><a href="#">penatibus et</a><a href="#">magnis dis</a><a href="#">parturient</a></p>';

  $export['rebild_search_front'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Genveje';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'rebild_shortcuts_front';
  $fe_block_boxes->body = '<ul><li><span style="line-height: 1.538em;" data-mce-mark="1">Book en lokalpolitiker&nbsp;</span></li><li><span style="line-height: 1.538em;" data-mce-mark="1">Ledige stillinger</span></li><li><span style="line-height: 1.538em;" data-mce-mark="1">Din kommune informerer</span></li><li><span style="line-height: 1.538em;" data-mce-mark="1">Sådan møder vi borgerne</span></li><li><span style="line-height: 1.538em;">Borgerservicecentret</span></li></ul>';

  $export['rebild_shortcuts_front'] = $fe_block_boxes;

  return $export;
}
