for _ in range(int(input())):
    n=int(input())
    s=input()
    a=s[:n//2]
    b=s[n//2:]
    print(a,b)
    if a==b:
        print("yes")
    else:
        print("no")