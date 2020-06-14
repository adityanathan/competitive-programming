k=int(input())
s=input()
t=input()

num1=num2=0

for i in range(k):
	num1*=26
	num2*=26
	num1+=ord(s[i])-ord('a')
	num2+=ord(t[i])-ord('a')

med=(num1+num2)//2

ans=[]

while(med):
	ans.append(chr(ord('a')+med%26))
	med//=26

ans.reverse()

print('a'*(k-len(ans)),end="")

for i in ans:
	print(i,end="")