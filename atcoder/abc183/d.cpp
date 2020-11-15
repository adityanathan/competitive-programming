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
    ll n,w;

    cin>>n>>w;
    vector<ll> p(n),s(n),t(n);
    set<int> time;
    map<int,ll> m;
    forn(i,0,n){
    	cin>>s[i]>>t[i]>>p[i];
    	time.insert(s[i]), time.insert(t[i]);
    	m[s[i]]+=p[i];
    	m[t[i]]-=p[i];
    }
    ll ans=0;
    bool b=true;
    for(auto t:time){
    	ans+=m[t];
    	if(ans>w)
    		b=false;
    }
    cout<<(b?"Yes":"No")<<'\n';
    
    return 0;
}