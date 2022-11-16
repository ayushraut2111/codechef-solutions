# def isKthBitSet(n, k):
#     if n & (1 << (k)):
#         return True
#     else:
#         return False

# for _ in range(int(input())):
#     n,q=map(int,input().split())
#     a=list(map(int,input().split()))
#     for i in range(q):
#         k,l1,r1,l2,r2=map(int,input().split())
#         x=a[l1-1:r1]
#         y=a[l2-1:r2]
#         # print(x,y)
#         count=0
#         for i in x:
#             for j in y:
#                 if i!=j:
#                     if isKthBitSet(i^j,k):
#                         count+=1
#         print(count)

for _ in range(int(input())):
    n,q=map(int,input().split())
    a=[[0 for i in range(64)] for i in range(n)]
    x=list(map(int,input().split()))
    for i in range(n):
        for j in range(64):
            a[j][i]=int(x[i]%2)
            x[i]/=2
    # print(a)
    # x=list(map(int,input().split()))
    for i in range(64):
        count=0
        for j in range(n):
            count+=a[i][j]
            a[i][j]=count
    for i in range(q):
        k,l1,r1,l2,r2=map(int,input().split())
        l1-=1
        l2-=1
        r1-=1
        r2-=1
        tf=r1-l1+1
        ts=r2-l2+1
        tfo,tso=0,0
        if l1==0:
            tfo=a[k][r1]
        else:
            tfo=a[k][r1]-a[k][l1-1]
        if l2==0:
            tso=a[k][r2]
        else:
            tso=a[k][r2]-a[k][l2-1]
        sum=(int)(tf-tfo)*(int)(tso)+ (int)(tfo)*(int)(ts-tso)
        print(sum)

