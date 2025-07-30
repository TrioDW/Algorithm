word = list(input())

cur = int(len(word) / 10)


for i in range(cur):
    temp = word[i * 10: (i+1) * 10]
    result = "".join(temp)
    print(result)
    
if (len(word) / 10) != cur:
    temp = word[cur * 10:]
    result = "".join(temp)
    print(result)