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

map<int,int> pf(ll n){
    map<int,int> m;
    while(n%2==0)
        m[2]++, n/=2;
    for(int i=3;i<=sqrt(n);i+=2)
        while(n%i==0)
            m[i]++, n/=i;
    if(n>2)
        m[n]++;
    return m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,t;
    ll x;
    cin>>t;
    while(t--){
        cin>>n;
        bool b=true;
        x=1;
        map<int,int> f = pf(n);
        map<int,int> primeid;
        for(auto z:f)
            primeid[z.first]=0;

        while(b){
            b=false;
            for(auto id:primeid){
                if(id.second!=f[id.first])
                    b=true;
            }
        }

    }
    return 0;
}