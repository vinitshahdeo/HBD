var Page = 1;
$( "#NxtBtn" ).click(function() {
    if(Page === 1){
        $("#FeaturePage").removeClass("hidden");
        $("#TitlePage").addClass("SlideUpFromView");
        $("#FeaturePage").addClass("SlideUpFromDown");
        }
    Page++;
});

$("#Prez").click(function() {
    $("#Prez").toggle( "explode" );
});