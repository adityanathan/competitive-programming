t=int(input())

def getClosest( val1,  val2, target) :
    if (target - val1 >= val2 - target) :
        return val2
    else:
        return val1

def findClosest(arr,n,target):
	if (target <= arr[0]):
		return arr[0]
	if (target >= arr[n - 1]):
		return arr[n - 1]
	i = 0
	j = n
	mid = 0
	while (i < j):
		mid = (i + j) // 2; 
  
		if (arr[mid] == target) :
			return arr[mid]

		if (target < arr[mid]): 
  
            # // If target is greater than previous 
            # // to mid, return closest of two 
			if (mid > 0 and target > arr[mid - 1]):
				return getClosest(arr[mid - 1],arr[mid], target)
  
			j = mid 
  
        # // If target is greater than mid 
		else:
			if (mid < n - 1 and target < arr[mid + 1]): 
				return getClosest(arr[mid],arr[mid + 1], target)
			i = mid + 1

while t:
	t-=1
	nr,ng,nb=[int(x) for x in input().split()]
	r,g,b=[int(x) for x in input().split()],[int(x) for x in input().split()],[int(x) for x in input().split()]
	r.sort()
	g.sort()
	b.sort()
	ans=10**25
	for i in range(nr):
		a=r[i]
		bb = findClosest(g,ng,a);
		c=findClosest(b,nb,a);
		ans=min(ans,(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a))
	for i in range(nb):
		a=b[i]
		bb = findClosest(g,ng,a);
		c=findClosest(r,nr,a);
		ans=min(ans,(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a))
	for i in range(ng):
		a=g[i]
		bb = findClosest(b,nb,a);
		c=findClosest(r,nr,a);
		ans=min(ans,(a-bb)*(a-bb)+(bb-c)*(bb-c)+(c-a)*(c-a))
	print(ans)