from PIL import Image
import numpy as np
def main():
	strHbd = "Happy Birthday"
	asciiPixel = []
	for s in strHbd:
		asciiPixel.append(ord(s))
	pixelTuple = [(i, i*999, i*7) for i in asciiPixel]
	array = np.array(pixelTuple, dtype=np.uint8)
	new_image = Image.fromarray(array)
	new_image.save('happybirthday.png')
main()
