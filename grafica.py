#!bin/python

print("Inició python")
import numpy as np
import matplotlib.pyplot as plt
X=np.loadtxt("datos.txt",delimiter=',')
print("Datos cargados..")
Y=[]
Z=[]
for i in range(len(X)):
    Y.append(X[i][0])
    Z.append(X[i][1])

print(X)
plt.scatter(Y,Z)
plt.xlabel("TIEMPO")
plt.ylabel("DISTANCIA VERTICAL")
plt.savefig("grafico.pdf")
print("Grafica del movimento guardada en: 'grafico.pdf'")