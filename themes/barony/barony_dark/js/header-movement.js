(function ($) {
  Drupal.behaviors.barony_dark_header_movement = {
    attach: function (context, settings) {
			$(function(){
			  $('#navbar').data('size','big');
			});

			$(window).scroll(function(){
			  if($(document).scrollTop() > 0)
			{
			    if($('#navbar').data('size') == 'big')
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
			    if($('#navbar').data('size') == 'small')
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
