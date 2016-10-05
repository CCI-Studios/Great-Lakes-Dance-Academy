(function($) {
	$(function(){

		if($("#block-webform-client-block-37").length > 0)
		{	
			$('#block-webform-client-block-37 p').css('display','none');
		}
		
	});

	$(window).on('load', function(){

			 if($(window).width() <740)
				{	

					var val = $('.node-type-class-schedule td:nth-of-type(1)').text();
					console.log(val);
				}

		});

	

}(jQuery));