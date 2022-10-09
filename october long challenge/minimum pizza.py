from math import ceil

for _ in range (int(input())):
    a,b=map(int,input().split())
    print(ceil(a*b/4))