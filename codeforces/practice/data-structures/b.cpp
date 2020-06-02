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
    ll n,m,t,d,cheap;

    cin>>n>>m;
    vector<ll> a(n),c(n);
    vector<pair<int,int>> ac(n);
    forn(i,0,n){
    	cin>>a[i];
    }
    forn(i,0,n){
    	cin>>c[i];
    	ac[i]=make_pair(c[i],i);
    }
    sort(ac.begin(),ac.end());
    cheap=0;
    forn(j,0,m){
    	cin>>t>>d;
    	if(a[t-1]>=d){
    		a[t-1]-=d;
    		cout<<c[t-1]*d<<'\n';
    		// debug(a);
    		continue;
    	}
    	
    	ll dish=min(a[t-1],d),cost=dish*c[t-1];
    	a[t-1]-=dish;
    	d-=dish;
    	while(cheap<n && d){
    		// debug(cheap,ac[cheap]);
    		dish=min(a[ac[cheap].second],d);
    		cost+=dish*c[ac[cheap].second];
    		a[ac[cheap].second]-=dish;
    		if(a[ac[cheap].second]==0)
    			cheap++;
    		d-=dish;
    	}
    	if(d)
    		cout<<"0\n";
    	else
    		cout<<cost<<'\n';
    	// debug(a);
    }
    return 0;
}