for _ in range(int(input())):
    n=int(input())
    s=input()
    s=list(s)
    count=0
    for i in range(n-1):
        j=i+1
        if s[i]==s[j]:
            count+=1
    print(count)
