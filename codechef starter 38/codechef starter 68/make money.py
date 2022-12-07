for _ in range(int(input())):
    n,x,c=map(int,input().split())
    a=list(map(int,input().split()))
    total,cost=0,0
    for i in a:
        if x-(c+i)>=0:
            cost+=c
            total+=x
        else:
            total+=i
    print(total-cost)

        
    



    # if(  k -  (c+x) >= 0)
    #     {
    #         cost += c;
    #         total += k;
    #     }else
    #         total += x;
    # }

    # cout<<total-cost;
