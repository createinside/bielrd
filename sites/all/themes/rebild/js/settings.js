$ = jQuery;

$(function() {
	
	// Custom select boxes init
	$("select").customSelect();
	
	// Swipebox init
	$(".swipebox").swipebox();
	
	// Selfservice accordion - Topic list level 1
	$(".view-selfservice-items.view-display-id-emner").accordion({
    header: ".view-grouping-header",
    autoHeight: false,
    collapsible: true,
    active: false
	});
	// Selfservice accordion - Topic list level 2
	$(".view-selfservice-items.view-display-id-emner .view-grouping-content").accordion({
    header: "h3",
    autoHeight: false,
    collapsible: true,
    active: false
	});
	// Selfservice accordion - Alphabetical list level 1
	$(".view-selfservice-items.view-display-id-alfabetisk").accordion({
    header: "h3",
    autoHeight: false,
    collapsible: true,
    active: false
	});

});

$(function() {
	$(".rebild_menu_block_container").height($(".rebild_menu_container").height());
});