import numpy as np
import matplotlib.pyplot as plt

a = float(input("Masukkan batas bawah : "))
b = float(input("Masukkan batas atas : "))
h = float(input("Masukkan step : "))


def f(x):
    return -(x-5)**2+100

def forward_difference(a, h):
    d = (f(a+h) - f(a))/h
    return d

def backward_difference(a, h):
    d = (f(a) - f(a-h))/h
    return d

def central_difference(a, h):
    d = (f(a+h) - f(a-h))/(2*h)
    return d

error_fd = []
error_bd = []
error_cd = []

while (a <= b):
    i = 1
    fd = np.abs(forward_difference(a, h/i) - 10) 
    error_fd.append(round(fd, 2))
    
    bd = np.abs(backward_difference(a, h/i) - 10) 
    error_bd.append(round(bd, 2))
    
    cd = np.abs(central_difference(a,h/i) - 10) 
    error_cd.append(round(cd, 2))
    
    a += h
    i += 1

print(error_fd)
print(error_cd)
print(error_bd)


plt.figure(figsize=(7, 5), dpi=200)
plt.plot(error_fd, label='forward difference')
plt.plot(error_bd, label='backward difference')
plt.plot(error_cd, label='central difference')
plt.xlabel('1 / h')
plt.ylabel('error')
plt.legend()

