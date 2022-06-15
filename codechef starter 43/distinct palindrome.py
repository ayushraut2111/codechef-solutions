from audioop import reverse


for _ in range(int(input())):
    n,x=map(int,input().split())
    if n%2==0:
        if(n//2!=x):
            print(-1)
        else:
            if n==1 and x==1:
                print('z')
            else:
                a=str("abcdefghijklmnopqrstuv")
                s=a[0:n//2]
                print(s+s[::-1])

                 
    else:
        if (n//2+1)!=x:
            print(-1)
        else:
            if n==1 and x==1:
                print('z')
            else:
                a=str("abcdefghijklmnopqrstuv")
                s=a[0:n//2+1]
                g=len(s)
                for i in reversed(range(g-1)):
                    s+=s[i]
                print(s)

                

# for _ in range(int(input())):
#     n,x=map(int,input().split())
#     a=str("abcdefghijklmnopqrstuv")
#     s=''
#     s=a[0:n//2]
#     if x>(n//2+1):
#         print(-1)
#     else:
#         if n==1 and x==1:
#             print('a')
#         else:
#             print(s+s[::-1])