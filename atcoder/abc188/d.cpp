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
    ll n,c,a,b,ci;

    cin>>n>>c;
    map<int,ll> m;
    forn(i,0,n)
    	cin>>a>>b>>ci, m[a]+=ci, m[b+1]-=ci;
    ll cur=0, tot=0, day=0;
    forit(it,m){
    	tot+=min(c,cur)*(it->first-day);
    	cur+=it->second; day=it->first;
    }

    cout<<tot<<'\n';
    
    return 0;
}