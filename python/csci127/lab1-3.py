import turtle #importing the turtle package
tia=turtle.Turtle() #creates turtle
turtle.colormode(255) #allows colors to be given as 0-255
tia.color(255,0,0) #changes turtle color
tia.shape("turtle")

for i in range(0,255,10):
     tia.forward(10)		#Move forward
     tia.pensize(i)		#Set the drawing size to be i (larger each time)
     tia.color(i,0,0)		#Set the red channel to be i (brighter each time)

'''for i in range(4): #for loop
    tia.forward(150) #moves the turtle forward
    tia.right(90) #turtle turns right
    #tia.left(45) #turtle turns left
'''

var=input("Please enter an input: ") #how to do user input
print(var)

#string.count('C') counts the number of chars 

#range(stop)
#range(start,stop)
#range(start,stop,step)
for i in range(2,5):
    print(i)
