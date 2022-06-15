for _ in range(int(input())):
    n,k=map(int,input().split())
    if n//5==n/5:
        n1=n//5
    else:
        n1=n//5+1
    if k//5==k/5:
        k1=k//5
    else:
        k1=k//5+1
    print(n1-k1)
