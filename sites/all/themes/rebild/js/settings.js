$ = jQuery;

$(function() {

	$('#section-header').waypoint('sticky', {
		offset: -20
	});
	
	// Custom select boxes init
	$("select").customSelect();
	
	$("#edit-aar-value-year").change(function() {
		$("#edit-submit-agenda-overview").click();
	});
	
	Drupal.behaviors.rebild = {
    attach: function(context, settings) {
			$("select").not(".customised-select").customSelect();
			$("#edit-aar-value-year").change(function() {
				$("#edit-submit-agenda-overview").click();
			});
		}
	}
	
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
	// Main Accordion
	$(".field-name-field-main-accordion").accordion({
    header: ".field-name-field-accordion-title",
    autoHeight: false,
    collapsible: true,
    active: false
	});	
	
	// Hash URL Handling
	var hash = window.location.hash;
	if(hash!="") {
		hash = hash.replace("#","");
		
		// Selfservice accordion
		if(hash.indexOf("kategori") != -1) {
			$header_1 = $("."+hash).closest(".ui-accordion-header");
			$header_1.click();	
			$(document).scrollTop($header_1.offset().top-100);
		}
		else if(hash.indexOf("loesning") != -1) {
			$header_2 = $("."+hash).closest("h3");
			$header_2.click();
			$header_1 = $("."+hash).closest("h3").parent().siblings();
			$header_1.click();
			$(document).scrollTop($header_2.offset().top-100);
		}
		// Main accordion
		else if(hash.indexOf("punkt") != -1) {
			if($(".node-type-os2web-borger-dk-article").length==1) {
			
				hash = hash.replace("punkt", "mArticle")
			
				$header = $("#"+hash);
				if($header.length>0) {
					$header.click();
					$(document).scrollTop($header.offset().top-100);
				}			
			}
			else if($(".node-type-agenda").length==1) {
			
				hash = hash.replace("punkt", "views-row-");
				
				$header = $("."+hash+" .ui-accordion-header");
				if($header.length>0) {
					$header.click();
					$(document).scrollTop($header.offset().top-100);
				}			
			}
			else {
				$header = $("."+hash+" .ui-accordion-header");
				if($header.length>0) {
					$header.click();
					$(document).scrollTop($header.offset().top-100);
				}
			}
		}
	}	

	// Accordion - Expand/Collapse all
	$('.toggle-expand-all').click(function(e) {
		e.preventDefault();
		
		$(this).toggleClass('open');
		
		$(".view-agenda-accordion .views-row").accordion("option", {animated: false });
				
		// Expand All
		if($(this).hasClass('open')) {
			$(this).html('<span class="icon-double-angle-up"></span> Luk alle punkter');
			$('.ui-accordion-header').not('.ui-state-active').click();
			/*
			$('.ui-accordion-header').not('.ui-state-active').addClass('ui-state-active').addClass('ui-state-focus').attr("aria-expanded", true);
			$('.ui-accordion-content').slideDown(0);
			*/
		}
		// Collapse All
		else {
			$(this).html('<span class="icon-double-angle-down"></span> Udvid alle punkter');
			$('.ui-accordion-header.ui-state-active').click();
			//$(this).html('<span class="icon-double-angle-down"></span> Udvid alle punkter');
			/*
			$('.ui-accordion-header.ui-state-active').removeClass('ui-state-active').removeClass('ui-state-focus').attr("aria-expanded", false);
			$('.ui-accordion-content').slideUp(0);	
			*/
		}
		$(".view-agenda-accordion .views-row").accordion("option", {animated: true });
		window.scrollTo(0,0);
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
    autoDimensions: false,
    width: 300,
    height: 500
	});
});