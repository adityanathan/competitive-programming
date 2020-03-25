#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
 
vector<int> a(2*100000,0);

int power(int x, unsigned int y, int p)  
{  
    int res = 1;     // Initialize result  
  
    x = x % p; // Update x if it is more than or  
                // equal to p  
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
}  

long long f(int n){
	if(n==1)
		return 10;
	long long x = (n*power(10,n,998244353))%998244353;
	forn(i,n){
		if(a[i]==0)
			a[i]=f(i);
		x=(998244353+x-((n+1-i)*a[i])%998244353)%998244353;
	}
	return x%998244353;
}

int main(){
	int n;

	cin>>n;
	forn(i,n/2){
		cout<<f(n-i)<<" ";
	}
	
	return 0;
}
