import math

def f(x):
  return math.sqrt(x)*math.cos(x)

def trapezoidal(f, a, b, Iold, k):
  if k == 1:
    Inew = (f(a) + f(b))*(b-a)/2.0
  else:
    n = 2**(k-2)
    h = (b-a)/n
    x = a + h/2.0
    sum = 0.0
    for i in range(n):
      sum += f(x)
      x += h
    Inew = (Iold + h*sum)/2.0

  return Inew

Iold = 0.0
for k in range(1,20):
  Inew = trapezoidal(f, 0.0, math.pi, Iold, k)
  if (k > 1) and (abs(Inew - Iold)) < 1.0e-5: 
    break
  Iold = Inew

print("Integrals = ", Inew)
print("nPanels =", 2**(k-1))