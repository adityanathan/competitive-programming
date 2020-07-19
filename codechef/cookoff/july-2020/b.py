def count(A):
	res = set() 

	pre = {0} 

	for x in A: 
		pre = {x | y for y in pre} | {x} 
		res |= pre 

	return len(res) 

t = int(input())
for z in range(t):
	n = int(input())
	a = [int(x) for x in input().split()]
	if count(a) == n*(n+1)//2:
		print("YES")
	else:
		print("NO")