from math import sqrt, gcd

test = int(input())
t = test

while t:
    t -= 1
    n,l = [int(x) for x in input().split()]
    crypt = [int(x) for x in input().split()]
    decrypt = [0]*(len(crypt)+1)
    primes = {}
    if crypt[0]!=crypt[1]:
        primes[crypt[0]//gcd(crypt[0],crypt[1])] = 1
        decrypt[0]=crypt[0]//gcd(crypt[0],crypt[1])
    for i in range(len(crypt)-1):
        if crypt[i] != crypt[i+1]:
            primes[gcd(crypt[i],crypt[i+1])] = 1
            decrypt[i+1]=gcd(crypt[i],crypt[i+1])
    if crypt[-1]!=crypt[-2]:
        primes[crypt[-1]//gcd(crypt[-1],crypt[-2])] = 1
        decrypt[-1]=crypt[-1]//gcd(crypt[-1],crypt[-2])
        
    j = 0
    for dec in decrypt:
    	if dec:
    		break
    	j+=1

    if j<len(decrypt):
	    for i in range(j,0,-1):
	    	decrypt[i-1]=crypt[i-1]//decrypt[i]
	    	primes[decrypt[i-1]]=1
	    for i in range(j,len(crypt)-1):
	    	if not decrypt[i+1]:
	        	decrypt[i+1]=crypt[i+1]//decrypt[i]
	        	primes[decrypt[i+1]]=1
	    if not decrypt[-1]:
	    	decrypt[-1]=crypt[-1]//decrypt[-2]

    cnt=0
    for i in sorted(primes):
        primes[i] = chr(cnt+ord('A'))
        cnt += 1

    # print(decrypt)
    s=""
    for i in range(len(crypt)+1):
    	s+=primes[decrypt[i]]
    	# print(s[i],end="")

    print("Case #"+str(test-t)+": "+s)
        