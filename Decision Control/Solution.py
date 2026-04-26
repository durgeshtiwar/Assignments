# var_1 = int(input("Enter any No. for your reference"))
# if(var_1>0):
#   print("Given No. is Positive.")
# else:
#   print("Given No. is non-Postive.")
  
  
var_1 = int(input("Enter any no. for your reference...."))
if(var_1%100 < 99 and var_1//100 < 9):
  print("Three digit....")
else:
  print("Not a three digit")