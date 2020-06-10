from random import randint

# for i in range(5000):
# 	a=randint(-3,10)
# 	b=randint(-10,10)
# 	c=randint(-10,10)
# 	diff=randint(-10,10)
# 	if a==b or b==c or c==diff or a==c or b==diff or a == diff:
# 		continue
# 	print(a,b,c,diff,diff,0)
# 	print(a,b,c,diff,0,diff)
# 	print(a,b,c,0,diff,diff)
# 	print(a,b,c,diff,0,0)
# 	print(a,b,c,0,0,diff)
# 	print(a,b,c,0,diff,0)

print(pow(7,6))
for a in range(-3,4):
	for b in range(-3,4):
		for c in range(-3,4):
			for d in range(-3,4):
				for e in range(-3,4):
					for f in range(-3,4):
						print(a,b,c)
						print(d,e,f)