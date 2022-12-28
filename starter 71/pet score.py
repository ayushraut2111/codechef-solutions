for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))[:n]
    l=[0 for i in range(100002)]
    for i in range(n):
        l[a[i]]+=1
    count=0
    for i in range(100002):
        if l[i]%2:
            print("NO")
            count=1
            break
    if count==1:
        continue
    print("YES")
