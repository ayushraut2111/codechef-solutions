def solve(l,n):
    dp=[[0]*7 for i in range(n+2)]
    M=1e9+7
    dp[0][0]=1
    for i in range(n):
        j=int(len(str(l[i])))
        p=1
        while(j!=0):
            p=p*10
            j-=1
        for k in range(7):
            y=(k*p+l[i])%7
            dp[i+1][k]=(dp[i+1][k]+dp[i][k])%M
            dp[i+1][y]=(dp[i+1][y]+dp[i][k])%M
    
    print(int((dp[n][0]-1+M)%M))

if __name__=="__main__":
    for _ in range(int(input())):
        n=int(input())
        l=list(map(int,input().split()))
        solve(l,n)
else:
    pass