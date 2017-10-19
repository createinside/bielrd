$ = jQuery;

$(document).ready(function() {


  $(".mobile-menu-wrapper .menu-block-wrapper").mmenu();
  var API = $(".menu-name-main-menu").data( "mmenu" );

  $(".menu-toggle").click(function(e) {
    e.preventDefault();
    API.open();
  });

});
