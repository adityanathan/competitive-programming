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
    ll n,k,a,i,t;
    cin>>t;

    while(t--){
        cin>>n>>k;
        map<ll,ll> m;
        forn(ij,0,n){
            cin>>a;
            i=0;
            while(a)
                m[i++]+=a%2,a/=2;
        }
        forit(it,m){
            it->second*=pow(2,it->first);
        }
        forn(i,0,k){
            if(m.find(i)==m.end())
                m[i]=0;
        }
        vector<pair<ll,ll>> v;
        forit(it,m){
            v.push_back({it->second,-it->first});
        }
        sort(v.rbegin(),v.rend());
        ll ans=0;
        forn(i,0,k)
            ans+=pow(2,-v[i].second);
        cout<<ans<<'\n';
    }
    return 0;
}