"Happy Birthday using Pygame Module by Marcus Mangru"

#Calling Pygame Module
import pygame

#Starting Pygame
pygame.init()

#Setting Variables
screen = pygame.display.set_mode((740, 480))    #Pygame Display

font = pygame.font.SysFont("comicsansms", 72)   #Font Settings

text = font.render("HAPPY BIRTHDAY!!!", True, (0, 200, 200))   #Text


background_colour = (255, 255, 255) #Background Colour

text_display = text.get_rect()  #Setting up Screen Display

text_display.center = (360 , 200)   #Setting up Positioning

#Starting Display Loop
while True :
    #Setting background and text
    screen.fill(background_colour)
    screen.blit(text,text_display)
    
    #Exit Console and Pygame 
    for event in pygame.event.get() :
        if event.type == pygame.QUIT : 
            pygame.quit() 
            quit() 
        pygame.display.update()
