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
    int n,h,c0,c1,t;
    string s;
    cin>>t;

    while(t--){
        cin>>n>>c0>>c1>>h>>s;
        ll ans=0;
        forn(i,0,n)
        	if(s[i]=='0')
        		ans+=min(c0,c1+h);
        	else
        		ans+=min(c1,c0+h);
        cout<<ans<<'\n';
    }
    return 0;
}