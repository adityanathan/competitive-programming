import collections
import sys
# sys.stdin=open('a.txt','r')
t = int(input())
p=998244353
while t:
	t-=1
	n = int(input())
	twon=n
	m = {}
	a = [int(x) for x in input().split()]
	for aa in a:
		if aa not in m:
			m[aa]=0
		m[aa]+=1
	sum=0
	m = collections.OrderedDict(sorted(m.items()))

	i=1
	for key in m:
		if key!=i:
			break
		else:
			i+=1
	# print('i',i)
	prod=1
	for key in m:
		if key>i:
			break
		twon-=m[key]
		sum+=(key*pow(2,twon,p)*prod)%p
		prod=(prod*(pow(2,m[key],p)-1))%p;
		# print('sum',sum)
	sum+=i*(prod)*pow(2,twon,p)
	print(sum%p//1)

