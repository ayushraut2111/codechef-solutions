for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    x=-1
    for i in range(n):
        if a[i]==k:
            x=i
            break
    if n==1 and x>-1:
        print("YES")
        continue
    if x<0 or x>n-2:
        print("NO")
        continue
    print("YES")
        