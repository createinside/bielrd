<?php
  switch($variables['language']) {
    case 'en':
      print '<a href="/erhverv"><img src="/'.drupal_get_path('module','br_language_switcher').'/templates/danish.svg"></a>';
      break;

    case 'da':
      print '<a href="/business"><img src="/'.drupal_get_path('module','br_language_switcher').'/templates/english.svg"></a>';
      break;
  }

?>
