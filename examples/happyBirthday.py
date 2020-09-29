import turtle

def drawBalloon(color):
    turtle.color(color)
    turtle.pendown()
    turtle.begin_fill()
    turtle.circle(45)
    turtle.end_fill()
    turtle.color('black')
    turtle.right(90)
    turtle.forward(100)
    turtle.penup()

turtle.hideturtle()
turtle.penup()

# Text
fontStyle = ('Arial', 40, 'italic')
turtle.write('Happy Birthday!', font=fontStyle, align='center')

# Decorations
turtle.goto(0, 200)
drawBalloon('blue');
turtle.home()

turtle.goto(-100, 100)
drawBalloon('red')
turtle.home()

turtle.goto(100, 100)
drawBalloon('yellow')

turtle.done()

