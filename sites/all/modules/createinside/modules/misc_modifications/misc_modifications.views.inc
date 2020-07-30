<?php

function misc_modifications_views_pre_view(&$view, &$display_id, &$args) {
  if(
    $view->name == 'agenda_overview'
  &&
    (
      $display_id == 'default'
    ||
      $display_id == 'page'
    ||
      $display_id == 'embedded_page'
    )
  ) {
    $header = '';
    if (isset($view->args[0])) {
      $args = explode(" ", $view->args[0]);
      $main_tid = $args[0];
      $main_term = taxonomy_term_load($main_tid);
      $header = '<h2>Mødedatoer, dagsordener og referater fra ' . $main_term->name . '</h2>';
    }
    $options = array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'empty' => FALSE,
      'format' => 'filtered_html',
      'tokenize' => 0,
      'content' => $header,
    );
    $view->display_handler->set_option('header', array('text' => $options));
  }
}
