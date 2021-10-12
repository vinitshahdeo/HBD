import 'dart:convert';

void main() {
  var decoded = base64.decode('SGFwcHkgQmlydGhkYXkh');
  print(utf8.decode(decoded));
  }