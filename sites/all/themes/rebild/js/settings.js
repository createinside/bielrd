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
	// Selfservice accordion - Alphabetical list level 1 + Embedded list level 1
	$(".view-selfservice-items.view-display-id-alfabetisk, .view-selfservice-items.view-display-id-embedded").accordion({
    header: "h3",
    autoHeight: false,
    collapsible: true,
    active: false
	});
	// Selfservice jump menu {
	$(".ctools-jump-menu-button").hide();
	$(".ctools-jump-menu-select").change(function() {
		if($(this).val()!="") {
  		$(this).parent().siblings('.ctools-jump-menu-button').click();
		}
	});
	
});

$(function() {
	$(".rebild_menu_block_container").height($(".rebild_menu_container").height());
});