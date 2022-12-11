import time

def sum25(x, y, z):
  return x+y+z

def On3():
  start_time = time.time()

  print("O(n^3)")
  i = 1
  for x in range(0, 26):
    for y in range(0, 26):
      for z in range(0, 26):
        if sum25(x, y, z) == 25:
          # print(f"{i}\t {x} {y} {25-x-y}")
          i += 1

  print("Time elapsed: {:.4f}ms\n".format((time.time() - start_time)*1000))

def On2():
  start_time = time.time()

  print("O(n^2)")
  j = 1
  for x in range(0, 26):
    for y in range(0, 26-x):
      # print(f"{j}\t {x} {y} {25-x-y}")
      j += 1

  print("Time elapsed: {:.4f}ms\n".format((time.time() - start_time)*1000))

def permu():
  from itertools import product
  
  start_time = time.time()

  print("w/ Function")
  k = 1
  for i in product([0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25], repeat=3):
    if sum(i) == 25:
      # print(f"{k}\t {i[0]} {i[1]} {i[2]}")
      k += 1
  
  print("Time elapsed: {:.4f}ms\n".format((time.time() - start_time)*1000))

if __name__ == "__main__":
  On3()
  On2()
  permu()
