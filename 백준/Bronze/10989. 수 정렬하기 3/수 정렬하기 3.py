import sys
input = sys.stdin.readline
num = [0] * 10001

N = int(input())
for i in range(N) :
  s = int(input())
  num[s] += 1

for i in range(10001) :
  if num[i] != 0 :
    for w in range(num[i]) :
      print(i)