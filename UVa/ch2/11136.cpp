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
    ll n,aa,ans,k;
    while(cin>>n,n){
        multiset<int> m;
        ans=0;
        while(n--){
            cin>>k;
            while(k--){
                cin>>aa;
                m.insert(aa);
            }
            ans+=*m.rbegin()-*m.begin();
            m.erase(m.begin()), m.erase(m.find(*m.rbegin()));
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}