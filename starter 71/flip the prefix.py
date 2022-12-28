for _ in range(int(input())):
    n,k=map(int,input().split())
    count=0
    s=input()
    s=list(s)
    ans=9999999999
    a=[0 for i in range(n)]
    for i in range(1,n):
        if s[i-1]!=s[i]:
            count+=1
            a[i]=count
        else:
            a[i]=count
    for i in range(n-1,-1,-1):
        if (i-(k-1))<0:
            break
        c=a[i]-a[i-k+1]
        if s[i]=='0':
            c+=1
        ans=min(ans,c)
    print(ans)


