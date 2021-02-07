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
    ll n,A,B,t;
    cin>>t;

    while(t--){
        cin>>A>>B>>n;
        vector<pair<ll,ll>> a(n);
        forn(i,0,n)
        	cin>>a[i].first;
        forn(i,0,n)
        	cin>>a[i].second;
        sort(a.begin(),a.end());
        bool bb=true;
        forn(i,0,n){
        	if(B-a[i].first*((a[i].second-1)/A)<=0)
        		bb=false;
        	B-=a[i].first*((a[i].second+A-1)/A);
        }
        cout<<(bb?"YES":"NO")<<'\n';
    }
    return 0;
}