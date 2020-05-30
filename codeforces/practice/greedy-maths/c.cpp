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
    int n,f;
    ll ans=0;

    {
        cin>>n>>f;
        vector<int> k(n),l(n),z(n);

        forn(i,0,n){
        	cin>>k[i]>>l[i];
        	ans+=min(k[i],l[i]);
        	z[i]=max(0,2*k[i]<l[i]?k[i]:l[i]-k[i]);
        }
        sort(z.begin(),z.end());
        forn(i,0,f)
        	ans+=z[n-1-i];
        cout<<ans<<'\n';
    }
    return 0;
}