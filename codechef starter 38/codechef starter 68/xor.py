mod=998244353
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    c1=a.count(1)
    a.sort()
    for i in range(n):
        if a[i]!=1 and a[i]%2==0 and c1>0:
            a[i]+=1
            c1-=1
    ans=1
    for i in range(n):
        ans=(ans*a[i])%mod
    print(ans)