for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    dict={}
    for i in a:
        if i not in dict:
            dict[i]=1
        else:
            dict[i]+=1
    count=0
    for value in dict.values():
        if value>2:
            count+=1
            break
    if count==0:
        print("YES")
    else:
        print("NO")
