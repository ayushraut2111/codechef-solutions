for _ in range(int(input())):
    n=int(input())
    s1=input()
    s2=s1[:]
    s1=s1[::-1]
    # print(s1,s2)
    v=[[0]*(n+1)]*(n+1)
    # print(v)
    for i in range(1,n+1):
        for j in range(1,n+1):
            if s2[i-1]==s1[j-1]:
                v[i][j]=1+v[i-1][j-1]
            else:
                v[i][j]=max(v[i-1][j],v[i][j-1])
    print(v[n][n]//2)

