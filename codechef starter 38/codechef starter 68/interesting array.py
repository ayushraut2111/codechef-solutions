def wigglie(arra_nums):
    for i, _ in enumerate(arra_nums):
        if (i % 2 == 1) == (arra_nums[i - 1] > arra_nums[i]):
            arra_nums[i - 1], arra_nums[i] = arra_nums[i], arra_nums[i - 1]
    return arra_nums
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    a=wigglie(a)
    p=0
    for i in range(n-2):
        if a[i]<=a[i+1] and a[i+1]<=a[i+2]:
            p=1
        if a[i]>=a[i+1] and a[i+1]>=a[i+2]:
            p=1
    if p==0:
        for i in range(n):
            print(a[i],end=" ")
    else:
        print(-1,end="")
    print()
    
    