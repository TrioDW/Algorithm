import sys

num = [0] * 10001

N = int(sys.stdin.readline())
for i in range(N) :
  s = int(sys.stdin.readline())
  num[s] = num[s] + 1

for i in range(10001) :
  if num[i] != 0 :
    for w in range(num[i]) :
      print(i)