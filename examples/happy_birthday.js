var startTime = new Date().getTime(); 
var interval = setInterval(function(){ 
    if(new Date().getTime() - startTime > 86400000) { 
        clearInterval(interval); 
        return; 
      } 
    alert("Happy Birthday!"); 
}, 1000); 
