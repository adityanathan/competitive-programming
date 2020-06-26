n,m = [int (x) for x in input().split()]
ans = pow(n,m-2,m)
assert((ans*n)%m==1 and pow(n,m-1,m)==1)
print(pow(n,m-2,m))