# I like say Happy Birthday in ACSII.
text = "Happy Birthday!"
ascii_list = list(bytes(text, 'ascii'))
for ch in ascii_list:
  print(ch)
