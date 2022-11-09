def hcfnaive(a, b):
    if(b == 0):
        return abs(a)
    else:
        return hcfnaive(b, a % b)
def isd(x,y):
    if y==1:
        return True
    z=hcfnaive(x,y)
    if z==1:
        return False
    return isd(x,y//z)

if __name__=="__main__":
    for _ in range(int(input())):
        a,b=map(int,input().split())
        if isd(a,b):
            print("YES")
        else:
            print("NO")
