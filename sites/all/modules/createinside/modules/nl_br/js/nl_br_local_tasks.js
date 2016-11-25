$ = jQuery;

$(function() {
	
	// Make preview tab open in a new window
	$(".tabs.primary a[href$='nl_br_preview']").attr("target", "_blank");
    // Make mailpeople tab open in a new window
	$(".tabs.primary a[href$='mailpeople']").attr("target", "_blank");
});