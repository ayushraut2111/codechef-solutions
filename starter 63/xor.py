for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    d={}
    for i in a:
        if i not in d:
            d[i]=1
        else:
            d[i]+=1
    if len(d)==1:
        print(0)
    else:
        h=[0 for i in range(n+1)]
        maxi=0
        for key,value in d.items():
            h[key]=value
            maxi=max(maxi,value)
        # g=[]
        # for i in range(len(h)-1):
        #     j=i+1
        #     if h[i][0]%2==0 and h[j][0]==(h[i][0]+1):
        #         g.append((h[i][1]+h[j][1]))
        # if len(g)==0:
        #     print(len(a)-maxi)
        # else:
        #     print(len(a)-max(g))
        ans=0
        for i in range(len(h)-1):
            if i^(i+1)<=1:
                ans=max(ans,h[i]+h[i+1])
        print(len(a)-max(ans,maxi))