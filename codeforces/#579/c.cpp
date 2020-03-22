#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)

int printDivisors(long long n) 
{ int count=0;
    // Note that this loop runs till square root 
    for (long long i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                count++; 
  
            else // Otherwise print both 
                count+=2;
        } 
    } 
    return count;
} 

long long gcd(long long a, long long b)
{
    if (b)
        return gcd(b, a % b);
    else
        return a;
}

int main(){
	int n;
	cin>>n;
	vector<long long> a(n);
	cin>>a[0];
	long long x=a[0];
	forn(i,n-1){
		cin>>a[i+1];
		x=gcd(x,a[i+1]);
	}
	cout<<printDivisors(x);
	return 0;
}