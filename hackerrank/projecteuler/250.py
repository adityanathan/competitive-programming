def cycle(n,k):
	m={}
	for i in range(k):
		if pow(n,i,k) in m:
			return i-m[pow(n,i,k)]
		m[pow(n,i,k)]=i

while True:
	n,k = [int(x) for x in input().split()]
	cycles=[]
	for i in range(k):
		cycles.append(cycle(i,k))
		print(cycles[-1])