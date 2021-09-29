const output = document.querySelector("#birthday");
const btn = document.querySelector('#btn');

const birthdayString = "HAPPY BIRTHDAY!";
var index = 0;
function clickHandler(){
    output.innerHTML = output.textContent +birthdayString[index];
    index++;
    if (index===birthdayString.length+1) {
        index=0;
        output.innerHTML="";
    }
}

btn.addEventListener('click', clickHandler);