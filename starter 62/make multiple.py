for _ in range(int(input())):
    hg,df=map(int,input().split())
    if df%hg== True:
        if df>2*hg:
            print("YES")
        else:
            print("NO")
    else:
        print("YES")