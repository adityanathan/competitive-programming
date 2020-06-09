from random import randint

for i in range(5000):
	a=randint(-10,10)
	b=randint(-10,10)
	c=randint(-10,10)
	diff=randint(-10,10)
	if a==b or b==c or c==diff or a==c or b==diff or a == diff:
		continue
	print(a,b,c,diff,diff,0)
	print(a,b,c,diff,0,diff)
	print(a,b,c,0,diff,diff)
	print(a,b,c,diff,0,0)
	print(a,b,c,0,0,diff)
	print(a,b,c,0,diff,0)