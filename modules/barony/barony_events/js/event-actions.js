(function ($) {
  Drupal.behaviors.barony_core_event_actions = {
    attach: function (context, settings) {
      var allActivities = $('.paragraphs-item-event-activities .field-name-field-event-activities-desc').hide();
      var allArrows = $('.paragraphs-item-event-activities .field-name-field-event-activities-type .field-item').addClass('left-arrow-down');

      $('.paragraphs-item-event-activities .field-name-field-event-activities-type').click(function() {
        if (!$(this).parent().find('.field-name-field-event-activities-desc').is(':visible')) {
          allActivities.slideUp('fast');
          allArrows.removeClass('left-arrow-up').addClass('left-arrow-down')
          $(this).parent().find('.field-name-field-event-activities-desc').slideDown('fast');
          $(this).parent().find('.field-name-field-event-activities-type .field-item').removeClass('left-arrow-down').addClass('left-arrow-up')
          return false;
        } else {
          $(this).find('.field-item').removeClass('left-arrow-up').addClass('left-arrow-down');
          $(this).parent().find('.field-name-field-event-activities-desc').slideUp('fast');
        }
      });
    }
  }
})(jQuery);