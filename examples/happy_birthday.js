/*
@author amolmt
*/
function SayHappyBirthday(string) {
    return string
      .split("")
      .map(function(char) {
        return char.charCodeAt(0).toString(2);
      })
      .join(" ");
  }
  
  console.log(SayHappyBirthday("Happy Birthday"));