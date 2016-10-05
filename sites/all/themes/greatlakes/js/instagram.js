(function($) {
	$(function(){
		$.ajax({
			"type":"GET",
			"url":"https://api.instagram.com/v1/users/207154948/media/recent?count=4&client_id=626774f489e24b2893d126f7317cc4e6",
			"success":success,
			"dataType":"jsonp"
		});
	});
	function success(json)
	{
		if (json && json.data)
		{
			for (var i=0; i<4; i++)
			{
				if (json.data[i] && json.data[i].images && json.data[i].images.low_resolution && json.data[i].images.low_resolution.url)
				{
				
					var url = json.data[i].images.low_resolution.url;
					var comments=json.data[i].caption.text;
					if(comments.length > 100)
						{
							comments=comments.substr(0,100)+'...';
						}
					$("#instagram1 .view-content").append("<div class=\"views-row\"><a href=\"http://instagram.com/greatlakesdance\" target=\"_blank\" ><img src='"+url+"' style=\"width:250px;height:250px;border:10px solid gray;margin:0 10px\"/></a><div class=\"caption\">"+comments+"</div></div>");
				}
	
			}

	var active = 0;
	var min = 0;
	var max = 0;
	var timer;


	function start()
	{
		timer = setInterval(timerNext, 2000);
	}

	function container()
	{
		return $("#instagram1 .view-content");
	}
	function rows()
	{
		return container().find(".views-row");
	}

	function layout()
	{
		var numRows = rows().length;
		var containerWidth = numRows * rowWidth();
		var width = 1/numRows*100
		container().width(containerWidth+"%");
		rows().width(width+"%");
	}

	function moveContainer()
	{
		var left = "-" + (active*rowWidth()) + "%";
		container().stop(false, false).animate({"left":left});
	}
	function jumpToEnd()
	{
		var active = rows().length-rowsPerPage();
		var left = "-" + (active*rowWidth()) + "%";
		container().css({"left":left});
	}
	function jumpToBeginning()
	{
		var active = min;
		var left = "-" + (active*rowWidth()) + "%";
		container().css({"left":left});
	}
	function rowWidth()
	{
		return 100/rowsPerPage();
	}
	function rowsPerPage()
	{
		if (isMobile())
		{
			return 1;
		}
		else if (isTablet())
		{
			return 1;
		}
		
		return 1;
	}
	function isMobile()
	{
		return $(window).width() < 540;
	}
	function isTablet()
	{
		return $(window).width() < 1220;
	}

	function previous()
	{
		active--;
		if (active < min)
		{
			jumpToEnd();
			active = max-1;
		}
		moveContainer();
	}

	function next()
	{
		active++;
		if (active > max)
		{
			jumpToBeginning();
			active = min+1;
		}
		moveContainer();
	}

	function clickPrevious()
	{
		previous();
		stop();
		return false;
	}

	function clickNext()
	{
		next();
		stop();
		return false;
	}

	function stop()
	{
		clearInterval(timer);
	}

	function timerNext()
	{
		next();
		layout();
	}

	
	$(function()
	{
		$("#block-block-16 a.prev").click(clickPrevious);
		$("#block-block-16 a.next").click(clickNext);

		max = rows().length;

		var $first = rows().eq(0).clone();
		var $second = rows().eq(1).clone();
		var $third = rows().eq(2).clone();
		

		container().append($first).append($second).append($third);
		start();
		setTimeout(layout, 50);
		$(window).resize(layout);
	});
                     
		}
	}

}(jQuery));