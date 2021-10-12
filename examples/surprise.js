let emotionType = ["Happy", "Sad", "Angry", "Scared"]
let celebrationType = ["Retirement!", "Birthday!", "First Day of School!", "Anniversary!"]
const emotion = emotionType[0]
const celebration = celebrationType[1]

function greeting() {
  document.getElementById("card").innerHTML = (emotion + " " + celebration)
}

/* Add this HTML to activate the surprise
  <!DOCTYPE html>
  <html>
  <body>
  <p id="card" onclick="greeting()">Click me for a surprise!</p>
  </body>
  </html> 
*/
