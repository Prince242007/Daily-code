import numpy as np
from numpy import linalg as LA

# list1 = [2, 4, 6, 8]
# array1 = np.array(list1)
# print(array1)
# array2 = np.array([2, 4, 6, 8,10])
# print(array2)


# array1 = np.zeros(4)
# print(array1)


# array1 = np.arange(5)
# print("Using np.arange(5):", array1)
# # create an array with values from 1 to 8 with a step of 2
# array2 = np.arange(1, 9, 2)
# print("Using np.arange(1, 9, 2):",array2)


# array1 = np.random.randint(1,10,size=5)
# print(array1)


# arr1=np.array([10,20,30])
# print("My 1D array:\n",arr1)

# arr2 = np.array([[10,20,30],[40,50,60]])
# print("My 2D numpy array:\n", arr2)

# arr= np.arange(0, 20, 3)
# print ("A sequential array with steps of 3:\n", arr)


# arr= np.linspace(0, 3, 5)
# print ("A sequential array with 5 values between 0 and 5:\n", arr)


# arr = np.ones((2,3))
# print("numpy array:\n", arr)
# print("Type:", type(arr))

# int_array = np.array([1, 3, 5, 7])
# # convert data type of int_array to float
# float_array = int_array.astype('float')
# # print the arrays and their data types
# print(int_array, int_array.dtype)
# print(float_array, float_array.dtype)


# array1 = np.array([[2, 4, 6],
#                   [1, 3, 5]])
# # check the dimension of array1
# print(array1.ndim)
# print(array1.size)
#  print(array1.shape)     

# array1 = np.array([6, 7, 8, 10, 13])
# # create a 1-D array of 32-bit integers 
# array2 = np.array([6, 7, 8, 10, 13], dtype=np.int32)
# array2 = np.array([6, 7, 8, 10, 13], dtype=np.int16)
# # use of itemsize to determine size of each array element of array1 and array2
# print(array1.itemsize)  # prints 8
# print(array2.itemsize)  # prints 4


# p = [[1, 0], [0, 1]]
# q = [[1, 2], [3, 4]]
# print("Original matrices:")
# print(p)
# print(q)
# # Perform matrix multiplication using np.dot
# result1 = np.dot(p, q)
# print("Result of the matrix multiplication:")
# print(result1)


a = np.array([[1, 0], [1, 2]])
# Display the original 2x2 array 'a'
print("Original 2-d array")
print(a)
print("Determinant of the said 2-D array:")
print(np.linalg.det(a))
