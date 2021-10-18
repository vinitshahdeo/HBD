<!DOCTYPE html>
<html>
<body>
<p id="card" onclick="greeting()">Click me for a surprise!</p>
<script>
  let emotionType = ["Happy", "Sad", "Angry", "Scared"]
  let celebrationType = ["Retirement!", "Birthday!", "First Day of School!", "Anniversary!"]
  const emotion = emotionType[0]
  const celebration = celebrationType[1]

  function greeting() {
    document.getElementById("card").innerHTML = (emotion + " " + celebration)
  }
</script>
</body>
</html> 



