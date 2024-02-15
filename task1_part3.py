mat = [[1, 1, 1, 0, 0, 0], 
       [0, 1, 1, 0, 0, 0], 
       [0, 0, 0, 1, 1, 0], 
       [0, 1, 1, 0, 1, 0]]

def func(mat):
    objects = 0
    coordinates = [(0, 1), (1, 0), (0, -1), (-1, 0)] # up, right, down, left
    l, w = len(mat), len(mat[0])
    def foo(i, j):
        if 0 <= i < l and 0 <= j < w and mat[i][j] == 1:
            mat[i][j] = -1
            for x, y in coordinates:
                foo(i + x, j + y)
    
    for i in range(len(mat)):
        for j in range(len(mat[0])):
            if mat[i][j] == 1:
                objects += 1
                foo(i, j)
    return objects

print("The number of objects is", func(mat))




