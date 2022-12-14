for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a.sort()
    sum,temp,p=0,0,n
    i=n-1
    while i>=0:
        if a[i]>temp:
            temp=1
            break
        else:
            sum+=p-a[i]
            p-=1
        i-=1
    if temp:
        print(-1)
    else:
        print(sum)
    