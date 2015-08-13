$ = jQuery;

$(function() {
	
	/**
	 * Change Event
	 *
	 * Checkbox inside draggable elements
	 */
	$(".vbo-select.form-checkbox, .form-radio").live("change", function(e) {
		if($(this).is(":checked")) {
			$(this).closest(".ui-draggable").addClass("selected");
		}
		else {
			$(this).closest(".ui-draggable").removeClass("selected");
		}
	});

	/**
	 * Change Event
	 *
	 * Radios button inside draggable elements
	 */	
	$(".views-field-media-browser-plus-preview").live("click", function() {
		$(this).siblings(".views-field-views-bulk-operations").find(".form-radio", this).attr('checked', true);
		$(".ui-draggable").removeClass('selected');
		$(this).closest(".ui-draggable").addClass("selected");
	});
		
	/**
	 * Click Event
	 *
	 * Makes the links inside draggable elements clickable (Instead of selecting the whole row)
	 */
	 
	// File action links
	$('.doc-actions a, .doc-user a, .doc-use a').click(function(e) { 
		e.preventDefault();
		var href = $(this).attr('href');
    window.location.href = href; 
		return false;
	});
	$('.media-thumbnail a').click(function(e) {
		e.preventDefault();
		var href = $(this).attr('href');
		window.open(
		  href,
		  '_blank'
		);
	});
	
	Drupal.behaviors.media_browser_ux = {
    attach: function (context) {
			$('.doc-actions a, .doc-user a, .doc-use a').click(function(e) { 
				e.preventDefault();
				var href = $(this).attr('href');
		    window.location.href = href; 
				return false;
			});	
			$('.media-thumbnail a').click(function(e) {
				e.preventDefault();
				var href = $(this).attr('href');
				window.open(
				  href,
				  '_blank'
				);
			});
			// Focus searchfield in views exposed filters
			if($("#edit-filename").length!=0) {
				if($("#edit-filename").val()) {
					$("#edit-filename").focus();
					var tmpStr = $("#edit-filename").val();
					$("#edit-filename").val('');
					$("#edit-filename").val(tmpStr);
				}
			}
	  }
	}	

	/**
	 * Open the Media file browser inside LinkIt
	 */
	if(typeof Drupal.linkit != "undefined") {
		Drupal.linkit.dialog.openFileBrowser = function () {
			
			// Settings for the modal window
			settings = new Object();
			settings.enabledPlugins = ["media_browser_plus_customized--media_browser_thumbnails","upload"];
			settings.file_directory = "wysiwyg_media_files";
			settings.id = "media_linkit_wysiwyg";
			
			// Opens the modal window
			Drupal.media.popups.mediaBrowser(mediaLinkit, settings);
		};
	}
	
});

/**
 * Callback Media => Linkit
 *
 * Populates the linkit form with information from media file
 */
function mediaLinkit(file) {
		
	link = {
		path: file[0].url,
		attributes: {}
	};
	link.attributes['class'] = 'file-link-'+file[0].fid;
		
	Drupal.linkit.dialog.populateFields(link);
}