for _ in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    o = len(list(filter(lambda x: (x%2 != 0) , l)))
    e = len(list(filter(lambda x: (x%2 == 0) , l)))
    if o==0 or e==0:
        print(0)
    else:
        print(e)