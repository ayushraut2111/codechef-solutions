for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    ans=0
    p=[]
    for i in range(n):
        p.append([a[i],b[i]])
    for i in range(n):
        if p[i][0]>=x:
            ans+=p[i][1]
    print(ans)