def add(a,b):
     result = a+b
     return result
# import example as addition
# import 8 as addition
# a = addition.add(4,5)
# print(a)

import math
print("The value of pi is", math.pi)


from math import *
print("The value of pi is", pi)

import math as m
print(dir(m))


help('modules')

import math as m
from math import *
r=5
area = pi*r*r
print(area)

print(m.log2(4))


import math as m
from math import radians 
d=int(input("Enter degree:-"))
print(m.radians(d))



import math as m

x=int(input("Enter degree:-"))
d=m.radians(x)
print(6 * (x ** 2) + 4 * m.sin(d))



x=int(input("Enter degree:-"))
d=m.radians(x)
print("f(x) =" , m.cos(2*d))
print("f'(x) =" , (-2) * m.sin(2*d))
print('''f"(x) =''' , (-4) *m.cos(2*d))

