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
    int x,y,t;
    cin>>t;

    while(t--){
        cin>>x>>y;
        ll ans=0;
        forn(i,2,min(y+1,(int)sqrt(x)+3))
        	ans+=x/i;
        
        int i=min(y+1,(int)sqrt(x)+3);
        while(x/i>1&&i<=y){
        	ans+=x/(x/i-1)-i+1;
        	i=x/(x/i-1);
        }

        cout<<ans<<'\n';
    }
    return 0;
}