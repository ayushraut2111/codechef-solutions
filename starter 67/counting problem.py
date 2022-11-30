def check_odd(x):
    if x%2!=0:
        return True
    else:
        return False
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    count=0
    for i in a:
        if check_odd(i):
            count+=1
    if count==0:
        print("NO")
        continue
    if count%2==0:
        print("YES")
    else:
        print("NO")