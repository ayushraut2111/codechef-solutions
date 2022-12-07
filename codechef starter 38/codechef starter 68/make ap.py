for _ in range(int(input())):
    x,y=map(int,input().split())
    if float((x+y)//2)==(x+y)/2:
        print((x+y)//2)
    else:
        print(-1)