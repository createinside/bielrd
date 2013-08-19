(function($) {
  Drupal.behaviors.os2web_borger_dk = {
    attach: function(context) {
    	     $("div.mArticle").hide();
    	     $(".microArticle").prepend("<span class='accordion_ikon'></span>");
      $(".microArticle h2.mArticle").click(function() { 

        var myid = $(this).attr('id');
        var style = $('div.' + myid).css('display');
        var path = $(this).css("background-image");
        if (style == 'none') {
        $(this).parent().addClass("aktiv");
       
          $("div." + myid).show("500");
          path = path.replace('foldOut', 'foldIn');
          $(this).css({
            'background-image' : path,
          });
        }
        else {
         $(".mArticle").parent().removeClass("aktiv");
        
          $("div." + myid).hide("500");
          path = path.replace('foldIn', 'foldOut');
          $(this).css({
            'background-image' : path,
          });
        }
      });
    }
  }
})(jQuery);
