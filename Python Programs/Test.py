'''
Name: Blueprint
Creator: Tarun T
Date: 8/9/2021
'''


# print("Hello world!")

# #Defining variables
# myVariable= 60+9
# print("Your Pre-defined Variable is:",myVariable)

# #Using different number systems
# print(bin(2))
# print(oct(8))
# print(hex(16))

# #Using Boolean values
# myBoo= 3>4
# print(myBoo)

# #Knowing the type of the value
# myNum= 10.4
# print(type(myNum))

# #Knowing what the computer reads
# print(ord("T")-10)
# myBool= "A"<"T"
# print(myBool)

# #Conveting data types
# myVal= 12.4
# print(int(myVal))

# #Working with date and time
# import datetime
# print(datetime.datetime.now())
# print(datetime.datetime.now().date().year)
# print(datetime.datetime.now().time().microsecond)

# #Using Operators
# print(~3)       #Bit inversion

# #Using complex numbers
# myComplex= 7+1j
# print(myComplex.real, myComplex.imag)

# #Arithmetic Operators
# print(2+3)
# print(-1-1)
# print(4*1)
# print(-6/1)
# print(12//4)        #Floor Division
# print(-(14&6))      #Returns remainder
# print(2**5)         #Exponent
# print(-0.11e10)     #Assigning exponents to 10

# #Relational Operators
# print(1==1)     #Equal-to
# print(1!=1)     #Not Equal-to
# print(1<2)
# print(1>=2)

# #Logical Operators
# myVar1= 2>1
# myVar2= 3>1
# print(myVar1 or myVar2)
# print(not myVar2)
# print(myVar1 and myVar2)

# #Bitwise Operators
# print(myVar1 ^ myVar2)      #XOR
# print(myVar1 | myVar2)      #OR
# print(myVar1 & myVar2)      #AND
# print(~myVar1)              #1's complement
# print(myVar2<<2)            #Left shift
# print(myVar2>>2)            #Right shift

# #Assignment Operators
# MyVar= 5
# MyVar+= 3
# print(MyVar)
# MyVar-= 3
# print(MyVar)
# MyVar*= 3
# print(MyVar)
# MyVar/= 3
# print(MyVar)
# MyVar%= 3
# print(MyVar)
# MyVar**= 3
# print(MyVar)
# MyVar//= 3
# print(MyVar)

# #Membership Operators
# urVar1= "Hello"
# urVar2= "Hello there, General Kenobi!"
# print(urVar1 in urVar2)         #Checks if A is included in B or not
# print(urVar1 not in urVar2)

# #Identity Operators
# ourVar1= "Bob"
# ourVar2= 74
# print(ourVar1 is ourVar2)       #Checks the type
# print(ourVar1 is not ourVar2)

# #Defining Fuctions
# def Hello():
#     print("Your wish is my command")
# Hello()

# def Hello1(t):      #Giving the function the same argument
#     print(t)        #Takes the arguement from the main function to output
# Hello1("Welcome aboard captain, all systems online")
# Hello1(123)

# def say_hello(name, emoji):
#     print(f'Hello there {name}, {emoji}')
# putin = input('Your name and choice of emoji: ')
# x=0
# for elem in putin:
#     x=x+1
#     if(elem==' '):
#         break
# #A very elaborate way of trying to identify the name and the emoji
# say_hello(putin[0:x], putin[x:])
# say_hello(emoji='UwU', name='I am going to regret this later')

# def Hello2(s= "No input given"):    #Setting a default value
#     print(s)
# Hello2()
# Hello2("Pss pss")

# def AddIt(x,y):
#     print(x, "+", y, "=", (x+y))
# AddIt(1,2)

# def Hello3(ArgCount, *VarArgs):     #Setting up variable number of argoments
#     print("You passed", ArgCount, "argument(s)")
#     for Arg in VarArgs:
#         #Arg is a variable and takes the value out of VarArg one at a time
#         print(Arg)
# Hello3(2, "Henlo", 456)

# def hello4(x,y):    #Using return
#     return x+y
# print(hello4(1,2))
# print(hello4(1,2)==hello4(2,1)) 
# #Using return adds more flexibilty to the code
# #Also can be used to assign values to variables, lise so...
# var = hello4(5,5)
# print(var)

# #Doc strings
# def a_func(duh):
#     '''
#     Info: You can read this when you hover over the called instance
#     '''
#     print(duh)

# a_func('Works')
# help(a_func)
# print(a_func.__doc__)       #Just different ways to print the info part in the function

# #Input function
# Name= str(input("Give me a name: "))
# print("Your name is:", Name)

# #*args, **kwargs
# def super_func(*args, **kwargs):
#     total=0
#     for items in kwargs.values():
#         total += items
#     return sum(args) + total

# print(super_func(1,2,3,4,5, num1=5, num2=10))

#Using Walrus operator, but actually looks more like a you know what
# a = [1,2,3,4,5,6]
# if((n := len(a)) > 5):
#     print(f"The list is too long, it contains {n} elements")
#     #The 'f' in the print statement means formatted strings, called f-string

# #Using if-else statements
# TestMe1= int(input("Type a random number: "))
# if TestMe1 >=74:
#     print("Your number is more than 74")
# else:                                       #else line isn't compulsory
#     print("Your number is less than 74")

# TestMe2= float(input("Type a number between 0 and 10: "))
# if (TestMe2 >0) and (TestMe2 <10):
#     print("You typed the number:", TestMe2)
# else:
#     print("The number you typed does not match the parameters.")

# #Using if-elif
# print("1. Red")
# print("2. Blue")
# print("3. Green")

# Choice= int(input("Colour colour, which colour do you choose ?: "))
# if (Choice== 1):
#     print("Your colour is Red")
# elif (Choice== 2):
#     print("Your colour is Blue")
# elif (Choice== 3):
#     print("Your colour is Green")
# else:
#     print("Invalid choice")

# #Nested statements(Makind decisions in levels is called Nesting)
# #Using multiple if/if-else statements
# first=  int(input("Type the first number from 1 to 100: "))
# second= int(input("Type the second number from 1 to 100: "))
# if (first >=0) and (first <=100):
#     if(second >=0) and (second <=100):
#         print("Your secret number is: ", first*second)
#     else:
#         print("Incorrect first or second number")
# else:
#     print("Incorrect first number")

# #Using for statement for known number of repetitive tasks
# #Using while statement for unknown number of repetitive tasks
# for Letter1 in "Howdy":
#     print(5)

# LetterNum1= 1
# for Letter2 in range(1,20,2):
#     print("Letter", LetterNum1, "is", Letter2)
#     LetterNum1+= 1

# for i in range(97, 123):
#     print("{:c}".format(i))
#     #Really smart, using ASCII numbers to convert them to letters since only integers are allowed in range()


#Using Break statement to control execution
# Value1= str(input("Type a word less than 6 letter: "))
# LetterNum2= 1

# for Letter3 in Value1:
#     if LetterNum2 > 6:
#         print("The string is too big!")
#         break
#     print("Letter", LetterNum2, "is", Letter3)
#     LetterNum2+= 1
    
# #Using continue statement to control execution
# print("Using continue statement on Chocolate")
# LetterNum3= 1
# for Letter4 in "Chocolate":
#     if Letter4== "o":
#         continue            #Skips the suceeding steps, you can see that VS has lightened it
#         print("Encountered 'o', not processed")
#     print("Encountered", Letter4,  "for", LetterNum3, ",successfully processed")
#     LetterNum3+= 1
# #Encountered o is on purpose put below continue to remember the difference between break, continue and pass

# #Using pass statement to control execution
# #Similar to continue but allows to complete the code in if statement
# #Pass is used in developing codes where we have nothing to type in a loop but we need fill something in it.
# print("Using pass statement on Balloon")
# LetterNum4= 1
# for Letter5 in "Balloon":
#     if Letter5== "o":
#         pass
#         print("Encountered 'o', not processed")
#     else: 
#         print("Encountered", Letter5,"for", LetterNum4, ",successfully processed")
#     LetterNum4+= 1

# #Using else statement
# Value2= str(input("Type a word less than 7 letters: "))
# LetterNum5= 1
# for Letter6 in Value2:
#     print("Letter", LetterNum5, "is", Letter6)
#     LetterNum5+= 1
# else:
#     print("The string is blank or too big")

# #Using while statements
# Sum= 0
# while Sum < 6:
#     print(Sum)
#     Sum+= 1

# #Else wont execute with a break statement, thats why it is used
# while 1:
#     print("This is an infinite loop")
# else:
#     print("This executes after the while loop")

#Using Nested loop statements
# X= 1
# Y= 1
# print('{:>4}'.format('0'), end= '\t|')
# for X in range(1, 10-1):
#     print('{:>4}'.format(X), end='\t')
# print()

# print('--------|---------------------------------------------------------------------------')
# for X in range(1,10-1):
#     print('{:>4}'.format(X), end='\t|')
#     while Y<= 10:
#         print('{:>4}'.format(X*Y), end='\t')
#         Y+= 1
#     print('\n \t|')
#     Y= 1

# #Printing a series of numbers using for loop
# #initial, final, step value
# for a in range(1,20,2):     #Odd numbers
#     print(a)

# for b in range(0,-20,-2):   #Negative even numbers
#     print(a)

# for c in range(1,20):       #Squares of numbers
#     print(c*c)

# a= int(input("Factorial of: "))         #Factorial of a number
# f=1
# for x in range(1, a+1):
#     f=f*x
#     print(f)

# g= int(input("Fibonacci series limit: "))  #Fibonacci series
# a=0
# b=1
# for y in range(1,g+1):
#     c= a+b
#     print(c)
#     a= b
#     b= c

# #Dealing with Errors also called Exceptions
# #Handling a single Exception
# #ValueError
# try:
#     Value3 = int(input("Type a number between 1 and 10: "))
# except ValueError:
#     print("You must type a number between 1 and 10!")
# else:
#     if(Value3 > 0) and (Value3 <=10):
#         print("You typed:", Value3)
#     else:
#         print("The value you typed is incorrect!")

# #KeyboardInterrupt
# try:
#     Value4 = int(input("Type a number between 1 and 10: "))
# except ValueError:
#     print("You must type a number between 1 and 10!")
# except:                                         #Default Except must come last
#     print("Bro...wth")
# else:
#     if(Value4 > 0) and (Value4 <=10):
#         print("You typed:", Value4)
#     else:
#         print("The value you typed is incorrect!")

# #Exception arguments
# import sys
# try:
#     File= open('myfile.txt')
# except IOError as e:
#     print("Error opening file!\r\n" +
#     "Error Number: {0}\r\n".format(e.errno) +   #Provides error number
#     "Error Text: {0}".format(e.strerror))       #Contains error info
# else:
#     print("File opened as expected")
#     File.close();

# #Obtaining a list of exception arguments
# import sys
# try:
#    File = open('myfile.txt')
# except IOError as e:
#    for Entry in dir(e):
#       if (not Entry.startswith("_")):
#          try:
#             print(Entry, " = ", e.__getattribute__(Entry))
#          except AttributeError:
#             print("Attribute ", Entry, " not accessible.")
# else:
#    print("File opened as expected.")
#    File.close();

# #Handling multiple exceptions with a single except clause
# try:
#     Value= int(input("Type a number between 1 and 10: "))
# except(ValueError, KeyboardInterrupt):
#     print("You must type a number between 1 and 10!")
# else:
#     if(Value>0) and (Value>=10):
#         print("YOu typed", Value)
#     else:
#         print("The value you typed is incorrect!")

# #Handling multiple exceptions with multiple except clauses
# try:
#    Value = int(input("Type a number between 1 and 10: "))
# except ValueError:
#    print("You must type a number between 1 and 10!")
# except KeyboardInterrupt:
#    print("You pressed Ctrl+C!")
# else:
#    if (Value > 0) and (Value <= 10):
#       print("You typed: ", Value)
#    else:
#       print("The value you typed is incorrect!")

# #Handling more specific exceptions
# try:
#     Value1 = int(input("Type the first number: "))
#     Value2 = int(input("Type the second number: "))
#     Output = Value1 / Value2
# except ValueError:
#     print("You must type a whole number!")
# except KeyboardInterrupt:
#     print("You pressed Ctrl+C!")
# except ArithmeticError:
#     print("An undefined math error occurred.")
# except ZeroDivisionError:
#     print("Attempted to divide by zero!")
# else:
#     print(Output)

# #Nested exception handling
# TryAgain = True
# while TryAgain:
#     try:
#         Value = int(input("Type a number: "))
#     except ValueError:
#         print("You must type a whole number!")
#         try:
#             DoOver = input("Try again (y/n)?""\n")
#         except:
#             print("Okay, see you next time!")
#         else:
#             if(str.upper(DoOver) != "Y"):
#                 #str.upped makes it possible to receive y or Y
#                 print("Bye")
#                 TryAgain = False
#     except KeyboardInterrupt:
#         print("You pressed Cmd+C!" "\n" "See you next time!")
#         TryAgain = True
#     else:
#         print(Value)
#         TryAgain = False

# #Raising exceptions on purpose
# try:
#     raise ValueError
# except ValueError:
#     print("ValueError Exception")

# #Passing error information
# try:
#     Ex = ValueError()
#     Ex.strerror = "Value must be within 1 and 10"
#     raise Ex
# except ValueError as e:
#     print("ValueError exception!", e.strerror)

# #Creating custom exception
# class CustomValueError(ValueError):
#    def __init__(self, arg):
#       self.strerror = arg
#       self.args = {arg}
# try:
#    raise CustomValueError("Value must be within 1 and 10.")
# except CustomValueError as e:
#     print("CustomValueError exception!", e.strerror)

# #Using finally
# import sys
# try:
#     #raise ValueError   #Comment this line for different output
#     print("Raising an exception.")
# except ValueError:
#     print("ValueError exception!")
#     sys.exit()
# finally:
#     print("Taking care of last minute details.")
# print("This code wont be executed.")
# '''
# #Interacting with packages

# #We can define our own code and import it into python's packages to be
# #used in all the other files.
# #Two ways to import packages are :-
# #1.import- To import an entire package.
# #2.from...import- To selectivley import individual package attributes.
# '''
# import MyPack
# MyPack.Kenobi("Kenobi")
# MyPack.Anakin("Anakin")

# from MyPack import Kenobi
# Kenobi("High ground")
# #Anakin("")

# import sys
# for p in sys.path:
#     print(p)

# #Using directory command
# import MyPack
# print(dir(MyPack))
# print(dir(MyPack.Anakin))
# print(MyPack.Anakin.__sizeof__())

#Using Pydoc command in terminal
#Enter python -m pydoc for the list of possible commands

# #Working with strings
# print('Single quotes', "Double quotes")
# print("""This is a multiline string,
# using triple quotes.\n""")

# #Special characters
# print("Part of this text\r\nis on the next line.")
# print("This is an A with a grave accent: \xC0")
# print("This is a drawing character: \u2562")
# print("This is a pilcrow: \266")
# print("This is a division sign: \xF7")

# #Selecting individual characters (Kinda like arrays)
# MyString = "Riptide"
# print(MyString[3])

# y=0
# for x in MyString:
#     print(MyString[y])
#     y+= 1

# for x in MyString:
#     print(x)

# print(MyString[0:7])
# print(MyString[:7])
# print(MyString[:3]+MyString[3:])

# #Slicing and Dicing strings
# MyString1 = "   A An The  "
# print(MyString1.upper())
# print(MyString1.strip())
# print(MyString1.strip().center(100, "_"))
# print(MyString1.isdigit())
# print(MyString1.istitle())
# print(max(MyString1))
# print(MyString1.split())

# #Locating a value in string
# SearchMe = "Roses are red, violets are blue, Who are you?"
# print(SearchMe.find("are"))
# print(SearchMe.rfind("are"))
# print(SearchMe.count("are"))
# print(SearchMe.startswith("Roses"))
# print(SearchMe.endswith("!"))
# print(SearchMe.replace("Who", "How").replace("you", "they"))

# #Formatting strings
# Formatted = "{:d}"
# print(Formatted.format(7000))
# Formatted = "{:,d}"
# print(Formatted.format(7000))
# Formatted = "{:^15,d}"
# print(Formatted.format(7000))
# Formatted = "{:*^15,d}"
# print(Formatted.format(7000))
# Formatted = "{:*^15.2f}"
# print(Formatted.format(7000))
# Formatted = "{:*>15X}"
# print(Formatted.format(7000))
# Formatted = "{:*<#15x}"
# print(Formatted.format(7000))
# Formatted = "A {0} {1} and a {0} {2}."
# print(Formatted.format("blue", "car", "truck"))

# #Managing Lists
# List1 = ["zero", 1, "Two", 3]
# print(List1)
# print(List1[0])
# print(List1[:3])
# print(List1[::-1])  #To reverse it and it wont affect the list, only makes a copy and prints it
# print(list(range(1,10)))
# brrr = ' '
# print(brrr.join(['Row','row','row','your','boat'])) #Can simply be written as ' '.join

# x,y, *other,z = [1,2,3,4,5,6]   #*is used for unpacking
# print(x,y,other,z)

# #Looping thru Lists
# List2 = [0,1,2,3,4,5,6,7,8,9,0]
# y = 1
# for x in List2:
#     #Formatted1 = '{:^50d}'
#     #For some reason y in place of 50 doesn't work
#     #print(Formatted1.format(x))
#     print("{:>"f"{y}""}".format(x))     #Found on stack, both work
#     print(str(x).rjust(y))
#     y += 1

# #Modifying Lists
# List3 = []
# print(len(List3))
# List3.append(2)
# print(List3)
# List3.insert(0,1)   #(Location, Object)
# print(List3)
# List4 = List3.copy()
# print(List4)
# List3.extend(List4)
# print(List3)
# List3.pop()
# print(List3)
# List3.remove(2)
# print(List3)
# List3.clear()
# print(List3)
# print('1' in List3)     #To see the list, type List. to see the available options

# #Searching Lists
# Colours = ["RED", "ORANGE", "YELLOW", "GREEN", "BLUE", "RED"]
# ColourSelect = ""
# while str.upper(ColourSelect) != "QUIT":
#     ColourSelect = input("Please type a color name: ").upper()
#     #Thanks to stackoverflow
#     if (Colours.count(ColourSelect) >= 1):
#         print("The color exists in the list!")
#     elif (str(ColourSelect) != "QUIT"):
#         print("The list doesn't contain the color.")

# #If you want to print stuff without going to the next line, use end='' inside the print

# #Sorting Lists
# Colours1 = ["White", "Red", "Orange", "Blue", "Yellow", "Green", "Black"]
# for Item in Colours1:
#     print(Item, end= " ")
# print()
# Colours1.sort()
# #Clours are sorted based upon their RGB values (Not 100% sure)
# Colours1.reverse()
# for Item in Colours1:
#     print(Item, end=" ")
# print()

# Numbers = ["2", "4", "3", "1", "5"]
# for Item in Numbers:
#     print(Item, end= " ")
# print()
# Numbers.sort()
# for Item in Numbers:
#     print(Item, end=" ")
# print()

# #Printing Lists
# print(*Numbers, sep="\n")       #* helps to unpack the list
# Numbers.reverse()
# print("\n".join(Numbers))

# Numbers.reverse()
# for x in Numbers: print(x.rjust(25), sep="\n")
# #Prints on the right by 50 spaces, also everything is in a single line

# print('First: {0}\nSecond: {1}\nThird: {2}\nFourth: {3}\nFifth: {4}'.format(*Colours1))


# #Working with Counter Object
# from collections import Counter
# MyList = [1,2,3,4,2,4,1,4,4,5]
# ListCount = Counter(MyList)
# print(ListCount)
# for ThisItem in ListCount.items():
#    print("Item: ", ThisItem[0],
#          " Appears: ", ThisItem[1])
# print("The value 4 appears {0} times.".format(ListCount.get(4)))

# #Working with tuples
# #Tuples are like lists but immuntable and with normal brackets
# Tuple = ("Red", "Blue", "Green")
# print(Tuple)
# Tuple = Tuple.__add__(("Purple",))
# print(Tuple)
# Tuple = Tuple.__add__(("Yellow","Orange","Black"))
# print(Tuple)
# print(Tuple[4:])
# print(Tuple[6][0])

# #Working with sets
# #It is a collection of unordered unique objects
# my_set= {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5}
# print(my_set)

# your_set={1,2,3,4,5,6}
# our_set={4,5,6,7,8,9}

# print(your_set.difference(our_set)) #Can use difference_update
# our_set.discard(9)
# print(our_set)
# print(your_set.intersection(our_set))   #Use & instead of .intersection
# print(your_set.isdisjoint(our_set))
# print(your_set.issubset(our_set))
# print(your_set.issuperset(our_set))
# print(your_set.union(our_set))          #Use | instead of .union

# #Working with dictionaries
# #It has keys to which we can assign anything and calling the key gives its value
# Colours = {
# "Frodo": "Blue",
# "Sam": "Red",
# "Bilbo": "Yellow"
# }
# print(Colours)
# print(Colours["Sam"])
# print(Colours.keys())

# for Item in Colours:
#     print("{0} likes the colour {1}."
#         .format(Item, Colours[Item]))

# Colours["Gandalf"]="White"
# print(Colours)

# Colours.update({"Frodo":"Orange"})
# print(Colours)

# del Colours["Bilbo"]
# print(Colours)

# Colours.clear()
# print(len(Colours))
# print()

# #Replacing the switch statement with a dictionary
# def PrintBlue():
#     print("You chose blue!\r\n")
# def PrintRed():
#     print("You chose red!\r\n")
# def PrintOrange():
#     print("You chose orange!\r\n")
# def PrintYellow():
#     print("You chose yellow!\r\n")

# ColourSelect = {
#     0: PrintBlue,
#     1: PrintRed,
#     2: PrintOrange,
#     3: PrintYellow
# }

# Selection = 0
# while (Selection != 4):
#     print("0. Blue")
#     print("1. Red")
#     print("2. Orange")
#     print("3. Yellow")
#     print("4. Quit")
#     Selection = int(input("select a colour option: "))
#     if (Selection >= 0) & (Selection < 4):
#         ColourSelect[Selection]()

# #Creating Stacks using Lists
# MyStack = []
# StackSize = 4

# def DisplayStack():
#     print("Stack currently contains:")
#     for Item in MyStack:
#         print(Item)
# def Push(Value):
#     if len(MyStack) < StackSize:
#         MyStack.append(Value)
#     else:
#         print("Stack is full!")
# def Pop():
#     if len(MyStack) > 0:
#         MyStack.pop()
#     else:
#         print("Stack is empty.")

# Push(1)
# Push(2)
# Push(3)
# DisplayStack()

# while 1==1:
#     x = input("Number you want to push: ")
#     Push(x)
#     DisplayStack()
#     StackSize += 1

# #Working with queues
# import queue
# MyQueue = queue.Queue(4)

# while ~(MyQueue.full()):
#     y = input("Number to insert into the queue: ").upper()
#     if y == "QUIT":
#         quit()
#     else:
#         MyQueue.put(y)
#         print(MyQueue.full())

# #Working with deques
# import collections
# MyDeque = collections.deque("abcdef", 10)

# print("Starting state:")
# for Item in MyDeque:
#     print(Item, end=" ")
# print("\r\n\r\nAppending and extending right")
# MyDeque.append("g")
# MyDeque.extend("hi")

# for Item in MyDeque:
#     print(Item, end=" ")
# print("\r\n\r\nMyDeque contains {0} items.".format(len(MyDeque)))
# print("\r\nPopping right")
# print("Popping {0}".format(MyDeque.pop()))

# for Item in MyDeque:
#     print(Item, end=" ")
# print("\r\n\r\nAppending and extending left")
# MyDeque.appendleft("a")
# MyDeque.extendleft("bc")

# for Item in MyDeque:
#     print(Item, end=" ")
# print("\r\nMyDeque contains {0} items."
#         .format(len(MyDeque)))
# print("\r\nPopping left")
# print("Popping {0}".format(MyDeque.popleft()))

# for Item in MyDeque:
#     print(Item, end=" ")
# print("\r\n\r\nRemoving")
# MyDeque.remove("a")

# for Item in MyDeque:
#     print(Item, end=" ")

# #Enumerate- Returns the index value and the actual value
# for i, char in enumerate("Ho ho ho!"):
#     print(i, char)

# #Truthy and Falsey, anything thats empty, 0, null is considered as Falsey and rest is taken as Truthy

# #Classes
# class MyClass:
#     MyVar = 0

# MyInstance = MyClass()
# print(MyClass().MyVar)
# print(MyInstance.MyVar)
# print(MyInstance.__class__)
# print(dir(MyInstance))

# #Working with methods
# class YourClass:
#     def SayBye():
#         print("Goodbye!")
# print(YourClass.SayBye())

# class OurClass:
#     def SayThanks(self):
#         print("Thank you!")
# OurInstance = OurClass()
# print(OurInstance.SayThanks())
# #Calling a print within a print causes it to print "None"

# class TheirClass:
#     Greeting = ""
#     def __init__(self, Name= "there"):
#         self.Greeting = Name + "!"
#     def SayHello(self):
#         return("Hello {0}".format(self.Greeting))
#         #Using return instead of print removes the printing of "None"
# TheirInstance = TheirClass()
# print(TheirInstance.SayHello())

# TheirInstance2 = TheirClass("Percy")
# print(TheirInstance2.SayHello())

# class NoClass:
#     Greeting = "x"
#     def SayHello(self):
#         print("Hello {0}".format(self.Greeting))

# NoClass.Greeting = "g"

# #Scope - What variables can I access(Local and global variables)

# #Variables inside a function act as local variables and will have a different value to their global counterparts
# def counter():
#     total = 0
#     total += 1
#     return total
# #In this example total is reset to 0 everytime we run counter
# #So we use the term global to refer to global variables
# #And we use 'nonlocal' for variables outside the global but inside a funtion
# total = 0
# def counter():
#     global total
#     total += 1
#     return total
# counter()
# counter()
# print(counter())
# #But this is not the preferred way to do this, instead:
# total = 0
# def counter(total):
#     total += 1
#     return total
# print(counter(counter(counter(total))))

