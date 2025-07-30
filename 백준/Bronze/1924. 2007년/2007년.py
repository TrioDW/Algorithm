m, d = map(int, input().split())

days = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]


for i in range(0, m-1):
    d += days[i]
    
dayofweek = ["SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"]

print(dayofweek[d % 7])