$(function() {

    $('#div').click(function() {
        $('#panel').slideToggle(1000);
    })



    // $('#div').click(function() {
    //     $('#panel').slideDown(1000);
    // })
    // $('#div').dblclick(function() {
    //     $('#panel').slideUp(1000);
    // })

    $('#f1').click(function() {
        $('#panel').fadeIn(2000);
    })
    $('#f2').click(function() {
        $('#panel').fadeOut(2000);
    })
    $('#f3').click(function() {
        $('#panel').fadeToggle(2000);
    })
    $('#f4').click(function() {
        $('#panel').fadeTo(2000, 0.3);
    })












     $('#b1').click(function(){
        if($(this).html() == 'Show')
        {
            $('div').show(3000);
            $(this).html('Hide');
        }
        else
        {
            $('div').hide(3000);
            $(this).html('Show');
        }  
     })  
     $('#b2').click(function(){
         $('div').show(2000);
     })  
     $('#b3').click(function(){
         $('div').toggle(1000);
     })  
})