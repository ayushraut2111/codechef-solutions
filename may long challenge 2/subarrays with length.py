#❤️❤️❤️❤️❤️❤️❤️❤️❤️
def ques(l,n):
    temp=0
    dict={}
    for i in range(n):
        w=l[i]
        u=i-w+1 if i-w>=0 else 0
        if (l[i]) in dict and dict[(l[i])]>=u:
            u=dict[l[i]]+1
        end=n-1 if u+w-1>=n else u+w-1
        if end-u+1!=w or u>end:
            continue
        temp+=min(i-u+1,n-end)
        dict[(l[i])]=i
    print(temp)
if __name__=="__main__":
    for _ in range(int(input())):
        n=int(input())
        l=list(map(int,input().split()))
        ques(l,n)
else:
    pass