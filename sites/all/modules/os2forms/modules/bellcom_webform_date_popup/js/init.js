/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

jQuery(document).ready(function() {
    jQuery('.datepicker-wrap .input-group.date').datepicker({
        language: "da",
        autoclose: true,
        format: 'dd/mm/yyyy',
        todayHighlight: true,
    });
});