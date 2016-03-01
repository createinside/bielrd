$ = jQuery;

/**
 * Social media bar
 */
$(function() {

	$(document).ready(function() {

		var $socialMedia = $('ul.social-media');

		if($socialMedia.length) {
			var $services = $socialMedia.find('li.social-media-service');
			var servicesCount = $services.length;

			$services.css({
				'width': 100 / servicesCount + '%'
			});

			var colorLeft = $services.first().find('.social-media-profile').css('background-color');
			var colorRight = $services.last().find('.social-media-profile').css('background-color');

			$socialMedia.prepend('<li style="background: ' + colorLeft + '" class="social-media-fill-color social-media-fill-color-left"></li>');
			$socialMedia.append('<li style="background: ' + colorRight + '" class="social-media-fill-color social-media-fill-color-right"></li>');

			var $profilesTriggers = $services.find('.social-media-profiles-trigger');
			var $profiles = $services.find('.social-media-profiles');
			$profiles.append('<div class="triangle"></div>');

			var triangleOffsetLeft;
			var triggerWidth;
			var triggerOffsetLeft;
			var $thisProfiles;
			var $thisProfilesTriangle;
			var $thisProfilesTrigger;
			var moveTriangle = function() {
				$profiles.each(function() {
					if($(this).hasClass('active')) {
						$thisProfiles = $(this);
						$thisProfilesTriangle = $thisProfiles.find('.triangle');
						$thisProfilesTrigger = $thisProfiles.prev();

						triggerWidth = $thisProfilesTrigger.width();
						triggerOffsetLeft = $thisProfilesTrigger.position().left;
						triangleOffsetLeft = triggerOffsetLeft + (triggerWidth / 2);
						$thisProfilesTriangle.css({
							'left': triangleOffsetLeft + 'px'
						})
					}
				});
			}

			// when clicking on social media trigger
			$profilesTriggers.click(function(event) {
				// stop the click event from iterating through the DOM
				event.stopPropagation();
				if($(this).hasClass('active')) {
					$(this).removeClass('active');
					$(this).next().removeClass('active');
				} else {
					$profilesTriggers.removeClass('active');
					$profilesTriggers.next().removeClass('active');
					$(this).addClass('active');
					$(this).next().addClass('active');
					moveTriangle();
				}
			});

			$(document).click(function() {
        $profilesTriggers.removeClass('active');
				$profilesTriggers.next().removeClass('active');
      });

			$(window).resize(function() {
				moveTriangle();
			}).resize();
		}

	});

});

$(function() {

	// Sticky Header
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

	// Match Height
	$(".business-theme .region-preface-first .block, .business-theme .region-preface-second .block").matchHeight({
		byRow: false,
		property: 'line-height'
	});

	/**
	 * ACCORDIONS
	 */

	// Borger DK accordions
	// Old format
	if($("h2.mArticle").length>0) {
		$(".field-name-body").accordion({
	    header: "h2.mArticle",
	    autoHeight: false,
	    collapsible: true,
	    active: false
		});
	}
	// New format
	else {
		$(".field-name-body").accordion({
	    header: "h3",
	    autoHeight: false,
	    collapsible: true,
	    active: false
		});
	}
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
	$(".view-selfservice-items.view-display-id-alfabetisk, .view-selfservice-items.view-display-id-embedded, .view-selfservice-items.view-display-id-embedded_ext").accordion({
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
		}
		// Collapse All
		else {
			$(this).html('<span class="icon-double-angle-down"></span> Udvid alle punkter');
			$('.ui-accordion-header.ui-state-active').click();
		}
		$(".view-agenda-accordion .views-row").accordion("option", {animated: true });
		window.scrollTo(0,0);
	});

	// Agenda Item Print
	$(".print-agenda-item").click(function(e) {
		e.preventDefault();

		$accordion = $(this).closest(".ui-accordion");

		$accordion.find(".ui-accordion-content").printMe({
			"title": $accordion.find(".ui-accordion-header .field-content").html(),
			"path": "/sites/all/themes/rebild/css/print-agenda.css"
		});
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

	// Old contact block (page)
	$("#kontaktlink").fancybox({
    autoDimensions: false,
    width: 300,
    height: 500
	});

	// New contact block (page_extended)
	$("#contact-block").fancybox({
    autoDimensions: false,
    width: 300,
    height: 520
	});
});
