# # 1

# l1=range(101)
# print(sum(l1))


# # 2

# import numpy as np
# l1 = np.array([2,3,5,2,6,8,90])
# print(len(l1[l1%2==0]))

# # 3

# str= "prince"
# emp=""
# count=-1
# for i in range(len(str)):
#     emp += str[count]
#     count = count-1
# print(emp)  



# # 6 

# l1 = [233,45,34,62,6,4,4,25,2,3,6,3,3,5,3]
# l2 = []
# l3 = [l1[0]]
# l4 = [l1[0]]
# # def check(l1,el) :
# #     for i in l1 :
# #         if(i==el) : return True 
# #     return False

# for i in l1 :
#     if(i not in l2) :
#         l2.append(i)
        
# print(l2)
    
# for j in l1 :
#     if(not check(l3,j)) :
#         l3.append(j)
# print(l3)

# count = 0

# for i in range(len(l1)) :
#     count = 0
#     for j in range(len(l1)) :
#         if(i != j and l1[i]==l1[j]) :
#             count += 1
#         if(count>1) :
#             break
#         l4.append(l1[i]) 
#         break
# print(l4)


# # 7

# # frequency of each char

# d1 = {}
# string  = "a while little fox"
# for st in  string :
#     if st in d1 :
#         d1[st] += 1
#     else :
#         d1[st] = 1
    
# print(d1)

# # 8

# def fact(num) :
#     mul = 1
#     for i in range(1,num+1) :
#         mul *= i
    
#     return mul

# print(fact(6))

# # 9
# import math

# def isPrime(num) :
#     if(num == 0 or num == 1) : return False
#     if (num==2) : return True
#     for i in range(2,int(math.sqrt(num))+1) :
#         if(num%i == 0) : return False
#     return True
        
    
    
# def onlyPrime(l1) :
#     l2 = []
#     for el in l1 :
#         if isPrime(el) : 
#             l2.append(el) 
    
#     return l2

# l1 = [1,23,1,4,14,23,636356,4,4,23,0,3]
# l2 = onlyPrime(l1) 
# print(l2)

# # 10

# def isPalindrome(string) :
#     return string == string[::-1]

# string1 = "apple is red" 
# string2 = "navjvan"

# print(isPalindrome(string1))
# print(isPalindrome(string2))

# # 11 

# import numpy as np

# m1 = np.arange(6).reshape(2,3)
# m2 = np.array([0]*m1.shape[0]*m1.shape[1]).reshape(m1.shape[1],m1.shape[0])

# for i in range(m1.shape[0]) :
#     for j in range(m1.shape[1]) :
#         m2[j,i] = m1[i,j]
    
# print(m2)

# 12

# d1 = {
#     "1" : "v1",
#     "2" : "v2",
#     "3" : "v3",
#     "4" : "v4",
#     "5" : "v5",
#     "6" : "v6",
#     "7" : "v7",
#     "8" : "v8"
# }

# d2 = {
#     "5" : "v5(1)",
#     "6" : "v6",
#     "7" : "v7",
#     "8" : "v8(1)",
#     "9" : "v9",
#     "10" : "v10",
#     "11" : "v11",
#     "12" : "v12"
# }

# d3 = d1 | d2

# print(d3)

# # 13


# l1 = [1,2,4,2,24,52,3,54,54,3,2,5,9,43]
# print(l1)
# l1.sort(reverse=True)
# print(l1)

# for i in l1 :
#     if(i==max(l1)) :
#         continue
#     print(i)
#     break


# # 14

# sentence = "The quick brown fox jumps over the lazy dog"
# sentence = sentence.lower()
# count = 0
# for i in sentence :
#     if i == 'a' or i=='e' or i=='i' or i=='o' or i=='u' :
#         count += 1

# print("vowel",count)
# print("consonant",len(sentence)-count)

# 15

# with open(r"practise\ass.html") as file :
#     data = file.read()
#     print("characters :",len(data))
#     print("words :",len(data.split(" ")))
#     print("lines :",len(data.split("\n")) + 1)
    
# # 16

# def remove(l1 , el) :
#     while(True) :
#         if el in l1 :
#             l1.remove(el)
#         else : break                 
#     return l1

# l1 = [1,2,3,4,5,6,6,6,6,67,8]
# l1 = remove(l1,6)
# print(l1)

# # 17

# class Student :
    
#     def _init_(self , name , subject , marks):
#         self.name = name
#         self.marks = marks
#         self.subject = subject
        
    
#     def printData(self) :
#         print(self.name , self.subject ,self.marks)

# s1 = Student("mahesh","python","86")
# s2 = Student("suresh","dld","68")
# s3 = Student("ramesh","coa","69")

# s1.printData()
# s2.printData()
# s3.printData()

# 18

l1 = [x*x for x in range(1,11)]
print(l1)

# 19

l1 = [1,2,3,4,5,6]

temp = l1[-1]
for i in range(len(l1)-1,0,-1) :
    l1[i] = l1[i-1]
    
l1[0] = temp
print(l1)