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
    int n,k,t,ans,mask;
    cin>>t;

    while(t--){
        cin>>n>>k;
        ans=k;
        forn(i,0,n-1){
        	mask=1<<i;
        	ans=(ans & ~mask) | ((k+mask) & 2*mask)/2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}