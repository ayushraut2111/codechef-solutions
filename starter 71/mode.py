def mode(a):
    dic={}
    for i in a:
        if i not in dic:
            dic[i]=1
        else:
            dic[i]+=1
    d = list(sorted(dic.items(), key=lambda x:x[1]))
    # print(d)
    d.reverse()
    # print(d)
    s=[]
    for i in d:
        s.append(i[1])
    if len(s)==1:
        return s[0]
    if s[0]==s[1]:
        return -1
    else:
        return s[0]

    # print(dic)

def printSubArrays(arr, start, end,ans):
     
    if end == len(arr):
        return
     
    elif start > end:
        return printSubArrays(arr, 0, end + 1,ans)
         
    else:
        ans.append(arr[start:end + 1])
        return printSubArrays(arr, start + 1, end,ans)

for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=[]
    printSubArrays(a,0,0,ans)
    # print(len(ans))
    p=[]
    for i in ans:
        x=mode(i)
        if x!=-1:
            p.append(x)
    print(len(p))