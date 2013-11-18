$ = jQuery;

$(function() {
	
	// Custom select boxes init
	$("select").customSelect();
	
	// Search block dropdown
	$(".dropd-btn").click(function(e) {
		e.preventDefault();
		$("#search-dropd-wrapper").toggle();
		$("#search-dropd-wrapper input[type=text]").focus();
	});
	
	/**
	 * ACCORDIONS
	 */
	
	// Borger DK accordions
	$(".field-name-body").accordion({
    header: "h2.mArticle",
    autoHeight: false,
    collapsible: true,
    active: false
	});	
	// Agenda accordion
	$(".view-agenda-accordion .views-row").accordion({
    header: ".views-field-field-agenda-item-caption",
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
	// Selfservice accordion - Alphabetical list level 1 + Embedded list level 1
	$(".field-name-field-main-accordion").accordion({
    header: ".field-name-field-accordion-title",
    autoHeight: false,
    collapsible: true,
    active: false
	});	
	

});



//to the top links
$(document).ready(function() {			
	// Animate the scroll to top
	$('.go-top').click(function(event) {
		event.preventDefault();
		
		$('html, body').animate({scrollTop: 0}, 300);
	})
});

// fancybox - kontakt
$(document).ready(function() {
	$("#kontaktlink").fancybox({
		maxWidth	: 300,
		maxHeight	: 600,
		fitToView	: false,
		width		: '70%',
		height		: '70%',
		autoSize	: true,
		closeClick	: false,
		openEffect	: 'none',
		closeEffect	: 'none'
	});
});
	

