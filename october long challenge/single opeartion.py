for _ in range (int(input())):
    n=int(input())
    s=input()
    x=list(s)
    if x.count('0')==0:
        print(len(s))
        continue
    count=x.index('0')
    print(count)
    # num1=int(s,2)
    # num=num1>>count
    # p=format(num1^num,"b")
    # # print(str(bin(num1^num)))
    # print(p)
    