import random
n = int(input("Enter the size of the matrix: "))

mat = [[random.randint(0, 1) for _ in range(n)] for _ in range(n)]

def print_mat():
    for n in range(len(mat)):
        for m in range(len(mat[0])):
            print(mat[n][m], end = " ")
        print()

print_mat()
print()

def turn():
    for i in range(len(mat)):
        mat[i] = mat[i][::-1]
    
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            if mat[i][j] == 0:
                mat[i][j] = 1
            elif mat[i][j] == 1:
                mat[i][j] = 0

turn()
print_mat()