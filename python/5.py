# numbers = (1, 2, -5)
# print(numbers)

# a_tuple = (0, [1, 2, 3], (4, 5, 6), 7.0)
# print(a_tuple)

# languages = ('Python', 'Swift', 'C++')
# print(languages[0])   # Python

# cars = ('BMW', 'Tesla', 'Ford', 'Toyota')
# print('Total Items:', len(cars))

# a = tuple(range(5))
# print(a)

# b = tuple(range(5,10))
# print(b)


# c = tuple(range(0,10,2))
# print(c)


# d = tuple(range(10,0,-2))
# print(d)

# t1 = (2,3,4,5)
# print(sum(t1))


# t3 = (3,4,4,2,2,3,6,7,4,4)
# print(t3.count(4))

# t3 = (3,4,4,2,2,3,6,7,4,4)
# print(t3.index(2))
# print(t3.index(4,3,9))

# t3 = (3,4,4,2,2,3,6,7,4,4)
# print(min(t3))

# numbers = (7, 2, 8, 5, 9)
# print(max(numbers))



# # removing duplicates from a tuple using dictionaries
# a = (5,6,7,5,5,9,7)
# b = ("a","b","v","b")
# my_tu_1 = tuple(dict.fromkeys(a))
# print(my_tu_1)
# my_tu_2 = tuple(dict.fromkeys(b))
# print(my_tu_2)

# first_names = ('Simon', 'Sarah', 'Mehdi', 'Fatime')
# last_names = ('Sinek', 'Smith', 'Lotfinejad', 'Lopes')
# ages = (49, 55, 39, 33)
# zipped = tuple(zip(first_names, last_names,ages))
# print(zipped)


b = ((1,2),(3,4),(5,6))
my = tuple(item for l in b for item in l)
print(my)



# #a.	Write a Python program to Count the occurrences of an element in a tuple.

# #b.	Write a Python program to Check if an element exists in a tuple.
# # Define a tuple
# my_tuple = (10, 20, 30, 40, 50)
# element = 30
# if element in my_tuple:
#     print(f"The element {element} exists in the tuple.")
# else:
#     print(f"The element {element} does not exist in the tuple.")



# #c.	Write a Python program to Convert a tuple to a string.
# # Define a tuple
# my_tuple = ('P', 'y', 't', 'h', 'o', 'n')
# string_result = ''.join(my_tuple)
# print("Tuple as string:", string_result)

# #d.	Write a Python program to Find the maximum and minimum elements in a tuple.
# t3 = (3,4,4,2,2,3,6,7,4,4)
# print(min(t3))

# numbers = (7, 2, 8, 5, 9)
# print(max(numbers)) 



# #e.	Write a Python program to convert a tuple of strings to a single string.
# my_tuple = ("Hello", "world", "Python", "is", "awesome")
# result = ' '.join(my_tuple)
# print("Single string:", result)


# #f.	Write a Python program to sort a tuple of integers.
# my_tuple = (5, 2, 9, 1, 7, 3)
# sorted_tuple = tuple(sorted(my_tuple))
# print("Original tuple:", my_tuple)
# print("Sorted tuple:", sorted_tuple)

# #g.	Write a python program to find the first and last elements of a tuple.
# my_tuple = (10, 20, 30, 40, 50)
# first_element = my_tuple[0]
# last_element = my_tuple[-1]
# print("Tuple:", my_tuple)
# print("First element:", first_element)
# print("Last element:", last_element)
