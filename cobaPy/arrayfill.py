n = int(input())
arr = []

for i in range(0,10) :
    arr.append(n)
    n *= 2

for i in range(10) :
    print ( "x[" + str(i) + "] = " + str(arr[i]))