import math 
for _ in range(int(input())):
    n,m,k=map(int,input().split())
    cx=0
    cx=(n*k)//m
    bx=0
    bx=-n
    calcx=(n-math.sqrt((pow(n,2)-4*cx)))/2
    cy=(m*k)//n
    by=-m
    calcy=(m-((m**2)-4*cy)**(1/2))/2
    if calcx+calcy==k:
        print("YES")
    else:
        print("NO")