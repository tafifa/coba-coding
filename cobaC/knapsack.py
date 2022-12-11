def knapSack(W, wt, val, n):
    # initial conditions
    if n == 0 or W == 0 :
       return 0
    # If weight is higher than capacity then it is not included
    if (wt[n-1] > W):
       return knapSack(W, wt, val, n-1)
    # return either nth item being included or not
    else:
       return max(val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
          knapSack(W, wt, val, n-1))

# To test above function
n = int(input("Enter the number of items in a Knapsack : "))

val = [n]
for i in range (n) :
  val[i] = int(input("Enter value for item : "))

wt = [n]
for i in range (n) :
  wt[i] = int(input("Enter value for item : "))

W = int(input("Enter the capacity of knapsnack : "))

print(knapSack(W, wt, val, n))