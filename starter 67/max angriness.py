
for _ in range(int(input())):
    op,k=map(int,input().split())
    if 2*k>=op:
        if op<=1:
            print(0)
        else:
            print(int(op*(op-1)//2))
        continue
    xolo=op-2*k
    ans=2*(k*(k-1)//2) + k*(op-k) + xolo*k
    print(int(ans))
