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
    ll x,y,ans=0;

    cin>>x>>y;
    
    if(x>=y){
        cout<<x-y;
        return 0;
    }
    while(log2(x)+1<=log2(y))
        ans+=1+y%2, y/=2;
    
    

    cout<<ans<<'\n';
    
    return 0;
}