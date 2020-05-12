#pragma GCC optimize (Ofast)
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)

long long smallestDivisor(long long n) 
{ 
    // if divisible by 2 
    if (n % 2 == 0) 
        return 2; 
  
    // iterate from 3 to sqrt(n) 
    for (long long i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
} 

int main(){
	ios::sync_with_stdio(false);
  	cin.tie(0); 
	long long n,t,k;
	cin>>t;

	while(t--){
		cin>>n>>k;
		if(n&1)
			cout<<n+smallestDivisor(n)+(k-1)*2<<"\n";
		else
			cout<<n+2*k<<endl;
	}
	return 0;
}


