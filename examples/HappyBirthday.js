document.addEventListener('DOMContentLoaded', function() {
  showText("Happy Birthday!", 0, 300);
});

let showText = function (message, index, interval) {
  if (index < message.length) {
    console.warn(message[index++]);
    setTimeout(function () {
      showText(message, index, interval);
    },interval);
  }
}
