for _ in range(int(input())):
    n,m,k,x=map(int,input().split())
    p=x%((n*k)+m)
    if p==0:
        print("YES")
    elif p-(n*(k-1))>0:
        print("YES")
    else:
        print("NO")