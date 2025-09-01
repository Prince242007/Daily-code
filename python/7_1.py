#a.	Write a NumPy program to create a 3x3 matrix with values ranging from 2 to 10.
import numpy as np
array1=np.array([[2,3,4],[5,6,7],[8,9,10]])
print(array1)

#b.	Write a NumPy program to reverse an array (the first element becomes the last).
arr = np.array([10, 20, 30, 40, 50])
reversed_arr = arr[::-1]
print("Reversed array:", reversed_arr)

#c.	Write a NumPy program to find common values between two arrays.
arr1 = np.array([1, 2, 3, 4, 5])
arr2 = np.array([4, 5, 6, 7, 8])
common_values = np.intersect1d(arr1, arr2)
print("Common values:", common_values)

#d 
arr = np.array([1, 2, 3])
repeated = np.repeat(arr, 2)
print("Repeated elements:", repeated)


#e
arr = np.array([1, 2, 3, 4, 5])
print("Memory size in bytes:", arr.nbytes)

#f
ones = np.ones((2, 3))
zeros = np.zeros((2, 3))
print("Array of ones:\n", ones)
print("Array of zeros:\n", zeros)


#g
arr = np.array([10, 20, 30, 40, 50])
print("4th element:", arr[3])   # Indexing starts at 0
