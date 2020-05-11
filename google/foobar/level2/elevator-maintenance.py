def solution(l):
	l = [[int(x) for x in li.split('.')] for li in l]
	for i in range(len(l)):
		while len(l[i]) < 3:
			l[i].append(-1)
	for i in range(len(l)):
		x=i
		for j in range(i+1,len(l)):
			if l[j]<l[x] :
				x = j
		temp = l[i]
		l[i] = l[x]
		l[x] = temp

	for i in range(len(l)):
		x = str(l[i][0])
		for j in range(1,3):
			if l[i][j] != -1 :
				x += "." + str(l[i][j])
		l[i] = x

	return l