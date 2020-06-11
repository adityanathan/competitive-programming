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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);

    map<int,vector<int>> pos;
    forn(i,0,n)
    	cin>>a[i];

    forn(i,0,m)
    	cin>>b[i];

    forn(i,0,n){
    	if(binary_search(b.begin(),b.end(),a[i]))
    		pos[a[i]].push_back(i);
    }

    ll tot=0;

    // debug(pos);
    for(auto x:pos)

    for(auto x:pos[b[0]]){
    	ll ans=1;
    	forn(j,1,m){
    		ans*=(pos[b[j]].end()-lower_bound(pos[b[j]].begin(),pos[b[j]].end(),x));
    		ans%=998244353;
    		if(!ans)
    			break;
    		x=*lower_bound(pos[b[j]].begin(),pos[b[j]].end(),x);
    	}
    	tot+=ans;
    	tot%=998244353;
    }
    cout<<tot;

    return 0;
}