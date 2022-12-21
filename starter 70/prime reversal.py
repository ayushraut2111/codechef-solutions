for _ in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    o1=a.count('1')
    z1=n-o1
    o2=b.count('1')
    z2=n-o2
    if o1==o2 and z1==z2:
        print("YES")
    else:
        print("NO")