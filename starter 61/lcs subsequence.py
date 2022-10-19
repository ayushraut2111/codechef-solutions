for _ in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    mp1={}
    mp2={}
    for i in a:
        if i not in mp1:
            mp1[i]=1
        else:
            mp1[i]+=1
    for i in b:
        if i not in mp2:
            mp2[i]=1
        else:
            mp2[i]+=1
    ans=0
    for i in a:
        if i in mp1 and i in mp2:
            ans=max(ans,min(mp1[i],mp2[i]))
    print(ans)
