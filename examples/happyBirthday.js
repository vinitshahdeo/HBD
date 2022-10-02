function happyBirthday(name) {
  const firstWord = ['H', 'A', 'P', 'P', 'Y'];
  const secondWord = ['B', 'I', 'R', 'T', 'H', 'D', 'A', 'Y'];

  return `${firstWord.join()} ${secondWord.join()} ${name}!`;
}

console.log(happyBirthday('nice person'));
