while(True) :
  num = list(map(int, input().split()))

  num.sort()
  
  if num[0] == 0 & num[1] == 0 & num[2] == 0 :
    break

  else :
    if num[0] == 0 | num[1] == 0 | num[2] == 0 :
      print("wrong")
      
    elif num[0]*num[0] + num[1]*num[1] == num[2]*num[2] :
      print("right")

    else :
      print("wrong")