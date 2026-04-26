while(True):
  var_1 = int(input("Enter any no. like 1, 2, 3, 4.... and for exit press 0....."))
  match(var_1):
    case(1):
      print("enter any two for addition...")
      varAdd_1 = int(input("First..."))
      varAdd_2 = int(input("Second..."))
      result = varAdd_1 + varAdd_2
      print("Addition of given two no. is..", result)
    case(2):
      print("enter any to for Subtraction...")
      varSub_1 = int(input("First..."))
      varSub_2 = int(input("Second..."))
      result = varSub_1 - varSub_2
      print("Subtraction of given two no. is..", result)
    case(3):
      print("enter any to for Multiplication...")
      varMulti_1 = int(input("First..."))
      varMulti_2 = int(input("Second..."))
      result = varMulti_1 * varMulti_2
      print("Multiplication of given two no. is..", result)
    case(4):
      print("enter any to for Division...")
      varDiv_1 = int(input("First..."))
      varDiv_2 = int(input("Second..."))
      result = varDiv_1 / varDiv_2
      print("Division of given two no. is..", result)
    case(0):
      exit()