for _ in range(int(input())):
    n=int(input())
    s=input()
    loc=[]
    if n<=2:
        print(1)
        continue

    for i in range(n):
        if s[i]=='1':
            loc.append(i)
    ans=9999999999
    for i in range(len(loc)-1):
        j=i+1
        if abs(loc[i]-loc[j])<=2:
            ans=min(ans,abs(loc[i]-loc[j]))
        else:
            ans=min(ans,(abs(loc[i]-loc[j])%2))
    print(ans)
        

