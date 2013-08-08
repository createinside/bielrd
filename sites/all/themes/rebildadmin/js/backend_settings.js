$ = jQuery;

/* Max tegn counter på metatag description feltet. Husk at sætte max characters til det samme som feltet foreskriver backend. */
$(document).ready(function(){   

  $('#edit-metatags-description-value').maxlength({  
    events: [], // Array of events to be triggerd   
    maxCharacters: 150, // Karakter limit  
    status: true, // True to show status indicator bewlow the element   
    statusClass: "statustegn", // The class on the status div 
    statusText: "Tegn tilbage", // The status text 
    notificationClass: "notification",  // Will be added when maxlength is reached 
    showAlert: false, // True to show a regular alert message   
    alertText: "Du har tastet for mange tegn.", // Text in alert message  
    slider: false // True Use counter slider   

  });

})