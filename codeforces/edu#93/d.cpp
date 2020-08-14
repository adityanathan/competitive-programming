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
    int r,g,b;
    cin>>r>>g>>b;
    vector<int> R(r), G(g), B(b);
    forn(i,0,r)
    	cin>>R[i];
    forn(i,0,g)
    	cin>>G[i];
    forn(i,0,b)
    	cin>>B[i];
    sort(R.begin(),R.end());
    sort(G.begin(),G.end());
    sort(B.begin(),B.end());

    ll ans=0;
    
    while((r==0) + (g==0) + (b==0) <2){
    	int x = r&&g&&b?min(R[r-1],min(G[g-1],B[b-1])):0;
    	if(r==0 || R[r-1]==x)
    		ans+=G[g-1]*B[b-1], g--, b--;
    	else if(g==0 || G[g-1]==x)
    		ans+=R[r-1]*B[b-1], r--, b--;
    	else if(b==0 || B[b-1]==x)
    		ans+=R[r-1]*G[g-1], g--, r--;
    }
    cout<<ans;

    return 0;
}