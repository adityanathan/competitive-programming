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
    ll n,o;
    cin>>n;
    unordered_set<ll> s;
    unordered_set<ll> fin;
    vector<ll> a(n);

    forn(i,0,n)
    	cin>>a[i];

    forn(l,0,n){
    	o=a[l];
    	forn(r,l,n){
    		o|=a[r];
    		if(!s.count(o+20000000LL*r))
    			s.insert(o+20000000LL*r);
    		else break;
    	}
    }

    for(auto x:s)
    	fin.insert(x%20000000LL);

    cout<<fin.size();
    return 0;
}