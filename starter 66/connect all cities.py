for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    j,ans=0,0
    for i in range(n-1):
        if (a[i]& a[i+1]&len(a))==n:
            ans+=a[i]
    if ans==0:
        print(a[n-1])
    else:
        print(ans)