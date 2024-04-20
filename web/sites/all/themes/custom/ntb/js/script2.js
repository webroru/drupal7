// init main object
// jQuery(document).ready - conflicted with some scripts
// Transition time = 2.4s = 20/10
// SlideShow delay = 6.5s = 23/10
jQuery('#wowslider-container1').wowSlider({
	effect:"blast", 
	prev:"", 
	next:"", 
	duration: 23*100, 
	delay:20*100, 
	width:815,
	height:326,
	autoPlay:true,
	autoPlayVideo:false,
	playPause:false,
	stopOnHover:false,
	loop:false,
	bullets:1,
	caption: true, 
	captionEffect:"fade",
	controls:true,
	responsive:1,
	fullScreen:false,
	gestures: 2,
	onBeforeStep:0,
	images:0
});
