for _ in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    ans=0
    for i in range(n):
        diff=abs(ord(a[i])-ord(b[i]))
        if ord(a[i])==ord(b[i]):
            continue
        elif ord(a[i])<ord(b[i]):
            if diff>=13:
                ans+=(diff-26)
            else:
                ans+=diff
            # print("a",ans)
        else:
            if diff>=13:
                ans+=(26-diff)
            else:
                ans-=diff
            # print("b",ans)
    print(min(abs(ans % 26 - 26), ans % 26))