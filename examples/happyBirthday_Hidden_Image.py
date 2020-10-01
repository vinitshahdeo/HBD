from PIL import Image
import numpy as np

# Extracting the ascii values from the string to use as pixel values
strHbd = "Happy Birthday"
asciiPixel = []
for s in strHbd:
    asciiPixel.append(ord(s))

# Use one value as triplet to make the image large and make RGB values
# The first i is the ascii value of the character, 
# the G and B value is also the ascii value of the character 
# but altered for fun

pixelTuple = [(i, i*13, i*7) for i in asciiPixel]


# Convert the pixels into an array using numpy
array = np.array(pixelTuple, dtype=np.uint8)

# Use PIL to create an image from the new array of pixels
new_image = Image.fromarray(array)
new_image.save('happybirthday.png')

# We can conceal the text from the image to find the hidden birthday wish 
# by reversing the process.
