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
    ll t,a,b,n,m;
    cin>>t;

    while(t--){
        cin>>a>>b>>n>>m;
        cout<<(min(a,b)>=m && a+b>=m+n?"Yes":"No")<<'\n';
    }
    return 0;
}