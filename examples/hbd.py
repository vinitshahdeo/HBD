#!/usr/bin/env python3
from selenium import webdriver
from time import sleep

browser = webdriver.Firefox   # Create new Selenium Firefox Browser Instance
browser.get('https://www.youtube.com/watch?v=_z-1fTlSDF0')  # Happy Birthday Song
sleep(61)  # Song is 61 seconds long.
browser.quit()  # Close browser since we're done here.
