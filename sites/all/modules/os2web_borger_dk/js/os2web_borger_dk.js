(function($) {
  Drupal.behaviors.os2web_borger_dk = {
    attach: function(context) {
    	$("div.mArticle").hide();
    	
    	 
    	
      $(".microArticle h2.mArticle").click(function() { 
      	if ($(this).parent().hasClass("aktiv")) {
	      	$(this).parent().removeClass("aktiv");	   
      	}
      	else {
	      	$(this).parent().addClass("aktiv");
      	}		
        var myid = $(this).attr('id');
        var style = $('div.' + myid).css('display');
        var path = $(this).css("background-image");
        if (style == 'none') {
        
       
          $("div." + myid).slideDown("500");
          path = path.replace('foldOut', 'foldIn');
          $(this).css({
            'background-image' : path,
          });
        }  
        else {           
          $("div." + myid).slideUp("500");
          path = path.replace('foldIn', 'foldOut');
          $(this).css({
            'background-image' : path,
          });
          
        }
      });
    }
  }
})(jQuery);
