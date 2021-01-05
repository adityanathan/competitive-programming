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
    int n,m,t;
    cin>>t;

    while(t--){
        cin>>n>>m;
        vector<int> a(n), c(m);
        ll ans=0, cheap=0;
        forn(i,0,n)
        	cin>>a[i], a[i]--;
        sort(a.rbegin(),a.rend());
        forn(i,0,m)
        	cin>>c[i];
        forn(i,0,n)
        	if(a[i]>=cheap)
        		ans+=c[cheap++];
        	else
        		ans+=c[a[i]];

        cout<<ans<<'\n';
    }
    return 0;
}