from math import sqrt, gcd

test = int(input())
t = test

while t:
    t -= 1
    n,l = [int(x) for x in input().split()]
    crypt = [int(x) for x in input().split()]

    primes = {}
    if crypt[0]!=crypt[1]:
    	primes[crypt[0]//gcd(crypt[0],crypt[1])] = 1
    for i in range(len(crypt)-1):
    	if crypt[i] != crypt[i+1]:
        	primes[gcd(crypt[i],crypt[i+1])] = 1
    if crypt[-1]!=crypt[-2]:
    	primes[crypt[-1]//gcd(crypt[-1],crypt[-2])] = 1

    
    cnt=0
    for i in sorted(primes):
    	primes[i] = chr(cnt+ord('A'))
    	cnt += 1

    s = primes[crypt[0]//gcd(crypt[0],crypt[1])]
    prev = crypt[0]//gcd(crypt[0],crypt[1])
    for i in range(len(crypt)-1):
    	prev=crypt[i]//prev
    s += primes[crypt[-1]//gcd(crypt[-1],crypt[-2])]

    print("Case #"+str(test-t)+": "+s)
        