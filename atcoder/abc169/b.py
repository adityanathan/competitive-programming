n=int(input())
a = [int(x) for x in input().split()]
x=1
b=True
for ai in a:
	if ai==0:
		b=True
		x=0
		break
	if x<=1e18+0.02:
		x*=ai
	if x>1e18+0.002:
		b=False
		continue
	
  
if(b):
  print(x)
else:
	print(-1)

  