$ = jQuery;

$(function() {
	
	// Custom select boxes init
	$("select").customSelect();
	
	// Swipebox init
	$(".swipebox").swipebox();
	
	// Borger DK accordions
	$(".field-name-body").accordion({
    header: "h2.mArticle",
    autoHeight: false,
    collapsible: true,
    active: false
	});
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
	// Selfservice accordion - Hash Link
	var hash = window.location.hash;
	if(hash!="") {
		hash = hash.replace("#","");
		if(hash.indexOf("kategori") != -1) {
			$header_1 = $("."+hash).closest(".ui-accordion-header");
			$header_1.click();		
		}
		else {
			$header_2 = $("."+hash).closest("h3");
			$header_2.click();
			$header_1 = $("."+hash).closest("h3").parent().siblings();
			$header_1.click();
			console.log($header_1);
		}
	}
	
});

$(function() {
	$(".rebild_menu_block_container").height($(".rebild_menu_container").height());
});