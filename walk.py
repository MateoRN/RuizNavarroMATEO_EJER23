import os
import numpy as np
import matplotlib.pyplot as plt


a = os.system("c++ walk.cpp -o walk.x")
a = os.system("./walk.x > walk.dat")

plt.figure()
data = np.loadtxt("walk.dat")
plt.plot(data[:,0], data[:,1])
plt.axis('square')
plt.xlim([-45, 45])
plt.ylim([-45, 45])
plt.xlabel('X')
plt.ylabel('Y')
plt.savefig("walk.png")
