t=int(input())
for _ in range(t):
	A,B,n=[int(x) for x in input().split()]
	a=[int(x) for x in input().split()]
	b=[int(x) for x in input().split()]
	bb=True
	for i in range(n):
		if(B-a[i]*((b[i]-1)//A)<=0):
			bb=False;
		B-=a[i]*((b[i]+A-1)//A)
	if bb:
		print("YES")
	else:
		print("NO")