x=input()
m=int(input())
d=ans=0
r=int(1e20)
for i in x:
	d=max(d,ord(i)-ord('0'))
l=d+1
while l<=r:
	mid=(l+r)//2
	curr=0
	for i in x:
		curr*=mid
		curr+=ord(i)-ord('0')
	if curr<=m:
		ans=max(ans,mid)
		l=mid+1
	else:
		r=mid-1
print(ans-d)