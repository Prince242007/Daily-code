# x = 10
# if x>5:
#     print("x is greter than 5")


# x = 10
# if  x>5 :
#     print("x is greater than 5")
# elif x ==5:
#    print("x is equal to 5")
# else:
#    print("x is less than 5")

# x=5
# if x>5:
#    print("x is greater than 5")
# else:
#    print("x is not greater than 5")


# age = 35

# if age >= 60:
#     print("You are a senior citizen.")
# else:
#     if age >= 18:
#         print("You are an adult.")
#     else:
#         print("You are a teenager.")

# num = 10

# if num > 0:
#     if num % 2 == 0:
#         print("The number is positive and even.")
#     else:
#         print("The number is positive but odd.")
# else:
#     print("The number is not positive.")

# Fruits = ["apple", "banana", "cherry"]
# for fruit in Fruits:
#       print(fruit)

# x = 1
# while x<=5:
#      print(x)
#      x+=1

# for x in range(1,6):
# 	if x==3:
# 	    break 
# print(x)

# for x in range(1,6):
# 	if x==3:
# 	    continue 
# print(x)


# for x in range(1,6):
#     if x == 3:
#         pass
#     print(x)


# add = lambda x, y: x + y
# print(add(3, 5))  


# def factorial(n):

#     if n == 1:
#         return 1
#     else:
#         return n * factorial(n - 1)
# print(factorial(5)) 


# def square(x):
#     return x * x
# numbers = [1, 2, 3, 4, 5]
# squared_numbers = list(map(square, numbers))
# print(squared_numbers)  


def generate_numbers():
    for i in range(1, 6):
        yield i
for number in generate_numbers():
    print(number)  


# #a 
# i=1
# while(i<100):
#     if(i%2!=0):
#         print(i,end=" ")
        
#     i=i+1    
# print(end="\n")
# n=int(input("Ener the number = "))
# i=1
# sum=0
# while(i<=n):
#     sum=sum+i
#     i=i+1
# print(sum)    


# num=int(input("Enter any number = "))
# count=0
# while(num>0):
#     count=count+1
#     num//=10
# print(count)    


# num=int(input("Enter any number = "))
# first = 0
# last=num%10 
# while(num>0):
#     first=num%10
#     num//=10
# print(first)   
# print(last)   

# num=int(input("Enter any number = "))
# def swap_first_last(num):
#     temp = num
#     digits = 0

#     while temp > 0:
#         temp //= 10
#         digits += 1
#     if digits == 1:
#         return num
#     last_digit = num % 10
#     first_digit = num // (10 ** (digits - 1))
#     middle = num % (10 ** (digits - 1))
#     middle //= 10
#     swapped = (last_digit * (10 ** (digits - 1))) + (middle * 10) + first_digit
#     return swapped
# number = int(input("Enter a number: "))
# print("Number after swapping:", swap_first_last(number))



# num = int(input("Enter a number: "))
# product = 1
# while num > 0:
#     digit = num % 10
#     product *= digit
#     num //= 10

# print("Product of digits:", product)


# num = int(input("Enter a number: "))
# reverse = 0

# while num > 0:
#     digit = num % 10
#     reverse = reverse * 10 + digit
#     num //= 10

# print("Reversed number:", reverse)
