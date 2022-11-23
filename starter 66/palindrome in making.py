for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    i, j = 0, n-1
    while i < j:
        if a[i]==a[j]:
            i+=1
            j-=1
        elif a[i]>a[j]:
            a[j]=a[j]+1
            ans+=1
        else:
            a[i]=a[i]+1
            ans+=1
    print(ans)
