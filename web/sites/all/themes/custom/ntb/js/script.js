// init main object
// jQuery(document).ready - conflicted with some scripts
// Transition time = 2.4s = 20/10
// SlideShow delay = 6.5s = 20/10
function ws_blast(t,i,e){function o(i,e,o,n){t.support.transform&&t.support.transition?(("number"==typeof e.left||"number"==typeof e.top)&&(e.transform="translate3d("+("number"==typeof e.left?e.left:0)+"px,"+("number"==typeof e.top?e.top:0)+"px,0)"),delete e.left,delete e.top,e.transition=o?"all "+o+"ms ease-in-out":"",i.css(e),n&&i.on("transitionend webkitTransitionEnd oTransitionEnd MSTransitionEnd",function(){n(),i.off("transitionend webkitTransitionEnd oTransitionEnd MSTransitionEnd")})):(delete e.transfrom,delete e.transition,o?i.animate(e,{queue:!1,duration:t.duration,complete:n?n:0}):i.stop(1).css(e))}function n(i){var e=Math.max((t.width||f.width())/(t.height||f.height())||3,3);l=l||Math.round(1>e?3:3*e),c=c||Math.round(1>e?3/e:3);for(var o=0;l*c>o;o++){{Math.floor(o/l)}s([m[o]=document.createElement("div"),g[o]=document.createElement("div")]).css({position:"absolute",overflow:"hidden"}).appendTo(p).append(s("<img>").css({position:"absolute"}))}g=s(g),m=s(m),a(g,i),a(m,i,!0);var n={position:"absolute",top:0,left:0,width:"100%",height:"100%",overflow:"hidden"};h.css(n).append(s("<img>").css(n))}function a(i,e,n,a,r,h){var p=f.width(),g=f.height(),m={left:s(window).scrollLeft(),top:s(window).scrollTop(),width:s(window).width(),height:s(window).height()};s(i).each(function(i){var w=i%l,u=Math.floor(i/l);if(n){var v=d*p*(2*Math.random()-1)+p/2,b=d*g*(2*Math.random()-1)+g/2,T=f.offset();T.left+=v,T.top+=b,T.left<m.left&&(v-=T.left+m.left),T.top<m.top&&(b-=T.top+m.top);var y=m.left+m.width-T.left-p/l;0>y&&(v+=y);var E=m.top+m.height-T.top-g/c;0>E&&(b+=E)}else var v=p*w/l,b=g*u/c;s(this).find("img").css({left:-(p*w/l)+e.marginLeft,top:-(g*u/c)+e.marginTop,width:e.width,height:e.height});var M={left:v,top:b,width:p/l,height:g/c};r&&s.extend(M,r),a?o(s(this),M,t.duration,0===i&&h?h:0):o(s(this),M)})}var s=jQuery,r=s(this),d=t.distance||1;e=e;var f=s("<div>").addClass("ws_effect ws_blast"),h=s("<div>").addClass("ws_zoom").appendTo(f),p=s("<div>").addClass("ws_parts").appendTo(f);e.css({overflow:"visible"}).append(f),f.css({position:"absolute",left:0,top:0,width:"100%",height:"100%","z-index":8});var l=t.cols,c=t.rows,g=[],m=[];this.go=function(d,p){var l=s(i[p]),c={width:l.width(),height:l.height(),marginTop:parseFloat(l.css("marginTop")),marginLeft:parseFloat(l.css("marginLeft"))};g.length||n(c),g.find("img").attr("src",i.get(p).src),o(g,{opacity:1,zIndex:3}),m.find("img").attr("src",i.get(d).src),o(m,{opacity:0,zIndex:2}),h.find("img").attr("src",i.get(p).src),o(h.find("img"),{transform:"scale(1)"}),f.show();var w=e.find(".ws_list");t.fadeOut&&w.fadeOut(t.duration),a(m,c,!1,!0,{opacity:1}),a(g,c,!0,!0,{opacity:0},function(){r.trigger("effectEnd"),f.hide()}),o(h.find("img"),{transform:"scale(2)"},t.duration,0);var u=m;m=g,g=u}}
jQuery('#wowslider-container1').wowSlider({
	effect:"carousel_basic", 
	prev:"", 
	next:"", 
	duration: 20*100, 
	delay:20*100, 
	width:815,
	height:360,
	autoPlay:true,
	autoPlayVideo:false,
	playPause:false,
	stopOnHover:false,
	loop:false,
	bullets:0,
	caption: true, 
	captionEffect:"move",
	controls:true,
	responsive:1,
	fullScreen:true,
	gestures: 2,
	onBeforeStep:0,
	images:0
});