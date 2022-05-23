def  countSetBits(n):
    count = 0
    while n:
        count += n & 1
        n >>= 1
    return count

for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    temp=0
    for i in range(len(l)):
        temp=temp|l[i]  
    print(countSetBits(temp))