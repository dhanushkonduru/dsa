def roof(rows):
    for i in range(rows):
        for j in range(i,rows-1):
            print(" ",end=" ")
        for j in range(i):
            print("*",end=" ")
        for j in range(i+1):
            print("*",end=" ")
        print()
        
def walls(rows):
    for i in range(rows):
        print("#",end=" ")
        for j in range(rows+2):
            print(" ",end=" ")
        for i in range(rows-rows+1):
            print("#",end=" ")
        print()
        
def floor(rows):
    for i in range((rows*2)-1):
        print("~",end=" ")
    print()
    for i in range(rows-3):
        print(" ",end=" ")
    print("Sweet Home")


def print_house(rows):
    roof(rows)
    walls(rows)
    floor(rows)

rows=int(input("Enter no of rows :"))
house = print_house(rows)
