for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if n==1:
        print(1)
        continue
    b=[0]*200001
    # print(a)
    for i in range(1,n):
        b[i]=a[i]<a[i-1]
    k=[]
    k.append([b[1],1])
    for i in range(2,n):
        if b[i]==k[len(k)-1][0]:
            k[len(k)-1][1]+=1
        else:
            k.append([b[i],1])
    k.append([0,0])
    ans=0
    for i in range(0,len(k)-1):
        ans+=k[i][1]*(k[i][1]+1)//2
        if k[i][0]==1:
            ans+=k[i][1]*k[i+1][1]
    print(ans+n)
