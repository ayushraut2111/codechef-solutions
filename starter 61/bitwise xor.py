for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    ans=0
    a=[]
    for i in l:
        if len(a)==0:
            a.append(i)
        else:
            if i!=a[len(a)-1]:
                ans+=1
                del a[len(a)-1]
            else:
                a.append(i)
    while len(a)>=2:
        y=a.pop(len(a)-1)
        if y==a[len(a)-1]:
            a.pop()
            a.append(0)
        else:
            ans+=1
            a.pop(len(a)-1)
    print(ans)

