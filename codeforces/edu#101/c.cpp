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
    ll n,k,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        vector<ll> l(n), r(n);
        bool b=true;
        forn(i,0,n)
        	cin>>l[i], r[i]=k+l[i]+(k-1)*(i&&(i^(n-1)));
        debug(l,r);
        forn(i,1,n)
        	if(r[i-1]<=l[i]||l[i-1]>=r[i])
        		b=false;
        	else
        		l[i]=max(l[i],l[i-1]+1-k),
        		r[i]=min(r[i],r[i-1]+k-1);
        cout<<(b?"Yes":"NO")<<'\n';
    }
    return 0;
}