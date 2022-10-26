
import math


def getPerfectSquares(n):
    perfectSquares = []
    current = 1
    i = 1
    while (current <= n):
        perfectSquares.append(current)
        i += 1
        current = i ** 2
    return perfectSquares


def countTriplets(n):
    perfectSquares = getPerfectSquares(n)
    # count = 0
    cSquare = n
    c = math.sqrt(cSquare)
    c = int(c)
    for a in range(int(math.sqrt(n+1))):
        aSquare = a**2
        for i in range(int(math.sqrt(n+1))):
            bSquare = abs(cSquare - aSquare)
            b = math.sqrt(bSquare)
            b = int(b)
            if (c < a or (bSquare not in perfectSquares)):
                continue
            if (b >= a) and (b <= c) and (aSquare + bSquare == cSquare):
                print(a, b)
                return

    print(-1)


if __name__ == "__main__":

    for _ in range(int(input())):
        n = int(input())
        countTriplets(n)



# def solve(n):
#     x=0
#     while n%2==0:
#         x+=1
#         n//=2
#     if x%2==1:
#         x-=1
#         n*=2
#     for i in range(int(sqrt(n))):
#         y=n-i**2
#         z=int(sqrt(y))
#         if z**2==y:
#             print(z<<(x//2),i<<(x//2))
#             return
#     print(-1)
# from math import sqrt


# for _ in range(int(input())):
#     n = int(input())
#     solve(n)
    