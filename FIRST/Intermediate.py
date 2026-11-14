Units = int(input("Enter the Electricity bill....."))
Total_Bill = 0
if(Units <= 0 ):
  print("No Payment due.....")
if(Units>200):
  print("First 100 Units bill is", 500)
  print("Next 100 Units bill is", 700)
  Total_Bill = Total_Bill + (Units - 200)*10
  print("Remaining",(Units - 200),"Units bill is", Total_Bill)
  Total_Bill = Total_Bill + 700 + 500
  print("Total Electricity bill is",Total_Bill)
elif(Units>100 and Units<=200):
  print("First 100 Units bill is", 500)
  Total_Bill = Total_Bill + (Units - 100)*7
  print("Remaining",(Units - 100),"Units bill is", Total_Bill)
  Total_Bill = Total_Bill + 500
  print("Total Electricity bill is",Total_Bill)
elif(Units>0 and Units<=100):
  Total_Bill = Total_Bill + Units*5
  print("Total Electricity bill is",Total_Bill)