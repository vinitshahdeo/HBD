// Prints happy birthday with a small delay between two characters like this :
// H
//  a
//   p
//    p
//     y
//
//       b
//        i
//         r
//          t
//           h
//            d
//             a
//              y
//
//                !
//                 !
//                  !

import 'dart:async';

const kDelay = 150;
String secret = 'Super Secret Key !';
List<int> msg = [
  0x1b,
  0x14,
  0x00,
  0x15,
  0x0b,
  0x00,
  0x31,
  0x0c,
  0x11,
  0x06,
  0x0d,
  0x10,
  0x41,
  0x32,
  0x45,
  0x58,
  0x01,
  0x00
];

void main() async {
  for (int i = 0; i < msg.length; ++i) {
    print(' ' * i + String.fromCharCode(secret.codeUnitAt(i) ^ msg[i]));
    await Future.delayed(Duration(milliseconds: kDelay));
  }
}
