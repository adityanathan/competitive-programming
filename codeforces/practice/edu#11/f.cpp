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
    ll n, ans=0;
    cin>>n;

    int x[n], y[n];
    map<pair<int,int>,ll> m;

    forn(i,0,n)
    	cin>>x[i]>>y[i];

    forn(i,0,n)
    	forn(j,i+1,n)
    		if(y[j]>y[i])
    			m[{x[j]-x[i],y[j]-y[i]}]++;
    		else if(y[j]==y[i])
    			m[{abs(x[j]-x[i]),0}]++;
    		else
    			m[{x[i]-x[j],y[i]-y[j]}]++;

    forit(it,m)
    	ans+=it->second*(it->second-1)/2;

    cout<<ans/2;
    
    return 0;
}