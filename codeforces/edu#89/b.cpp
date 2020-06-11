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
    int n,xl,xr,m,l,r,t;
    cin>>t;

    while(t--){
        cin>>n>>xl>>m;
        xr=xl;
        forn(i,0,m){
        	cin>>l>>r;
        	if(l<=xr && r>=xl)
        		xr=max(r,xr),xl=min(l,xl);
        }

        cout<<xr-xl+1<<'\n';
    }
    return 0;
}