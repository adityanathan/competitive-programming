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
    ll n,x;
    string s;

    cin>>n>>x>>s;
    forn(i,0,n)
    	x+=(s[i]=='o')?1:-1, x=max(x,0ll);
    
    cout<<x;
    return 0;
}