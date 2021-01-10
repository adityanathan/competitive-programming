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
    int n1,n2,n3;
    
    cin>>n1>>n2>>n3;
    ll mina=1e9+7, minb=1e9+7, minc=1e9+7, sum=0;
    vector<ll> a(n1), b(n2), c(n3), d;
    forn(i,0,n1)
    	cin>>a[i], mina=min(mina,a[i]), sum+=a[i], d.push_back(a[i]);
    forn(i,0,n2)
    	cin>>b[i], minb=min(minb,b[i]), sum+=b[i], d.push_back(b[i]);
    forn(i,0,n3)
    	cin>>c[i], minc=min(minc,c[i]), sum+=c[i], d.push_back(c[i]);
    sort(d.begin(),d.end());
    mina=d[0], minb=d[1];

    cout<<sum-2*(mina+minb+minc-max(mina,max(minb,minc)))<<'\n';
    
    return 0;
}