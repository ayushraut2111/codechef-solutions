for _ in range (int(input())):
    s=input()
    l=len(s)
    a=[0]*(l-1)
    a.append(1)
    a.append(1)
    for i in range(l-1)[::-1]:
        if s[i]==s[i+1]:
            a[i]=a[i+1]
        else:
            a[i]=(a[i+1]+a[i+2])%998244353
    print(a[0]%998244353)
    
    
