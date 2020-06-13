t=int(input());
for x in range(t):
	n,m=[int(x) for x in input().split()]
	ans=n*(n+1)//2;
	p=2;
	while p<n+0.01:
		ans-=(n//p)*(n//p+1)//2;
		p*=2;
	print(ans%m);