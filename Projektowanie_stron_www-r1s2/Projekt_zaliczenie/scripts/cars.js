// to run only if document is fully loaded
$(document).ready(function(){
  $('.next').on('click', function(){ // if button clicked - run function
      var currentImage = $('.active');
      var nextImage = currentImage.next();

      if(nextImage.length){
          currentImage.removeClass('active').css('z-index, -100');
          nextImage.addClass('active').css('z-index', 99);
      }
  });

  $('.prev').on('click', function(){ 
      var currentImage = $('.active');
      var previousImage = currentImage.prev(); // prev is a jQurery function we are running onclick

      if(previousImage.length){
          currentImage.removeClass('active').css('z-index, -100');
          previousImage.addClass('active').css('z-index', 99);
      }
  });
});