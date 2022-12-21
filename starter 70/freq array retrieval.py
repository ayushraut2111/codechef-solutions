for _ in range(int(input())):
    n=int(input())
    b=list(map(int,input().split()))
#     dic={}
#     for i in b:
#         if i in dic:
#             dic[i]+=1
#         else:
#             dic[i]=1
#     l=0
    v=[0]*100001
    dic=[0]*100001
    a=[0]*n
    m=0
    l=1
    for i in range(n):
            if dic[b[i]]==0 or v[dic[b[i]]]<=0:
                v[l]=b[i]-1
                a[i]=l
                dic[b[i]]=l
                l+=1
            else:
                a[i]=dic[b[i]]
                v[a[i]]-=1
            m=max(m,l)
    p=0
    for i in range(m):
        if v[i]>0:
            print(-1)
            p=1
            break
    if p==1:
        continue
    for i in a:
        print(i,end=" ")
    print()

                

#     for key,values in dic.items():
#         if values<key or values%key!=0:
#             print(-1)
#             l=1
#             break
#     if l==1:
#         continue
#     ans=b[:]
#     l=1
#     for key,value in dic.items():
#         if b.l(key)==value:
#             while value in ans:
#                 ans[ans.index(value)]=l
#             l+=1
#         else:

