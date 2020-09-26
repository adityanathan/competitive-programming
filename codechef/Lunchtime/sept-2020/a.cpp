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
    int n,t,x,y;
    cin>>t;

    while(t--){
        cin>>n;
        ll ans=0;
        vector<vector<int>> adj(n);
        for(int i=0;i<n-1;i++)
            cin>>x>>y,
            adj[y-1].push_back(x-1);
        forn(i,0,n)
            ans+=max(0,(int)adj[i].size()-1);
        cout<<ans<<'\n';
    }
    return 0;
}