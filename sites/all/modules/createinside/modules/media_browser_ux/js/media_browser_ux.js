$ = jQuery;

$(function() {
	
	/**
	 * Change Event
	 *
	 * Checkbox inside draggable elements
	 */
	$(".vbo-select.form-checkbox").live("change", function() {
		if($(this).is(":checked")) {
			$(this).closest(".ui-draggable").addClass("selected");
		}
		else {
			$(this).closest(".ui-draggable").removeClass("selected");
		}
	});
		
	/**
	 * Click Event
	 *
	 * Makes the links inside draggable elements clickable
	 */
	//$('.doc-actions a, .doc-user a, .media-thumbnail a, .doc-use a').unbind();
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
	  	//$('.doc-actions a, .doc-user a, .media-thumbnail a, .doc-use a').unbind();
			$('.doc-actions a, .doc-user a, .doc-use a').click(function(e) { 
				e.preventDefault();
				var href = $(this).attr('href');
		    window.location.href = href; 
				return false;
			});	
			$('.media-thumbnail a, ').click(function(e) {
				e.preventDefault();
				var href = $(this).attr('href');
				window.open(
				  href,
				  '_blank'
				);
			});
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
	
	/**
	 * File Edit - Dynamically populate Alt and Title fileds
	 */
		$(".copy-alt-text").click(function(e) {
			
			e.preventDefault();
			
			$altInput = $(this).closest('.group_image_descriptions').find('.field-name-field-file-image-alt-text input');
			$titleInput = $(this).closest('.group_image_descriptions').find('.field-name-field-file-image-title-text input');
												
			$titleInput.val(
				$altInput.val()
			);
		});
	
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