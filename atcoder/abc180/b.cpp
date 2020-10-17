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
    ll n,x=0,y=0,z=0,aa;

    cin>>n;

    forn(i,0,n)
    	cin>>aa, x+=abs(aa), y+=aa*aa, z=max(z,abs(aa));
    cout<<setprecision(13)<<(x)<<'\n'<<sqrt((double)y)<<'\n'<<z<<'\n';
    
    return 0;
}