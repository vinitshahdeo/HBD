// run in browser console
const stringEncoded = 'SGFwcHkgQmlydGhkYXkh';
const stringDecoded = window.atob(stringEncoded);
console.log('message for today:', stringDecoded);
