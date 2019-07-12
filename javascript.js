var slideIndex = 0;
showSlides();
function showSlides(){
    var slides = document.getElementsByClassName("myimages");
    for(var i = 0; i <slides.length; i++) {
        slides[i].style.display="none";
    }
    slideIndex++;
    
    if(slideIndex >= slides.length) {
        slideIndex = 0;
    }
    slides[slideIndex].style.display = "block";
    setTimeout(showSlides, 3000);
}

var feed = new Instafeed({
  get: 'tagged',
  tagName: 'awesome',
  clientId: 'YOUR_CLIENT_ID'
});
feed.run();