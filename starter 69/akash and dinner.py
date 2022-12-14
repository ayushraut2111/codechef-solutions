for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    st=set(a)
    if len(st)<k:
        print(-1)
        continue
    mp={}
    for i in range(n):
        if a[i] not in mp:
            mp[a[i]]=[b[i]]
        else:
            mp[a[i]].append(b[i])
    mp1={}
    for key,value in mp.items():
        mp1[key]=min(value)
    sm= sorted(mp1.items(), key=lambda x:x[1])
    converted_dict = dict(sm)
    i=0
    ans=0
    for key,value in converted_dict .items():
        if i==k:
            break
        ans+=value
        i+=1
    print(ans)

