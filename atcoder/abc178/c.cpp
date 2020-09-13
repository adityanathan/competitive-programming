#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "../debug.h"
#else
#define debug(x...) 141
#endif
#define forn(i,x,n) for(int i = x; i < n; ++i)
#define forit(it, m) for(auto it = m.begin(); it!=m.end(); ++it)
typedef long long ll;

long long p = 1e9+7.5;

long long pwr(long long a, long long n){
	if(n==0)
		return 1;
	long long x=pwr(a,n/2);
	if(n%2)
		return x*x%p*a%p;
	return x*x%p;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;

    cin>>n;
    cout<<(5*p+pwr(10,n)-2*pwr(9,n)+pwr(8,n))%p<<'\n';
    
    return 0;
}