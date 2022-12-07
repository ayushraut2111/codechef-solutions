for _ in range(int(input())):
    n,x=map(int,input().split())
    n=n-1
    income=2**x
    income-=income/2

    while n:
        income-=income/2
        n-=1
    print(int(income))   
    


