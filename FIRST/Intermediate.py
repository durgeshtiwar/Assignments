#1.
# Units = int(input("Enter the Electricity bill....."))
# Total_Bill = 0
# if(Units <= 0 ):
#   print("No Payment due.....")
# if(Units>200):
#   print("First 100 Units bill is", 500)
#   print("Next 100 Units bill is", 700)
#   Total_Bill = Total_Bill + (Units - 200)*10
#   print("Remaining",(Units - 200),"Units bill is", Total_Bill)
#   Total_Bill = Total_Bill + 700 + 500
#   print("Total Electricity bill is",Total_Bill)
# elif(Units>100 and Units<=200):
#   print("First 100 Units bill is", 500)
#   Total_Bill = Total_Bill + (Units - 100)*7
#   print("Remaining",(Units - 100),"Units bill is", Total_Bill)
#   Total_Bill = Total_Bill + 500
#   print("Total Electricity bill is",Total_Bill)
# elif(Units>0 and Units<=100):
#   Total_Bill = Total_Bill + Units*5
#   print("Total Electricity bill is",Total_Bill)

# 2.
# Available_balance = 10000
# Withdrawal_balance = int(input("Enter the amount you want to withdrawal"))
# if(Available_balance<Withdrawal_balance or Withdrawal_balance == 0):
#   print("You Can't Enter Zero or Greater amount of Your Available balance....")
# elif(Withdrawal_balance % 100 != 0):
#   print("You can enter only multiple of 100")
# else:
#   print("Available Balance:",Available_balance)
#   print("Withdrawal Balance:",Withdrawal_balance)
#   Available_balance = Available_balance - Withdrawal_balance
#   print("Transaction Successful!")
#   print("Remaining Balance:",Available_balance)

# 3.
# Var_1 = int(input("Enter a no."))
# for i in range(2,Var_1//2):
#   if(Var_1 % i == 0):
#     print("this is not a prime no.")
#     break
# else:
#   print("this is a prime no.")

# Var_1 = int(input("Enter the range"))
# count = 0
# for i in range(2, Var_1 + 1):
#   for j in range(2, i//2 + 1):
#     if(i % j == 0):
#       # print(i,"n prime")
#       break
#   else:
#     count = count + 1
#     print(i)
# print("Total no of prime no. is :", count)

row = int(input("Enter the no. of row"))
column = int(input("Enter the no. of column"))

for row in range(1, row + 1):
  for column in range(1, row+1):
    print("*", end= " ")
  print(" ")
    