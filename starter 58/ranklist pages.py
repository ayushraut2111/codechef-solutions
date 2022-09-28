for _ in range(int(input())):
    x=int(input())
    if x<=25:
        print(1)
    elif x%25==0:
        print(x//25)
    else:
        print(x//25+1)