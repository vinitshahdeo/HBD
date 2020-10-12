import turtle
import random

# set the background color for the page
bg = turtle.Screen()
bg.bgcolor("Black")

tommy = turtle.Turtle()
tommy.shape("turtle")
tommy.speed(25)

# draw lines
tommy.penup()
tommy.goto(-190, -180)
tommy.color("yellow")
tommy.pensize(6)
tommy.pendown()
tommy.goto(190,-180)
tommy.penup()

tommy.penup()
tommy.goto(-160, -150)
tommy.color("purple")
tommy.pensize(6)
tommy.pendown()
tommy.goto(160,-150)
tommy.penup()

tommy.penup()
tommy.goto(-130, -120)
tommy.color("teal")
tommy.pensize(6)
tommy.pendown()
tommy.goto(130,-120)
tommy.penup()

# draw cake
tommy.goto(-74,-110)
tommy.pendown()
tommy.color("violet")
tommy.goto(50,-110)
tommy.left(90)
tommy.forward(60)
tommy.left(90)
tommy.forward(125)
tommy.left(90)
tommy.forward(60)
tommy.penup()

#draw candles
tommy.goto(-60, -40)
tommy.color("aquamarine")
tommy.pendown()
tommy.pensize(3)
tommy.goto(-60, -20)
tommy.penup()

tommy.goto(-40, -40)
tommy.color("red")
tommy.pendown()
tommy.pensize(3)
tommy.goto(-40, -20)
tommy.penup()

tommy.goto(-20, -40)
tommy.color("gold")
tommy.pendown()
tommy.pensize(3)
tommy.goto(-20, -20)
tommy.penup()

tommy.goto(0, -40)
tommy.color("pink")
tommy.pendown()
tommy.pensize(3)
tommy.goto(0, -20)
tommy.penup()

tommy.goto(20, -40)
tommy.color("purple")
tommy.pendown()
tommy.pensize(3)
tommy.goto(20, -20)
tommy.penup()

tommy.goto(40, -40)
tommy.color("white")
tommy.pendown()
tommy.pensize(3)
tommy.goto(40, -20)
tommy.penup()

# print message
tommy.goto(-110, 35)
tommy.color("gold")
tommy.pendown()
tommy.write("Happy Birthday!", None, None, "24pt bold")



# send the turtle to the corner
tommy.penup()
tommy.goto(-250, 250)



