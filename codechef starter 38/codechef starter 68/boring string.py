for _ in range(int(input())):
    n=int(input())
    s=input()
    # dt={}
    # for i in s:
    #     if i not in dt:
    #         dt[i]=1
    #     else:
    #         dt[i]+=1
    # # print(dt)
    # cdict=dict(sorted(dt.items(),key=lambda x:x[1], reverse=True))
    # x=[]
    # for key,value in cdict.items():
    #     x.append(key)
    #     x.append(value)
    #     break
    # if x[1]==1:
    #     print(0)
    #     continue
    # if x[1]==2:
    #     print(1)
    #     continue
    # count=1
    # ans=999999999
    # for i in range(n-1):
    #     j=i+1
    #     if s[i]==s[j]:
    #         count+=1
    #         ans=max(ans,count)
    #     else:
    #         ans=min(ans,count)
    st=set()
    res=s[0]
    l,mx,sum=0,0,1
    # if ans==x[1]:
    for i in range(1,n):
        if s[i-1]!=s[i]:
            if mx<sum:
                mx=sum
                mx-=1
            if res in st:
                l=max(l,sum)
    #         count=1
    # ans=min(ans,count)
    # # print(ans)
    #     print(ans-1)
    # else:
            st.add(res)
            res=s[i]
            sum=1
        else:
            sum+=1
            res+=s[i]
    if res in st:
    #     print(ans)
        l=max(l,sum)
    else:
        if mx<sum:
            mx=sum
            mx-=1
    
    print(max(l,mx))
        