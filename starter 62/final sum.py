for _ in range(int(input())):
    n,q=map(int,input().split())
    a=list(map(int,input().split()))
    b=[]
    sm=sum(a)
    for iota in range(q):
        l,r=map(int,input().split())
        b.append([l,r])
    for iota in range(q):
        gsjd=b[iota][1]-b[iota][0]
        gsjd+=1
        if gsjd%2==0:
            continue
        else:
            sm+=1
    print(sm)   
