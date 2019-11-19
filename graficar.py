
import numpy as np
import matplotlib.pyplot as plt

data1 = np.loadtxt("evolve_a.dat")
#data2 = np.loadtxt("friccion.dat")

plt.figure()
plt.subplot(1,3,1)
plt.title("Nx=30, Ntc")
plt.xlabel("Posicion")
plt.ylabel("Tiempo")
plt.imshow(data1)

#plt.subplot(1,3,2)
#plt.plot(data1[:,0], data1[:,1])

plt.savefig("evolve_a.png")