# -*- coding: utf-8 -*-
"""
Created on Thu Aug  2 21:37:18 2018

@author: anderson v. do nascimento
"""

import matplotlib.pyplot as plt

def recur_tool(n):
    if n == 1:
        return 2
    else:
        return float((0.5)*(recur_tool(n-1) + 6))

n = input("Até onde você quer determinar a sequência? ")

sequence = []

for i in range(n):
    sequence.append(recur_tool(i+1))
    
#print("Sequência: " + str(sequence))
    
plt.figure()
plt.plot(sequence)
plt.ion()
plt.show()