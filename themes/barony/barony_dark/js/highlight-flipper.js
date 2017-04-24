(function ($) {
  Drupal.behaviors.barony_dark_highlight_flipper = {
    attach: function (context, settings) {
      $(document).ready(function(){
        if($(window).width() <= 600)
        {
          $('.front #mini-panel-barony_hompage_highlights .row .panel-panel').css('display', 'block');
        }
      });


      $('.barony-homepage-highlight').hover(function(){
        if (!$(this).hasClass('animated')) {
          $(this).find('.barony-homepage-highlight-menu').dequeue().stop().css("display", "flex").hide().fadeIn(400, 'swing');
        }
      }, function() {
        $(this).addClass('animated').find('.barony-homepage-highlight-menu').dequeue().stop().fadeOut(400, 'swing');
        $(this).removeClass('animated').dequeue();
      });
    }
  }
})(jQuery);
