for _ in range(int(input())):
    n,m=map(int,input().split())
    t=list(map(int,input().split()))
    c=list(map(int,input().split()))
    a,b=0,0
    score=0
    for i in range(n):
        if a>b:
            a+=1
        elif b>a:
            b+=1
        else:
            a+=1
        if i in t:
            event=c[i]
            if event==1:
                if a>b:
                    score+=a
                else:
                    score+=b
            elif event==2:
                if a>b:
                    score+=b
                else:
                    score+=a
    print(score)
