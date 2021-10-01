# Wishing you happy birthday with greetings, images and a nice song

# required modules: PIL, requests, rumale.yaml, pygame

import tkinter as tk
import os
import requests
from ruamel.yaml import YAML # Order preserving version of YAML [Uses OrderedDict]

from io import BytesIO
from PIL import Image, ImageTk

os.environ['PYGAME_HIDE_SUPPORT_PROMPT'] = "hide"
import pygame



def close_win():
    pygame.mixer.music.stop()
    root.destroy()

def dynamic_bg(num):
    global tk_img_obj, hbd_img

    print(f'Showing image {num % len(img_urls)} of {len(img_urls)}')

    response = requests.get(img_urls[num % len(img_urls)])

    PIL_img_obj = Image.open(BytesIO(response.content))
    PIL_img_obj=PIL_img_obj.resize([int(scale_factor * s) for s in PIL_img_obj.size], Image.ANTIALIAS)

    width, height = PIL_img_obj.size   # Get dimensions
    new_height = new_width = min(PIL_img_obj.size)

    left = (width - new_width)/2
    top = (height - new_height)/2
    right = (width + new_width)/2
    bottom = (height + new_height)/2

    # Crop the center of the image
    PIL_img_obj = PIL_img_obj.crop((left, top, right, bottom))
    PIL_img_obj=PIL_img_obj.resize((500, 500), Image.ANTIALIAS)

    tk_img_obj = ImageTk.PhotoImage(PIL_img_obj)

    hbd_img.configure(image=tk_img_obj)

    root.after(4000, lambda: dynamic_bg(num+1 % len(img_urls)))


scale_factor = 0.1
bg_color = "black"
pad_value = 70

yaml=YAML(typ='safe')
pygame.mixer.init()
bg_music = pygame.mixer.music.load("res/Paperwhite-Only_Us.mp3")

person_name = input("Who's birthday is it?: ")

root = tk.Tk()
root.configure(background=bg_color)
root.attributes('-alpha', 0.95)
root.protocol("WM_DELETE_WINDOW", close_win)
root.attributes('-topmost', True)
root.resizable(0, 0)

with open('res/imgs.yml') as stream:
    img_urls = yaml.load(stream)

wish_banner = tk.Label(
    root,
    text=f"Happy Birthday {person_name}!",
    font=("Corbel", 36),
    foreground='#fcc2ce',
    background=bg_color,
    relief='flat'
)
wish_banner.grid(column=0, row=0, sticky="nw", padx=pad_value)

response = requests.get(img_urls[0])

PIL_img_obj = Image.open(BytesIO(response.content))
PIL_img_obj=PIL_img_obj.resize([int(scale_factor * s) for s in PIL_img_obj.size], Image.ANTIALIAS)

width, height = PIL_img_obj.size   # Get dimensions
new_height = new_width = min(PIL_img_obj.size)

left = (width - new_width)/2
top = (height - new_height)/2
right = (width + new_width)/2
bottom = (height + new_height)/2

# Crop the center of the image
PIL_img_obj = PIL_img_obj.crop((left, top, right, bottom))
PIL_img_obj=PIL_img_obj.resize((500, 500), Image.ANTIALIAS)

tk_img_obj = ImageTk.PhotoImage(PIL_img_obj)

hbd_img = tk.Label(root, image=tk_img_obj, background=bg_color, relief='flat')
hbd_img.grid(column=0, row=1, sticky="nw", padx=pad_value)

hbd_img.configure(image=tk_img_obj)

dynamic_bg(1)

pygame.mixer.music.play()

root.mainloop()

