from __future__ import division
import numpy as np

def piRecursive(n):
	if(n == 1):
		return 1
	else:
		return piRecursive(n-1) + np.cos(piRecursive(n-1))

n = input("n de recursões: ")
n = int(n)

print("O valor almejado: " + str(np.pi/2))
print("O valor obtido: " + str(piRecursive(n)))
