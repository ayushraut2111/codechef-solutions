for _ in range(int(input())):
    n,x1,y1,x2,y2=map(int,input().split())
    ans,ans2,ans3,res=0,0,0,0
    if(x2 <=n and y2<=n):
        ans2=min(min(n-x2+1,x2),min(n-y2+1,y2))
    if( x1 <= n and y1 <=n ):
        ans=min(min(n-x1+1,x1),min(n-y1+1,y1))
    if(x1 <=n and y1<=n and x2<=n and y2 <=n):
        ans3=abs(x1-x2)+abs(y1-y2)
    res=min(ans3,ans2+ans)
    print(res)