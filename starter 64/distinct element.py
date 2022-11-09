# for _ in range(int(input())):
#     n=int(input())
#     a=map(int,input().split())
#     a=list(a)
#     mp={}
#     if a[0]==a[n-1] or a[1]==a[n-1] or a[0]==a[n-2]:
#         print("YES")
#         continue
#     if a[0]!=a[n-1] and a[0]!=a[n-2]:
#         print("NO")
#         continue
#     for i in a:
#         if i not in mp:
#             mp[i]=1
#         else:
#             mp[i]+=1
#     if len(mp)<=2:
#         print("YES")
#         continue
#     n=len(a)
#     j=len(a)-1
#     i=0
#     temp=[]
#     for i in range(len(a)):
#         j=len(a)-1
#         while j>i and a[i]!=a[j]:
#             j-=1
#         if a[i]==a[j] and i!=j:
#             temp.append([i,j])
#     # print(temp)
#     if len(temp)==0:
#         print("NO")
#         continue
#     count=0
#     print(temp)
#     for l in range(len(temp)):
#         p=a[temp[l][0]]
#         for x in range(temp[l][0],temp[l][1]):
#             a[x]=p
#     st=set(a)
#     if len(st)<=2:
#         print("YES")
#         count+=1
#     # print(a)
#     if count==0:
#         print("NO")
        
#         # p=a[j]
#         # # print(p)
#         # for x in range(i,j):
#         #     a[x]=p
#         # st=set(a)
#         # if len(st)<=2:
#         #     print("YES")
#         #     continue




# for _ in range(int(input())):
#     n=int(input())
#     a=map(int,input().split())
#     a=list(a)
#     mp={}
#     for i in a:
#         if i not in mp:
#             mp[i]=1
#         else:
#             mp[i]+=1
#     if len(mp)<=2:
#         print("YES")
#         continue
#     n=len(a)
#     j=len(a)-1
#     i=0
#     temp=[]
#     for i in range(len(a)):
#         j=len(a)-1
#         while j>i and a[i]!=a[j]:
#             j-=1
#         if a[i]==a[j] and i!=j:
#             temp.append([i,j])
#     # print(temp)
#     if len(temp)==0:
#         print("NO")
#         continue
#     count=0
#     for l in range(len(temp)):
#         p=a[temp[l][1]]
#         for x in range(temp[l][0],temp[l][1]+1):
#             a[x]=p
#         st=set(a)
#         if len(st)<=2:
#             print("YES")
#             count+=1
#             break
#     # print(a)
#     if count==0:
#         print("NO")
        
#         # p=a[j]
#         # # print(p)
#         # for x in range(i,j):
#         #     a[x]=p
#         # st=set(a)
#         # if len(st)<=2:
#         #     print("YES")
#         #     continue


#  n=int(get_input())
#         l1=get_list()
#         if n<3:
#             return 'YES'
#         if l1[0]==l1[n-1]:
#             return 'YES'
#         if l1[0]==l1[n-2]:
#             return 'YES'
#         if l1[1]==l1[n-1]:
#             return 'YES'

#         for i in range(1,n-2,1):
#             if l1[i]==l1[0] and l1[i+1]==l1[n-1]:
#                 return 'YES'
#         return 'NO'


for _ in range(int(input())):
    n=int(input())
    a=map(int,input().split())
    a=list(a)
    if n<3:
        print("YES")
        continue
    if a[0]==a[n-1] or a[0]==a[n-2] or a[1]==a[n-1]:
        print("YES")
        continue
    count=0
    for i in range(1,n-2,1):
        if a[i]==a[0] and a[i+1]==a[n-1]:
            print("YES")
            count+=1
            break
    if count!=1:
        print("NO")