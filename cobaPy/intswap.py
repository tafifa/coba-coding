def swap(a, b):
  print("test")
  m = (a + b) / 2
  swap(a,m)
  swap(m, b)

print(swap(0, 8))