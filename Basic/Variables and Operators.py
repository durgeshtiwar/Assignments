#1. 
# Name = "Durgesh Tiwari"
# Age = "22.9"
# City = "Delhi"
# Profession = "MIS Executive"
# print(Name, Age, City, Profession)


#2.
# Var_1 = int(input("Enter First no."))
# Var_2 = int(input("Enter Second no."))
# print("Addition is", Var_1+Var_2)
# print("Multiplication is", Var_1*Var_2)
# print("Division is", Var_1/Var_2)
# print("Subtraction is", Var_1-Var_2)
# print("Module is", Var_1%Var_2)


# 3.
# Var_1 = int(input("Enter First no."))
# Var_2 = int(input("Enter Second no."))
# Var_3 = int(input("Enter Third no."))

# if(Var_1>Var_2 and Var_1>Var_3):
#   print(Var_1,"is greatest")  
# elif(Var_2>Var_3):
#   print(Var_2, "is greatest")
# else:
#   print(Var_3, "is greatest")

year = int(input("Enter a year"))
if(year%100 == 0):
  if(year%400 == 0):
    print("This is a leap year")
  else:
    print("This is not a leap year")  
elif(year%4 == 0):
  print("This is a leap year")
else:
  print("This is not a leap year")
  