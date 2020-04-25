print(5)
for i in range(5):
	print(100000)
	for i in range(50000):
		print((i+1),end=" ")
	for i in range(50000):
		print(103*(i+1+50000),end=" ")
	print("")