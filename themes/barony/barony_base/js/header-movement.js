(function ($) {
  Drupal.behaviors.barony_base_header_movement = {
    attach: function (context, settings) {
      $(document).ready(function(){
        if($(window).width() <= 768)
        {
          $('#navbar').data('scroll','false');
          $('#navbar').css('height', '60px');
          $('#navbar').css('padding-top', '5px');
          $('#navbar a.logo img').css('height', '35px');
          $('#navbar .navbar-location').hide();
          $('#navbar a.name').css('font-size', '200%');
          $('#navbar-collapse').addClass('barony-small');
          if($(window).width() <= 500)
          {
            if($(window).width() <= 400)
            {
              $('#navbar a.name').css('font-size', '100%');
              $('.navbar-header').parent().css('padding-left', '0');
              $('.navbar-header').parent().css('padding-right', '0');
            }
            $('#navbar a.name').css('font-size', '110%');
          }
        }
        else 
        {
          $('#navbar').data('scroll','true')
          $('#navbar').data('size','big');
        }

      });

      $(window).scroll(function(){
        if($(document).scrollTop() > 0)
        {
          if($('#navbar').data('size') == 'big' && $('#navbar').data('scroll') == 'true')
          {
            $('#navbar').data('size','small');
            $('#navbar').stop().animate({
              height:'60px',
              'padding-top': '5px'
            },600);
            $('#navbar a.logo img').stop().animate({
              height:'35px'
            },600);
            $('#navbar .navbar-location').stop().hide();
          }
      }
      else
        {
          if($('#navbar').data('size') == 'small' && $('#navbar').data('scroll') == 'true')
            {
              $('#navbar').data('size','big');
              $('#navbar').stop().animate({
                height:'110px',
                'padding-top': '30px'
              },600);
              $('#navbar a.logo img').stop().animate({
                height:'85px'
              },600);
              $('#navbar .navbar-location').stop().show();

            }  
        }
      });

    }
  }
})(jQuery);
