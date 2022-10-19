for _ in range(int(input())):
    a=list(map(int,input().split()))
    count=0
    for i in range(3):
        for j in range(3):
            if (a[i]+a[j])%2 != 0:
                count+=1
                break
    if count !=0:
        print("yes")
    else:
        print("no")
                

