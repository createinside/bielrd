$ = jQuery;

$(function() {

	/**
	 * Mobile Menu Toggle
	 */
	 
	// Open menu
	$("#mobile-menu-toggle").click(function() {
		// Add close button dynamically
		$("#region-mobile-menu .block-inner").append("<a class='icon-close'></a>");
		$("#region-mobile-menu, #mobile-overlay").addClass("active");
		attachClose();
		return false;
	});

});

// Close Menu
function attachClose() {
	$("#mobile-overlay, .icon-close").click(function() {	
		$(".icon-close").remove();
		$("#region-mobile-menu, #mobile-overlay").removeClass("active");
		return false;
	});
}