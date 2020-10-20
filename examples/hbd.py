import random
import turtle
tina = turtle.Turtle()
tina.speed(0)

#firework color
def pen(colour):
    tina.color(colour)

pen('red')

#move to a new place on screen
def move():
    tina.pu()
    x = random.randint(-165,165)
    y = random.randint(-165,165)
    tina.goto(x,y)
    tina.pd()
    
#set the sky black
def sky(colour):
     wn = turtle.Screen()
     wn.bgcolor(colour)

sky('black')

#draw a firework
def firework(size):
    for num in range (20):
         tina.fd(size)
         tina.rt(180-(360/20))

def writeText(string):
    tina.penup()
    tina.backward((tina.getscreen().window_width() / 2) - 10)
    turtle.color('white')
    turtle.write(string,move=False,font=("Arial", 32, "normal"))
    turtle.done()

firework(50)
move()
pen('yellow')
firework(75)
move()

pen('orange')
firework(199)   
firework(50)
move()

pen('blue')
firework(75)
move()

pen('pink')
firework(199)
firework(50)
move()

pen('yellow')
firework(75)
move()

pen('orange')
firework(199)   
firework(50)
move()

pen('blue')
firework(75)
move()

pen('pink')
firework(199)
firework(50)
move()

pen('yellow')
firework(75)
move()

pen('orange')
firework(199)   
firework(50)
move()
pen('blue')
firework(75)
move()

pen('pink')
firework(199)
firework(50)
move()

pen('yellow')
firework(75)
move()

pen('orange')
firework(199)   
firework(50)
move()

pen('blue')
firework(75)
move()

pen('pink')
firework(199)

writeText("Happy Birthday!")
