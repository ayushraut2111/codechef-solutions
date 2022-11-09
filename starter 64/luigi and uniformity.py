for _ in range(int(input())):
    n=int(input())
    a=map(int,input().split())
    a=list(a)
    mini=min(a)
    maxi=max(a)
    if mini==maxi:
        print(0)
        continue
    count=0
    for i in a:
        if i%mini!=0:
            count+=1
            break
    if count==0:
        print(len(a)-a.count(mini))
    else:
        print(len(a))