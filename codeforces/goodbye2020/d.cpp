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
    int n,x,y,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n), deg(n), all;
        ll ans=0;
        forn(i,0,n)
        	cin>>a[i];
        forn(i,0,n-1)
        	cin>>x>>y, deg[x-1]++, deg[y-1]++;
        forn(i,0,n)
        	deg[i]--, ans+=a[i];
        forn(i,0,n)
        	while(deg[i]--)
        		all.push_back(a[i]);
        sort(all.rbegin(),all.rend());
        cout<<ans<<' ';
        for(auto x:all)
        	ans+=x, cout<<ans<<' ';
        cout<<'\n';
    }
    return 0;
}