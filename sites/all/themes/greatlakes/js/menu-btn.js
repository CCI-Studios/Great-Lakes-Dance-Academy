(function($) {
	$(function(){
		$("#block-block-18 .content a").click(toggleMenu);

		$("#block-block-19 table").attr('border','0');
		$("#block-views-modules-front-block .views-row-1").click(function() 
		{
    		window.location = "/dance-programs";
		});
		$("#block-views-modules-front-block .views-row-2").click(function() 
		{
    		window.location = "/performing-arts-programs";
		});
		$("#block-views-modules-front-block .views-row-3").click(function() 
		{
    		window.location = "/pricing-and-info";
		});
		$("#block-views-modules-front-block .views-row-4").click(function() 
		{
    		window.location = "/class-schedule";
		});

        $('#block-views-modules-front-block .views-row').css('cursor','pointer');
    

		if($("#block-block-12 .content").text()=="  ")
        {
            $("#block-block-12 .content").css('display','none');
        };

         $('#block-block-19 table.openings').ngResponsiveTables({
            smallPaddingCharNo: 13,
            mediumPaddingCharNo: 18,
            largePaddingCharNo: 30
          });

	});



	function toggleMenu()
	{
		$("#block-system-main-menu").slideToggle("slow");
	}




    var fbWidth;

    function attachFluidLikeBox(){
        // the FBML markup: WIDTH is a placeholder where we'll insert our calculated width
        var fbml = '<div class="fb-like-box" data-colorscheme="light" width="WIDTH" data-href="https://www.facebook.com/pages/Great-Lakes-Dance-Academy/114146898606261?ref=ts" data-show-border="false" data-show-faces="false" data-stream="true">&nbsp;</div>';//$('#likeBoxTemplate').text().toString();

        // the containing element in which the Likebox resides
        var container = $('#likebox');  

        // we should only redraw if the width of the container has changed
        if(fbWidth != container.width()){
            container.empty(); // we remove any previously generated markup

            fbWidth = container.width(); // store the width for later comparison

            fbml = fbml.split('WIDTH').join(fbWidth.toString());    // insert correct width in pixels

            container.html(fbml);   // insert the FBML inside the container

            try{
                FB.XFBML.parse();   // parses all FBML in the DOM.
            }catch(err){
                // should Facebook's API crap out - wouldn't be the first time
            }
        }
    }

    var resizeTimeout;

    // Resize event handler
    function onResize(){
        if(resizeTimeout){
            clearTimeout(resizeTimeout);
        }

        resizeTimeout = setTimeout(attachFluidLikeBox, 200);    // performance: we don't want to redraw/recalculate as the user is dragging the window
    }

    // Resize listener
    $(window).resize(onResize);

    // first time we trigger the event manually
    onResize();
	


}(jQuery));