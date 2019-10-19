# This program wishes a dev (can by anyone else too!)
# This program uses the binascii and base64 pacages of python to convert and display the strings

import binascii
import base64

wishOne = binascii.crc32(b"Happy Birthday fellow earthling!")
wishTwo = base64.b64encode(b'May the Peace be with You')

print(wishOne, wishTwo)
