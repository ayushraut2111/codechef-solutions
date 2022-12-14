def answer():
    n=int(input())
    str=input()
    i=1
    while i<2*n:
        if str[i]!=str[i-1]:
            break
        i+=1
    if i==2*n:
        print(-1,end="")
        return 

    flag=0
    if str[0]=='1':
        flag=1
    i=1
    count=n-1
    print(1,end=" ")
    while i<2*n and count:
        temp=int(str[i])
        if temp==flag:
            print(i+1,end=" ")
            count-=1
        else:
            i+=1
            while count!=0 and i<2*n:
                print(i+1,end=" ")
                i+=1
                count-=1
            return 
        i+=1
    
if __name__=="__main__":
    for _ in range(int(input())):
        answer()
        print()