for _ in range(int(input())):
    s=input()
    c1=s.count('01')
    c2=s.count('10')
    print(min(c1,c2))