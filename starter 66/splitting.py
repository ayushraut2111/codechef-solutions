# def findMinOps(a, n):
# 	ans = 0


# 	i,j = 0,n-1
# 	while i<=j:

# 		if a[i] == a[j]:
# 			i += 1
# 			j -= 1


# 		elif a[i] > a[j]:
# 			j -= 1
# 			a[j] += a[j+1]
# 			ans += 1

# 		else:
# 			i += 1
# 			a[i] += a[i-1]
# 			ans += 1

# 	return ans


# a = [1,2,3,4,5]
# n = len(a)
# print("Count of minimum operations is " + str(findMinOps(a, n)))

# # This code is contributed by Pratik Chhajer
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    i, j = 0, n-1
    while i < j:
        if a[i]==a[j]:
            i+=1
            j-=1
        elif a[i]>a[j]:
            a[j]=a[j]+1
            ans+=1
        else:
            a[i]=a[i]+1
            ans+=1
    print(ans)
