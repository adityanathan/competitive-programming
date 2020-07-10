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
    int n,a,ans,pop;

    while(cin>>n,n){
        map<set<int>,int> m;
        while(n--){
            set<int> s;
            forn(i,0,5)
                cin>>a,s.insert(a);
            m[s]++;
        }
        pop=ans=0;
        forit(it,m)
            pop=max(pop,it->second);
        forit(it,m)
            ans+=it->second*(it->second==pop);
        cout<<ans<<'\n';
    }
    return 0;
}