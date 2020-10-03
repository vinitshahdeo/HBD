const readline = require("readline");
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

const today = new Date();
const nowMonth = today.getMonth();
const nowDay = today.getDate();

function isValidDate(dateString) {
    const regEx = /^\d{4}-\d{2}-\d{2}$/;
    if(!dateString.match(regEx)) return false;  // Invalid format
    const d = new Date(dateString);
    const dNum = d.getTime();
    if(!dNum && dNum !== 0) return false; // NaN value, Invalid date
    return d.toISOString().slice(0,10) === dateString;
}
  
rl.question("What is your birth date? (format: YYYY-MM-DD)", function(birthDate){
    const birth = new Date(parseInt(birthDate.substring(0,4)),parseInt(birthDate.substring(5,7))-1,parseInt(birthDate.substring(8,10)));
    const birthMonth = birth.getMonth();
    const birthDay = birth.getDate();

    const compBirth = birthMonth.toString() + birthDay.toString();
    const compToday = nowMonth.toString() + nowDay.toString();

    if(!isValidDate(birthDate)){
        console.log('Please follow this format for your birthdate: YYYY-MM-DD');
        return process.exit(0)
    }

    if( compBirth == compToday) {
        console.log('HAPPY BIRTHDAY!');  
    } else {
        console.log('Its not your birthday, come back when it is for a special surpise :)');
    }

    process.exit(0);
});