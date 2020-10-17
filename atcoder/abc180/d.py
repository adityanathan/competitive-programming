x,y,a,b, = [int(x) for x in input().split()]
exp = 0

while x*(a-1)<b and x<y:
	x*=a
	exp+=1
if x>=y:
	exp-=1

print(max((b-1+y-x)//b-1,0)+exp)	