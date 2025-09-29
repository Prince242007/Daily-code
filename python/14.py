# class Car:
#     def __init__(self, brand, model):
#         self.brand = brand  # Attribute
#         self.model = model  # Attribute
#     def car_details(self):
#         return f"Car: {self.brand}, Model: {self.model}"
# my_car = Car("Toyota", "Corolla")
# print(my_car.car_details())  


# class Rectangle:
#     def __init__(self, width, height):
#         self.width = width
#         self.height = height
     
#     def area(self):
#         return self.width * self.height
    
#     def perimeter(self):
#         return 2 * (self.width + self.height)

# rect = Rectangle(10, 5)
# print(f"Area: {rect.area()}")  # Output: Area: 50
# print(f"Perimeter: {rect.perimeter()}")  # Output: Perimeter: 30


# class BankAccount:
#     def __init__(self, account_holder, balance):
#         self.account_holder = account_holder
#         self.__balance = balance  
#     def deposit(self, amount):
#         self.__balance += amount
#     def withdraw(self, amount):
#         if amount <= self.__balance:
#             self.__balance -= amount
#         else:
#             print("Insufficient funds")
#     def get_balance(self):
#         return self.__balance
# account = BankAccount("John", 1000)
# account.deposit(500)
# print(account.get_balance())  
# account.withdraw(700)
# print(account.get_balance())


# class Animal:
#     def __init__(self, name):
#         self.name = name
#     def speak(self):
#         return "I am an animal."
# class Dog(Animal):
#     def speak(self):
#         return f"{self.name} says Woof!"
# class Cat(Animal):
#     def speak(self):
#         return f"{self.name} says Meow!"
# dog = Dog("Buddy")
# cat = Cat("Whiskers")
# print(dog.speak())  
# print(cat.speak())



# class Polygon:
#     def render(self):
#         print("Rendering Polygon...")
# class Square(Polygon):
#     def render(self):
#         print("Rendering Square...")
# class Circle(Polygon):
#     def render(self):
#         print("Rendering Circle...")
# s1 = Square()
# s1.render()
# c1 = Circle()
# c1.render()

# from abc import ABC, abstractmethod
# class Shape(ABC):
#     @abstractmethod 
#     def area(self):
#         pass

# class Circle(Shape):
#     def __init__(self, radius):
#         self.radius = radius

#     def area(self):
#         return 3.14 * self.radius * self.radius

# circle = Circle(5)
# print(f"Area of the circle: {circle.area()}")  


# Post lab :-

# class Circle :
#     def area(self,r):
#         self.area = 3.14*r*r
#         return self.area
#     def parameter(self,r):
#         self.parameter = 2*3.14*r
#         return self.parameter
# r=int(input("Enter the radius :- "))
# circle=Circle()
# print("Area Of the circle :- ", circle.area(r))
# print("Parameter of the circle :- ", circle.parameter(r))



class Book:
    def __init__(self,title,author,price):
        self.title = title
        self.author= author
        self.price =price

    def display(self):
        return  self.title, self.author , self.price  

    def discount(self,dis):
        return self.title, self.author , self.price*0.9
    
book1=Book("Bad luck","Prince",2000)
book2=Book("Good luck","Prince",200)
print("Book1 Details :- ")
print("Before Discount :- ", book1.display())
print("After Discout :- ",book1.discount(10))
print("Book2 Details :- ")
print(book2.display())