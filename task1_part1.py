#I think there should be overall 3 functions

import random
rows = int(input("Enter the number of rows: "))
columns = int(input("Enter the number of columns: "))

mat = [[random.randint(0, 255) for _ in range(columns)] for _ in range(rows)]

def print_picture():
    """A function to print the picture"""
    
    for n in range(len(mat)):
        for m in range(len(mat[0])):
            print(mat[n][m], end = " ")
        print()
    print("Now you can see the picture")

def change():
    """A function to change the RGB value of a pixel"""
    
    x = int(input("Enter the x coordinate of the pixel: "))
    y = int(input("Enter a y coordinate of the pixel: "))
    target = int(input("Enter the desired pixel color(from 0 to 255): "))
    if 0 <= target <= 255:  
        mat[x][y] = target
    else:
        print("Invalid input")
    print_picture()
    print("The value is changed")

def get_value():
    """A function to get the RGB value of the pixel"""
    
    x = int(input("Enter the x coordinate of the pixel: "))
    y = int(input("Enter a y coordinate of the pixel: "))

    print_picture()
    print(mat[x][y])
    print("You got the RGB value of pixel")

#FUNCTION CALLS
#print_picture()
#change()
#get_value()