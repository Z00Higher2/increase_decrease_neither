#This program takes three numbers then deci wheter the numbers are increasing or decreasing by order 
# if not then the program prints out neither

num_1 = int(input("Enter the first number: "))
num_2 = int(input("Enter the second number: "))
num_3 = int(input("Enter the third number: "))

if num_1 > num_2 and num_2 > num_3:
    print("Decreasing")
elif num_1 < num_2 and num_2 < num_3:
    print("Increasing")
else:
    print("Neither numbers are increasing or decreasing")