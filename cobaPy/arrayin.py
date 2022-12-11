arr = []
for i in range(0,10) :
    arr.append(int(input()))
for index, item in enumerate(arr) :
    if item <= 0 :
        arr[index] = 1
for i in range(10) :
    print ( "x[" + str(i) + "] = " + str(arr[i]))