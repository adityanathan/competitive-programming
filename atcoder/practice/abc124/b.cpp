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
    int n,x,ans=0,mx=0;

    cin>>n;

    forn(i,0,n){
    	cin>>x;
    	ans+=x>=mx;
    	mx=max(mx,x);
    }
    cout<<ans<<'\n';
    
    return 0;
}