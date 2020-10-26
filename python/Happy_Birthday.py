import turtle

# set the background color for the page
bg = turtle.Screen()
bg.bgcolor("black")

hp = turtle.Turtle()
hp.shape("turtle")
hp.speed(55)

# draw lines
hp.penup()
hp.goto(-190, -180)
hp.color("yellow")
hp.pensize(6)
hp.pendown()
hp.goto(190,-180)
hp.penup()

hp.penup()
hp.goto(-160, -150)
hp.color("purple")
hp.pensize(6)
hp.pendown()
hp.goto(160,-150)
hp.penup()

hp.penup()
hp.goto(-130, -120)
hp.color("teal")
hp.pensize(6)
hp.pendown()
hp.goto(130,-120)
hp.penup()

# draw cake
hp.goto(-74,-110)
hp.pendown()
hp.color("white")
hp.goto(50,-110)
hp.left(90)
hp.forward(60)
hp.left(90)
hp.forward(125)
hp.left(90)
hp.forward(60)
hp.penup()

#draw candles
hp.goto(-60, -40)
hp.color("aquamarine")
hp.pendown()
hp.pensize(3)
hp.goto(-60, -20)
hp.penup()

hp.goto(-40, -40)
hp.color("yellow")
hp.pendown()
hp.pensize(3)
hp.goto(-40, -20)
hp.penup()

hp.goto(-20, -40)
hp.color("green")
hp.pendown()
hp.pensize(3)
hp.goto(-20, -20)
hp.penup()

hp.goto(0, -40)
hp.color("pink")
hp.pendown()
hp.pensize(3)
hp.goto(0, -20)
hp.penup()

hp.goto(20, -40)
hp.color("blue")
hp.pendown()
hp.pensize(3)
hp.goto(20, -20)
hp.penup()

# print message
hp.goto(-110, 35)
hp.color("red")
hp.pendown()
hp.write("Happy Birthday!", move = False, align = 'left', font=("Arial", 24, "normal"))


# send the turtle to the corner
hp.penup()



