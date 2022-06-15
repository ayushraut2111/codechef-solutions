for _ in range(int(input())):
    n=int(input())
    s=input()
    n=int(n)
    dic={'00':'A','01':'T','10':'C','11':'G'}
    a=''
    for i in range(0,len(s)-1,2):
        a=a+dic[s[i]+s[i+1]]
    print(a)
