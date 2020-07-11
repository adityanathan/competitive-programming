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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;

    cin>>n;
    vector<int> a(n+1);
    forn(i,1,sqrt(n)+2)
    	forn(j,1,sqrt(n)+2)
    		forn(k,1,sqrt(n)+2)
    			if(i*i+j*j+k*k+i*j+i*k+j*k<=n)
    				a[i*i+j*j+k*k+i*j+i*k+j*k]++;

    forn(i,1,n+1)
    	cout<<a[i]<<'\n';
    
    return 0;
}