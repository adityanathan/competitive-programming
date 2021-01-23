n=int(input())
ans=1
for i in range(n):
	if input()=='OR':
		ans+=pow(2,i+1)
print(ans)