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
    ll a,b,t;
    cin>>t;

    while(t--){
        cin>>a>>b;
        if(a>b)
        	swap(a,b);
        cout<<(b-a>=a?a:b-a+(2*a-b)*2/3)<<'\n';
        // cout<<max(min(min(a,b),max(a,b)/2),min(a,b)/3*2+(max(a,b)-min(a,b)/3*3>=2 && min(a,b)-min(a,b)/3*3>=1)+(max(a,b)-min(a,b)/3*3>=4 && min(a,b)-min(a,b)/3*3>=2))<<'\n';
    }
    return 0;
}