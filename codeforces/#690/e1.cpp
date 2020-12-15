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
    int n,t;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> a(n);
        map<int,ll> m;
        forn(i,0,n)
            cin>>a[i], m[a[i]]++;
        sort(a.begin(),a.end());
        debug(a);
        ll ans=0;
        forit(it,m)
            ans+=it->second>2?it->second*(it->second-1)*(it->second-2)/6:0;
        if(m.size()>1)
            for(auto it = m.begin(); next(it,1)!=m.end(); ++it)
                ans+=it->second>1 && next(it,1)->second && next(it,1)->first-it->first<=2 ?it->second*(it->second-1)/2*next(it,1)->second:0,
                ans+=it->second && next(it,1)->second>1 && next(it,1)->first-it->first<=2 ?next(it,1)->second*(next(it,1)->second-1)/2*it->second:0;
        if(m.size()>2)
            for(auto it = m.begin(); next(it,2)!=m.end(); ++it)
                ans+=it->second>1 && next(it,2)->second && next(it,2)->first-it->first<=2 ?it->second*(it->second-1)/2*next(it,2)->second:0,
                ans+=it->second && next(it,2)->second>1 && next(it,2)->first-it->first<=2 ?next(it,2)->second*(next(it,2)->second-1)/2*it->second:0;
        if(m.size()>2)
            for(auto it = m.begin(); next(it,2)!=m.end(); ++it)
                ans+=next(it,2)->first-it->first<=2 ?it->second*next(it,1)->second*next(it,2)->second:0;
        
        cout<<ans<<'\n';
    }
    return 0;
}