for _ in range(int(input())):
    n=int(input())
    s=input()
    ans=0
    for i in range(len(s)//2):
        if s[i]!=s[-i-1]:
            ans+=1
    print((ans+1)//2)
