import turtle

colors=['red','orange','purple','blue','green','yellow']
turtle_pen = turtle.pen()
turtle.bgcolor('black')
for i in range(360):
    turtle_pen.pencolor(colors[i])
    turtle_pen.width(x/100 + 1)
    turtle_pen.forward(x)
    turtle_pen.left(59)
