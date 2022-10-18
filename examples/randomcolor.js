
// HTML MARKUP 

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="style.css">
    <title>Random Colors</title>
</head>
<body>
  <h1>
      <span class="letters">H</span>
      <span class="letters">A</span>
      <span class="letters">P</span>
      <span class="letters">P</span>
      <span class="letters">Y</span><br>
      <span class="letters">B</span>
      <span class="letters">I</span>
      <span class="letters">R</span>
      <span class="letters">T</span>
      <span class="letters">H</span>
      <span class="letters">D</span>
      <span class="letters">A</span>
      <span class="letters">Y</span>
      <span class="letters">!</span>
    </h1>

    <script src="script.js"></script>
</body>
</html>

// END OF HTML MARKUP


//  CSS Styles

@import url('https://fonts.googleapis.com/css2?family=Fredoka+One&display=swap');

body{
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    background-color: #000;
}

h1{
    font-size: 5rem;
    font-family: Fredoka One;
}

.letters{
    transition: color 1000ms;
}

// END OF CSS STYLES



// JS FUNCTIONS

function randomRGB(){
    const r = Math.floor(Math.random() * 256)
    const g = Math.floor(Math.random() * 256)
    const b = Math.floor(Math.random() * 256)
    return `rgb(${r}, ${g}, ${b})`
}

//changing the color of each letter
const letters = document.querySelectorAll('.letters');
setInterval(function(){
for (let letter of letters){
    letter.style.color = randomRGB()
}
}, 1000)

// END OF JS 



