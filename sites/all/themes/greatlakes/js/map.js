(function($) {
    $(function(){
       

        if($("#block-block-17").length > 0)
        {
            createMap();
        }

    });

    function createMap()
    {
        var location = new google.maps.LatLng(42.973516,-82.401745);
        var mapOptions = {
            zoom: 17,
            center: location,
            scrollwheel: false
        }


        var map = new google.maps.Map($("#block-block-17").get(0),
                        mapOptions);

        var marker = new google.maps.Marker({
            position: location,
            map: map,
            title: "Great Lakes Dance Academy"
        });

       marker.setMap(map);
    }
}(jQuery));