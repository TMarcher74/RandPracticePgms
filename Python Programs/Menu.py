'''
Name: Customer to Kitchen order application
Date: 15/9/2021
'''

print("Welcome to ABCD Restruant, here is your Menu.")

print("1. Idli")
print("2. Dosa")
print("3. Manglore Bun")
print("4. Poori")

MainChoice= int(input("Type in the number of your desired food: "))

if(MainChoice==3):
    Meal= "Manglore Bun"
elif(MainChoice== 4):
    Meal= "Poori"

if(MainChoice== 1):
    print("Which type of Idli would you wish to order?")
    print("1. Akki Idli")
    print("2. Rava Idli")
    print("3. Button Idli")
    print("4. Thatte Idli")

    Idli= int(input("Type in the number of your choice: "))
    if(Idli== 1):
        print("Customer has ordered Akki Idli")
    elif(Idli== 2):
        print("Customer has ordered Rava Idli")
    elif(Idli== 3):
        print("Customer has ordered Button Idli")
    elif(Idli== 4):
        print("Customer has ordered Thatte Idli")
    else:
        print("Customer has entered an invalid order")

elif(MainChoice== 2):
    print("Which  type of Dosa would you like to order?")
    print("1. Masala Dosa")
    print("2. Rava Dosa")
    print("3. Set Dosa")
    print("4. Onion Dosa")

    Dosa= int(input("Type in the number of your choice: "))
    if(Dosa== 1):
        print("Customer has ordered Masala Dosa ")
    elif(Dosa== 2):
        print("Customer has ordered Rava Dosa")
    elif(Dosa== 3):
        print("Customer has ordered Set Dosa")
    elif(Dosa== 4):
        print("Customer has ordered Onion Dosa")
    else:
        print("Customer has entered an invalid order")

elif(MainChoice== 3) or (MainChoice== 4):
    print("What do you want with your", Meal)
    print("1. Sagu")
    print("2. Chutney")
    print("3. Chutney and Sagu")

    Sides= int(input("Type in the number of your choice: "))
    if(Sides== 1):
        print("Customer choose Sagu with", Meal)
    elif(Sides== 2):
        print("Customer choose Chutney with", Meal)
    elif(Sides== 3):
        print("Customer choose Chutney and Sagu with", Meal)
    else:
        print("Customer has entered an invalid order")
else:
    print("Customer was not satisfied with the options :(")
