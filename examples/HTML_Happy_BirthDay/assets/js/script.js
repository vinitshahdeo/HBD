var Page = 1;
function Next(){
    if(Page = 1){
    $("#FeaturePage").removeClass("hidden");
    $("#TitlePage").addClass("SlideUpFromView");
    $("#FeaturePage").addClass("SlideUpFromDown");
    }
    Page++
}

function prize(){
    $("#Prez").toggle( "explode" );
}