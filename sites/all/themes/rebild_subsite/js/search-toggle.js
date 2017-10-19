$ = jQuery;

$(document).ready(function() {

  $('.search-toggle').click(function(e) {

    e.preventDefault();
    $('.block-search').addClass('active');
    $('input[name="search_block_form"]').focus();
  });

  $('input[name="search_block_form"]').bind('blur', function(e) {

    if($(e.relatedTarget).hasClass('search-toggle')) return;

    $('.block-search').removeClass('active');
  });

});
