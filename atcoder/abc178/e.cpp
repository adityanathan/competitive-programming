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
    long long n, minv=1e10, maxv=-1e10, x, y;

    cin>>n;
    forn(i,0,n)
    	cin>>x>>y, minv=min(minv,x-y), maxv=max(maxv,x+y);
    cout<<maxv-minv<<'\n';
    
    return 0;
}