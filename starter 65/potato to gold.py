
m=10**9+7
for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    ayush=[0 for i in range(k)]
    for i in range(n):
        ayush[a[i]%k]+=1
    chaurasia=1
    if ayush[0]>=1:
        chaurasia*=(ayush[0]+1)
    for i in range(1,k//2+1):
        if k%2==0 and i==k//2:
            if ayush[i]!=0:
                chaurasia*=ayush[i]+1
            chaurasia=chaurasia%m
            continue
        if ayush[i]==0 and ayush[k-i]==0:
            continue
        if ayush[i]==0:
            chaurasia*=2**ayush[k-i]
            chaurasia=chaurasia%m
            continue
        if ayush[k-i]==0:
            chaurasia*=2**ayush[i]
            chaurasia=chaurasia%m
            continue
        chaurasia*=2**(ayush[i])+2**(ayush[k-i])-1
        chaurasia=chaurasia%m
    print(chaurasia)
        

