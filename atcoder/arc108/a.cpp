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

vector<ll> divs(ll n){
	vector<ll> v;
	forn(i,1,sqrt(n)+1)
		if(n%i==0){
			if(n/i!=i)
				v.push_back(n/i);
			v.push_back(i);
		}
	sort(v.begin(),v.end());
	return v;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll s,p;

    cin>>s>>p;
    vector<ll> v= divs(p);
    for(auto x:v)
    	if(p/x+x==s){
    		cout<<"Yes";
    		return 0;
    	}
    cout<<"No"<<'\n';
    
    return 0;
}