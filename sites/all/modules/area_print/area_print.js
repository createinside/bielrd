(function($) {
    Drupal.behaviors.area_print = {
        attach: function(context, settings) {
            $('.area-print-trigger').click(function(event) {
              event.preventDefault();
              var buttonId = event.target.id;
              targetId = settings.area_print[buttonId].target_id;
              css = settings.area_print[buttonId].custom_css;
              hideButton = settings.area_print[buttonId].hide_button;
                if (navigator.appName == 'Microsoft Internet Explorer') {
                    areaPrintIE(css, targetId, hideButton, buttonId);
                }
                else {
                    areaPrint(css, targetId, hideButton, buttonId);
                }
                event.stopPropagation();
            });

            function areaPrint(css, targetId, hideButton, buttonId) {
                var divToPrint = document.getElementById(targetId);
                var newWin = window.open('' + self.location);
                newWin.onload = function() {
                    // Append custom CSS-file to DOM before printing
                    if (css != 'none') {
                        addCss(css, newWin);
                    }

                    // Hide everything except the printed area
                    $('#' + targetId, newWin.document).show().parentsUntil('').andSelf().siblings().hide();
                    if (hideButton == true) {
                        $('#' + buttonId, newWin.document).hide();
                    }
                    // Print and close
                    newWin.print();
                    newWin.close();
                }


            }

            function areaPrintIE(css, targetId, hideButton, buttonId) {
                var divToPrint = document.getElementById(targetId);
                var newWin = window.open('' + self.location);
                newWin.document.onload = new
                function() {
                    // IE does not actually wait for the page to load, so we need to add pause to the user experience.
                    // Append custom CSS-file to DOM before printing
                    newWin.alert('Press OK to print.');

                    if (css != 'none') {
                        addCss(css, newWin);
                    }

                    // Hide everything except the printed area
                    $('#' + targetId, newWin.document).show().parentsUntil('').andSelf().siblings().hide();
                    if (hideButton == true) {
                        $('#' + buttonId, newWin.document).hide();
                    }
                    // Print and close
                    newWin.print();
                    newWin.close();
                }
            }

            function addCss(css, newWin) {
                var fileref = newWin.document.createElement("link");
                fileref.setAttribute("rel", "stylesheet");
                fileref.setAttribute("type", "text/css");
                fileref.setAttribute("href", 'http://' + window.location.hostname + '/' + css);
                if (navigator.appName == 'Microsoft Internet Explorer') {
                    newWin.document.getElementsByTagName("head")[0].appendChild(fileref);
                }
                else {
                    $('head', newWin.document).append(fileref);
                }
            }
        }
    };
})(jQuery);
