for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    mp={}
    for i in l:
        if i not in mp:
            mp[i]=1
        else:
            mp[i]+=1
    count=0
    for key,val in mp.items():
        count=max(count,val)
    print(len(l)-count)
