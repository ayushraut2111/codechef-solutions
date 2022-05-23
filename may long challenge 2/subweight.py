def subweight(a,l,r,n):
    if l==r:
        return 0
    m=(l+r)//2
    pmax=[0]*n
    pmin=[0]*n
    smax=[0]*n
    smin=[0]*n
    ind=[0]*n
    sminsum=[0]*n
    pminsum=[0]*n
    for i in reversed(range(m+1,l)):
        smax[i]=a[i]
        smin[i]=a[i]
        sminsum[i]=ind[a[i]]
        if (i+1)<=m:
           smax[i] = max(smax[i + 1], a[i])
           smin[i] = min(smin[i + 1], a[i])
           sminsum[i] = sminsum[i + 1] + ind[smin[i]]
    for i in range(m+1,r+1):
        pmax[i]=a[i]
        pmin[i]=a[i]
        pminsum[i]=ind[a[i]]
        if (i-1>m):
            pmax[i] = max(pmax[i - 1], a[i])
            pmin[i] = min(pmin[i - 1], a[i])
            pminsum[i] = pminsum[i - 1] + ind[pmin[i]]
    res=0
    for i in reversed(range(m,l+1)):
        j1=m
        j2=m
        while (j1+1<=r and pmax[j1+1]< smax[i]):
            j1+=1
        while (j2 + 1 <= r and pmin[j2 + 1] > smin[i]):
            j2+=1
        allowed=min(j1,j2)-m
        res+=allowed*abs(ind[smax[i]]-ind[smin[i]])
    for i in reversed(range(m,l+1)):
         j1=m
         j2=m
         while (j1+1<=r and pmax[j1+1]< smax[i]):
             j1+=1
         while (j2 + 1 <= r and pmin[j2 + 1] > smin[i]):
            j2+=1
         if j2<=j1:
             res += pminsum[j1]
             if (j2 - 1 > m):
                res -= pminsum[j2 - 1]
                res -= (j1 - j2 + 1) * ind[smax[i]]
    allowed=0
    for i in range(m+1,r+1):
        j1=m
        j2=m+1
        while (j1 - 1 >= l and smax[j1 - 1] < pmax[i]):
            j1-=1
        while (j2 - 1 >= l and smin[j2 - 1] > pmin[i]):
            j2-=1
            allowed = m + 1 - max(j1, j2)
        res += allowed * abs(ind[pmax[i]] - ind[pmin[i]])
    for i in range(m+1,r+1):
        j1=m
        j2=m+1
        while (j1 - 1 >= l and smax[j1 - 1] < pmax[i]):
            j1-=1
        while (j2 - 1 >= l and smin[j2 - 1] > pmin[i]):
            j2-=1
        if j1<=j2:
            res -= sminsum[j1]
            if (j2 + 1 <= m):
                res += sminsum[j2 + 1]
            res += (j2 - j1 + 1) * ind[pmax[i]]
    return res+subweight(a,l,m,n)+subweight(a,m+1,r,n)

if __name__=="__main__":
    for _ in range(int(input())):
        n=int(input())
        a=list(map(int,input().split()))
        print(subweight(a,0,n-1,n))