matrix1 = []

for row in range (3) :
    arr1 = []
    for column in range (3) :
        arr1.append(int(input()))
    matrix1.append(arr1)

matrix2 = []

for row in range (3) :
    arr2 = []
    for column in range (3) :
        arr2.append(int(input()))
    matrix2.append(arr2)

result = [[0,0,0]
          [0,0,0]
          [0,0,0]]

for row in range (3) :
    for column in range (3) :
        result[row][column] = matrix1[row][column] + matrix2[row][column]

for row in range (3) :
    for column in range (3) :
        print(result[row][column], end='')
    print()