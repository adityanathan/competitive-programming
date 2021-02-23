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
    ll a,b,c,p,t;
    cin>>t;

    while(t--){
        cin>>p>>a>>b>>c;
        cout<<min(min((p-1+a)/a*a,(p-1+c)/c*c),(p-1+b)/b*b)-p<<'\n';
    }
    return 0;
}