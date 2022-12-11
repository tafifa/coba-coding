n = int(input())
arr = map(int, input().split())

setArr = set(arr)
print("Set : ", setArr)

sortedArr = sorted(setArr)
print("Sorted : ", sortedArr)

listArr = list(sortedArr)
print("List : ", listArr)

lengthArr = len(listArr)-1
print("Length : ", lengthArr)

print("Result : ", listArr[lengthArr-1])